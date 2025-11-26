`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:39:27 11/14/2025 
// Design Name: 
// Module Name:    DM 
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
module M_DM(
    input [31:0] A,
    input [31:0] M_WD,
    input [31:0] PC,
    output [31:0] M_RD,
    input DMWr,
    input clk,          
    input reset
    );
    reg [31:0] MEM[3071:0];
    integer i;

    initial begin
        for(i = 0; i <= 3071; i = i + 1)begin
             MEM[i] = 32'h0;
        end
    end

    wire [11:0] word_addr;
    assign word_addr = A >> 2; //!一个word占4字节

    always @(posedge clk) begin
        if(reset) begin
            for(i = 0; i <= 3071; i = i + 1)begin
                MEM[i] = 32'h0;
            end
        end
        else if(DMWr) begin
            $display("%d@%h: *%h <= %h", $time, PC, A, M_WD);
            MEM[word_addr] <= M_WD;
        end
    end

    assign M_RD = MEM[word_addr];

endmodule
