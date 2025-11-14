`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:44:58 11/14/2025 
// Design Name: 
// Module Name:    Controller 
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
module Controller(
    input [5:0] opcode,
    input [5:0] funct,
    output [1:0] RegDst,
    output ALUSrc,
    output [1:0] RegSrc,
    output RegWrite,
    output MemWrite,
    output [1:0] nPC_sel,
    output ExtOp,
    output [2:0] ALUCtrl
    );


endmodule
