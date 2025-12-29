`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:28:04 11/14/2025 
// Design Name: 
// Module Name:    PC 
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
module F_PC(
    input clk,
    input reset,
    input [31:0] F_NPC_in,
    input IntReq,
    input F_PC_en,
    output reg [31:0] F_PC
    );
    // On clock edge, if reset is high, set DO to 0x00003000, else update DO with DI
    initial begin
        F_PC <=`INITIAL_ADDRESS;
    end
    always @(posedge clk) begin
        if(reset) begin
            F_PC <= `INITIAL_ADDRESS;
        end
        else if(IntReq) begin
            F_PC <= `TRAPPED_ADDRESS;
        end
        else if(F_PC_en)begin
            F_PC <= F_NPC_in;
        end
    end

endmodule
