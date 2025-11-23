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
module DM(
    input [31:0] Addr,
    input [31:0] WD,
    input [31:0] PC,
    output [31:0] RD,
    input WE,
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
    assign word_addr = Addr >> 2;

    always @(posedge clk) begin
        if(reset) begin
            for(i = 0; i <= 3071; i = i + 1)begin
                MEM[i] = 32'h0;
            end
        end
        else if(WE) begin
            $display("@%h: *%h <= %h", PC, Addr , WD);
            MEM[word_addr] <= WD;
        end
    end

    assign RD = MEM[word_addr];

endmodule
