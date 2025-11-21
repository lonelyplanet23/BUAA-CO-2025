`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:32:26 11/14/2025 
// Design Name: 
// Module Name:    NPC 
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

module NPC(
    input [31:0] PC,
    input [15:0] imm16,
    input [25:0] imm26,
    input [31:0] ra,    
    input [2:0] nPC_Sel,
    input Zero,
    output reg [31:0] NPC,
    output [31:0] PC4
    );

    wire [31:0] NPC1, NPC2, NPC3;
    wire [31:0] EXT_16_TO_32;
    assign NPC1 = PC + 4;
    // Zero == 1，PC<-PC+4 + sign_ext(imm16||00)；
    // Zero == 0，PC<-PC+4
    assign EXT_16_TO_32 = {{16{imm16[15]}}, imm16} << 2;
    assign NPC2 = (Zero == 0)? PC + 4: PC + 4 + EXT_16_TO_32;
    
    //JAL: PC <- PC31..28║instr_index║0^2
    assign NPC3 = {PC[31:28], imm26[25:0], 2'b00};


    always @(*) begin
        case (nPC_Sel)          
            `NPC_PC4:    NPC = NPC1;       
            `NPC_BRANCH: NPC = NPC2;       
            `NPC_JUMP:   NPC = NPC3;       
            `NPC_JR:     NPC = ra;         
            default:     NPC = 32'h00003000; // 默认情况（覆盖所有未列举的nPC_Sel值）
        endcase
    end
    assign PC4 = NPC1;
    

endmodule
