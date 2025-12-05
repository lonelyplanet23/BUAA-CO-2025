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
    output reg busy
    );

    reg [31:0] tmp_HI;  
    reg [31:0] tmp_LO;
    reg [63:0] prod64;
    integer remained_cycle;
    initial begin
        busy   <= 1'b0;
        remained_cycle <= 0;
        tmp_HI <= 32'h0000_0000;
        tmp_LO <= 32'h0000_0000;
        E_HI   <= 32'h0000_0000;
        E_LO   <= 32'h0000_0000;   
    end
//倒计时实现
    always @(posedge clk) begin
        if(reset) begin
            remained_cycle <= 0;
            tmp_HI <= 32'h0000_0000;
            tmp_LO <= 32'h0000_0000;
            E_HI   <= 32'h0000_0000;
            E_LO   <= 32'h0000_0000;        
        end
        else if(remained_cycle == 0) begin
            if(start) begin
                busy <= 1;
            end
        end
    end

endmodule
