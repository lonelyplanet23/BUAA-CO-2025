`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:40:18 11/14/2025 
// Design Name: 
// Module Name:    EXT 
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
module D_EXT(
    input [15:0] D_Imm16,
    input D_EXTOp,
    output [31:0] D_EXT32
    );
    //1 符号延展 
    //0 零延展
    assign D_EXT32 = (D_EXTOp == `EXT_SIGN)? 
                    {{16{D_Imm16[15]}}, D_Imm16}:
                    {{16{1'b0}}, D_Imm16};
            

endmodule
