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
module PC(
    input clk,
    input reset,
    input [31:0] DI,
    output reg [31:0] DO
    );
    // On clock edge, if reset is high, set DO to 0x00003000, else update DO with DI
    always @(posedge clk) begin
        if(reset) begin
            DO <= `INITIAL_ADDRESS;
        end
        else begin
            DO <= DI;
        end
    end

endmodule
