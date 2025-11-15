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
module EXT(
    input [15:0] Imm16,
    input EXTOp,
    output [31:0] EXT32
    );
    //1 符号延展 
    //0 零延展
    assign EXT32 = (EXTOp == 1)? 
                    {{16{Imm16[15]}}, Imm16}:
                    {{16{1'b0}}, Imm16};
            

endmodule
