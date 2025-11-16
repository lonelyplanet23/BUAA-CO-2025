    `timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:26:40 11/14/2025 
// Design Name: 
// Module Name:    mips 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`include "constants.v"
module mips(
    input clk,
    input reset
    );
    
    wire [31:0] Instr;
    wire [5:0] opcode;
    wire [4:0] rs;
    wire [4:0] rt;
    wire [4:0] rd;
    wire [4:0] shamt;
    wire [5:0] funct;
    wire [25:0] imm26; //作为16位立即数，或者作为instr_index 26位立即数
    wire zero;
    wire [31:0] imm16_EXT;
    wire [31:0] npc_addr, pc_addr, pc_4_addr, ra, im_data, alu_rst, mem_data, RD1, RD2;
    // mem_data 从DM处读的
    wire [1:0] RegDst;   // 寄存器目标选择
    wire ALUSrc;         // ALU第二个源操作数选择
    wire [1:0] RegSrc;   // 写回寄存器数据源选择
    wire RegWrite;       // 寄存器写使能
    wire MemWrite;       // 数据存储器写使能
    wire [2:0] nPC_Sel;  // 下一个PC地址选择
    wire ExtOp;          // 立即数扩展方式
    wire [2:0] ALUCtrl;   // ALU运算类型控制

    PC pc(.clk(clk), .reset(reset), .DI(npc_addr), .DO(pc_addr));
    NPC npc(.PC(pc_addr), .imm(imm26), .ra(ra), .nPC_Sel(nPC_Sel), 
                    .Zero(zero), .NPC(npc_addr), .PC4(pc_4_addr));
    IM im(.IM_addr(pc_addr), .IM_data(Instr));
    
    Splitter splitter(.Instr(Instr), .opcode(opcode), .rs(rs), .rt(rt), .rd(rd), 
                                    .shamt(shamt), .funct(funct), .imm26(imm26));
    Controller controller(.opcode(opcode), .funct(funct), .RegDst(RegDst), .ALUSrc(ALUSrc), 
                            .ALUCtrl(ALUCtrl), .RegSrc(RegSrc), .RegWrite(RegWrite), .MemWrite(MemWrite),
                            .nPC_Sel(nPC_Sel), .ExtOp(ExtOp));
    wire [4:0] A1;
    wire [4:0] A2;
    wire [4:0] A3;
    wire [31:0] WD;
    wire [31:0] alu_b;


    assign A1 = rs;
    assign A2 = rt;
    assign A3 = (RegDst == `RD_RT) ? rt : (RegDst == `RD_RD) ? rd : 31;
    assign WD = (RegSrc == `RS_PC4) ? pc_4_addr : (RegSrc == `RS_ALU) ? alu_rst : mem_data;
   


    GRF rf(.A1(A1), .A2(A2), .A3(A3), .WD(WD), .PC(pc_addr), .WE(RegWrite),
            .clk(clk), .reset(reset), .RD1(RD1), .RD2(RD2), .RA(ra));
    
    EXT ext(.Imm16(imm26[15:0]), .EXTOp(ExtOp), .EXT32(imm16_EXT));
    
    assign alu_b = ALUSrc ? imm16_EXT : RD2;
    ALU alu(.A(RD1), .B(alu_b), .ALUCtrl(ALUCtrl), .Result(alu_rst), .Zero(zero));

    DM dm(.Addr(alu_rst), .WD(RD2), .PC(pc_addr), .WE(MemWrite), .clk(clk), .reset(reset), .RD(mem_data));



endmodule
