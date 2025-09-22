`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:30:08 09/22/2025 
// Design Name: 
// Module Name:    And_Gate 
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
module And_Gate(
    input i1,
    input i2,
    reg [3:0] r1;
    output o
    );
    assign o = i1 & i2;

endmodule

module And_Gate1(i1,i2,o)
    input [7:0] i1;
    input [7:0] i2;

    output [7:0] o;

    assign o = i1 & i2;

endmodule