`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:51:32 09/23/2025 
// Design Name: 
// Module Name:    logic 
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
module logic(
    input [2:0] A,
    input B,
    input C,
    output [3:0] Out
    );
    assign undefined_wire1 = (A[1] ^ A[0]) ? C : B;
    assign undefined_wire2 = (A[2] && B);
    assign Out = {undefined_wire1, undefined_wire2};

endmodule
