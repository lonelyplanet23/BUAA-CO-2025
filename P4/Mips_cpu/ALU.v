`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:38:08 11/14/2025 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUCtrl,
    output reg [31:0] Result,
    output Zero
    );
    
    assign Zero = (A == B);
    always @(*) begin
        case (ALUCtrl)
            `ALU_ADD: Result = A + B;
            `ALU_SUB: Result = A - B;
            `ALU_OR:  Result = A | B;
            `ALU_SHIFT_LEFT_16: Result = B << 16;
            default: Result = 32'h00000000;
        endcase
    end

endmodule
