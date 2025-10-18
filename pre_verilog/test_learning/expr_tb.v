`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:10:12 10/18/2025
// Design Name:   expression
// Module Name:   C:/Users/27628/Desktop/CO-2025/pre_verilog/test_learning/expr_tb.v
// Project Name:  test_learning
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: expression
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 1ns/1ps

module expr_tb;

    reg clk;
    reg clr;
    reg [7:0] in;
    wire out;

    // 实例化被测模块
    expression uut (
        .clk(clk),
        .clr(clr),
        .in(in),
        .out(out)
    );

    // 时钟周期 10ns
    always #5 clk = ~clk;

    // 任务：发送单个字符
    task send_char;
        input [7:0] ch;
        begin
            in = ch;
            #10; // 等待一个时钟周期
            //$display("[%0t] input=%s (ascii=%0d) -> out=%0d", $time, ch, ch, out);
        end
    endtask
    
    initial begin
        $dumpfile("expr_tb.vcd");  // 生成波形文件
        $dumpvars(0, expr_tb);     // 记录所有信号（包括子模块）
    end

    // 测试主过程
    initial begin
        $display("==== Expr FSM Testbench ====");
        clk = 0;
        clr = 0;
        in = 0;

        // 复位
        clr = 1;
        #10;
        clr = 0;

        // ==== 测试 1: 合法表达式 1+2 ====
                $display("\n==== Test 1: 1+2 ====");
        send_char("1");
        send_char("+");
        send_char("2");

        // ==== 测试 2: 非法表达式 1++2 ====
        $display("\n==== Test 2: 1++2 ====");
        clr = 1; #10; clr = 0; // 清零重新开始
        @(negedge clk) ;
        send_char("1");
        send_char("+");
        send_char("+");
        send_char("2");

        // ==== 测试 3: 前导运算符 +2 ====
        $display("\n==== Test 3: +2 ====");
        clr = 1; #10; clr = 0;
        @(negedge clk) ;
        send_char("+");
        send_char("2");

        // ==== 测试 4: 连续数字 12 ====
        $display("\n==== Test 4: 12 ====");
        clr = 1; #10; clr = 0;
        @(negedge clk) ;
        send_char("1");
        send_char("2");

        // ==== 测试 5: 1*3+5 ====
        $display("\n==== Test 5: 1*3+5 ====");
        clr = 1; #10; clr = 0;
        @(negedge clk) ;
        send_char("1");
        send_char("*");
        send_char("3");
        send_char("+");
        send_char("5");

        // ==== 结束 ====
        $display("\n==== Testbench Finished ====");
        #20;
        $stop;
    end

endmodule


