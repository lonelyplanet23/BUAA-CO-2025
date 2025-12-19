`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:08:20 12/07/2025
// Design Name:   MultDivUnit
// Module Name:   C:/Users/27628/Desktop/CO-2025/P6/Pipeline_cpuP6/MDU_tb.v
// Project Name:  Pipeline_cpuP6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MultDivUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
`define MDU_MULT   3'b000 // mult
`define MDU_MULTU  3'b001 // multu
`define MDU_DIV    3'b010 // div
`define MDU_DIVU   3'b011 // divu
`define MDU_MTHI   3'b100 // mthi
`define MDU_MTLO   3'b101 // mtlo
`define MDU_NOP    3'b110 // nop
module MDU_tb;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [2:0] MDUOp;
	reg clk;
	reg reset;
	reg start;

	// Outputs
	wire [31:0] E_HI;
	wire [31:0] E_LO;
	wire busy;

	// Instantiate the Unit Under Test (UUT)
	MultDivUnit uut (
		.A(A), 
		.B(B), 
		.MDUOp(MDUOp), 
		.E_HI(E_HI), 
		.E_LO(E_LO), 
		.clk(clk), 
		.reset(reset), 
		.start(start), 
		.busy(busy)
	);

// 1. 生成时钟信号 (周期 10ns)
    always #5 clk = ~clk;

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		MDUOp = 0;
		clk = 0;
		reset = 1; // 先复位
		start = 0;

		// Wait 100 ns for global reset to finish
		#100;
        reset = 0; // 释放复位
        #10;

		// ==========================================
        // Test Case 1: 有符号乘法 (mult) -2 * 3 = -6
        // 预期耗时: 5 cycles
        // ==========================================
        $display("Testing Signed Mult: -2 * 3");
        A = -2;      // 0xFFFFFFFE
        B = 3;
        MDUOp = `MDU_MULT;
        start = 1;   // 发出启动信号
        #10;         // 保持一个周期
        start = 0;   // 撤销启动信号 (模拟 ID/EX 寄存器行为)
        
        // 此时 Busy 应该变高，我们等待 60ns (6个周期) 看看结果是否出来
        #60; 
        if (E_LO == -6 && busy == 0) 
            $display("  -> Mult Pass! Result: %d, Busy released.", $signed(E_LO));
        else 
            $display("  -> Mult Fail! LO: %h, Busy: %b", E_LO, busy);
        
        #20; // 休息一下

        // ==========================================
        // Test Case 2: 无符号除法 (divu) 10 / 3
        // 预期耗时: 10 cycles
        // 预期结果: LO(商)=3, HI(余)=1
        // ==========================================
        $display("Testing Unsigned Div: 10 / 3");
        A = 10;
        B = 3;
        MDUOp = `MDU_DIVU;
        start = 1;
        #10;
        start = 0;

        // 等待 11 个周期 (110ns) 确保 busy 拉低
        #110;
        if (E_LO == 3 && E_HI == 1 && busy == 0)
            $display("  -> Divu Pass! LO: %d, HI: %d", E_LO, E_HI);
        else 
            $display("  -> Divu Fail! LO: %d, HI: %d", E_LO, E_HI);

        #20;

        // ==========================================
        // Test Case 3: 有符号除法 (div) -10 / 3
        // 规则: 余数的符号随被除数
        // 预期结果: LO(商)=-3, HI(余)=-1
        // ==========================================
        $display("Testing Signed Div: -10 / 3");
        A = -10;
        B = 3;
        MDUOp = `MDU_DIV;
        start = 1;
        #10;
        start = 0;
        #110; // 等待运算结束
        if ($signed(E_LO) == -3 && $signed(E_HI) == -1)
             $display("  -> Div Pass! Result correct.");
        else $display("  -> Div Fail! LO: %d, HI: %d", $signed(E_LO), $signed(E_HI));

        #20;

        // ==========================================
        // Test Case 4: MTHI / MTLO (直接写入)
        // 预期耗时: 1 cycle (无忙信号)
        // ==========================================
        $display("Testing MTHI / MTLO");
        A = 32'h1234_5678;
        MDUOp = `MDU_MTHI; // 写 HI
        // 注意：MTHI 不需要 start 信号
        #10; 
        
        A = 32'h8765_4321;
        MDUOp = `MDU_MTLO; // 写 LO
        #10;

        if (E_HI == 32'h1234_5678 && E_LO == 32'h8765_4321)
            $display("  -> MTxx Pass!");
        else
            $display("  -> MTxx Fail! HI: %h, LO: %h", E_HI, E_LO);

        $finish;
	end
      
endmodule

