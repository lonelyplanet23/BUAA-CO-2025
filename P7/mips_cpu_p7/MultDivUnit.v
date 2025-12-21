`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:56:17 12/05/2025 
// Design Name: 
// Module Name:    MultDivUnit 
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
module MultDivUnit(
    input [31:0] A,
    input [31:0] B,
    input [2:0]  MDUOp,
    output reg[31:0] E_HI,
    output reg[31:0] E_LO,
    input clk,
    input reset,
    input start,
    input IntReq,
    output reg busy
    );

    reg [63:0] rst64;
    integer remained_cycle;
    initial begin
        busy   <= 1'b0;
        remained_cycle <= 0;
        rst64  <= 64'h0000_0000_0000_0000;
        E_HI   <= 32'h0000_0000;
        E_LO   <= 32'h0000_0000;   
    end

    always @(posedge clk) begin
        if(reset) begin //重置
            remained_cycle <= 0;
            busy   <= 1'b0;
            E_HI   <= 32'h0000_0000;
            E_LO   <= 32'h0000_0000;        
        end
//! 条件的顺序：remained_cycle >0  ==0(start 表示乘除法开始； 否则处理mthi mtlo)

        else if(remained_cycle > 0) begin //有乘除法未处理完毕
            if(remained_cycle == 1) begin //即将处理完毕的，需要转移到hi lo
                {E_HI, E_LO} <= rst64;
                busy <= 1'b0;
            end
            remained_cycle <= remained_cycle - 1;
        end
        else if(start && !IntReq) begin  //没有乘除法正在执行，且有新的乘除法开始
            busy <= 1;
            case(MDUOp)
                `MDU_MULT:  begin
                    rst64 <= $signed (A) * $signed(B);
                    remained_cycle <= 5;
                end
                `MDU_MULTU: begin
                    rst64 <= A * B;
                    remained_cycle <= 5;
                end
                `MDU_DIV: begin
                    rst64 <= {$signed (A) % $signed(B), $signed (A) / $signed(B)};
                    remained_cycle <= 10;
                end
                `MDU_DIVU: begin
                    rst64 <= {A % B, A / B};
                    remained_cycle <= 10;
                end      
            endcase
        end

        else if(!busy) begin //没有乘除法正在执行，且没有新的乘除法开始,处理mthi mtlo
            case(MDUOp)
                `MDU_MTHI: begin
                    E_HI <= A;
                end
                `MDU_MTLO: begin
                    E_LO <= A;
                end
            endcase
        end//在不busy的条件下处理mthi mtlo
        
    end

endmodule
