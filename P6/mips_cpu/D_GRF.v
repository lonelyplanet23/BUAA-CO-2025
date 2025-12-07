`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:36:36 11/14/2025 
// Design Name: 
// Module Name:    GRF 
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
module D_GRF(
    input [4:0] A1,
    input [4:0] A2,
    output [31:0] RD1,
    output [31:0] RD2,
    input [31:0] PC,
    input [4:0] A3,
    input [31:0] WD,
    input RFWr,
    input clk,
    input reset
    );

    reg [31:0] reg_file[31:0];
    integer i;
    initial begin
        for(i = 0; i < 32; i = i + 1)begin
            reg_file[i] = 32'h0;
        end
    end

    always @(posedge clk) begin
        if(reset) begin
            for(i = 0; i < 32; i = i + 1)begin
                reg_file[i] <= 32'h00000000;
            end
        end
        else if(RFWr) begin
            if(A3 != 5'b00000) begin
                reg_file[A3] <= WD; //保护零号寄存器 一直为0
                //$display("%d@%h: $%d <= %h", $time, PC, A3, WD);
            end
        end
    end


    assign RD1 = reg_file[A1];
    assign RD2 = reg_file[A2];

endmodule
