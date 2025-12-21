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
module E_ALU(
    input [31:0] A,
    input [31:0] B,
    input [3:0] E_ALUOp,
    input [5:0] Opcode,    
    output reg [31:0] E_AO
    output reg [4:0] ExcCode
    );
    // 异常检测
    
    always @(*) begin
        ExcCode = `EXCCODE_INT;
        // E1: 地址对齐
        case Opcode
            `LW: begin
                if(B[1:0] != 2'b00) ExcCode = `EXCCODE_ADEL;
                
            end
            
        endcase

        
    end

    // ALU 运算
    always @(*) begin
        case (E_ALUOp)
            `ALU_ADD: E_AO = A + B;
            `ALU_SUB: E_AO = A - B;
            `ALU_OR:  E_AO = A | B;
            `ALU_SHIFT_LEFT_16: E_AO = B << 16;
            `ALU_AND: E_AO = A & B;
            `ALU_SLT: E_AO = ($signed(A) < $signed(B)) ? 32'd1 : 32'd0;
            `ALU_SLTU: E_AO = (A < B) ? 32'd1 : 32'd0;
            default: E_AO = 32'h00000000;
        endcase
    end

endmodule
