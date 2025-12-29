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

module DF_NPC(
    input [31:0] F_PC,
    input [31:0] D_PC,
    input [15:0] D_imm16,
    input [25:0] D_imm26,
    input [31:0] D_ra,    
    input [2:0] nPC_Sel,
    input        IntReq,
    input D_bjump,
    output reg [31:0] NPC
    );

    wire [31:0] NPC1, NPC2, NPC3;
    wire [31:0] EXT_16_TO_32;
    assign NPC1 = F_PC + 4;
    // Zero == 1，PC<-PC+4 + sign_ext(imm16||00)；
    // Zero == 0，PC<-PC+4
    assign EXT_16_TO_32 = {{16{D_imm16[15]}}, D_imm16} << 2;
    assign NPC2 = (D_bjump == 1'b0) ? NPC1 : D_PC + 4 + EXT_16_TO_32;
    //! debug: NPC2的跳转失败是F_PC+4!
    //JAL: PC <- PC31..28║instr_index║0^2
    assign NPC3 = {D_PC[31:28], D_imm26[25:0], 2'b00};


    always @(*) begin
        if(IntReq) begin
            NPC = `TRAPPED_ADDRESS;
        end
        else begin
            case (nPC_Sel)          
                `NPC_PC4:    NPC = NPC1;       
                `NPC_BRANCH: NPC = NPC2;       
                `NPC_JUMP:   NPC = NPC3;       
                `NPC_JR:     NPC = D_ra;         
                default:     NPC = `INITIAL_ADDRESS; // 默认情况（覆盖所有未列举的nPC_Sel值）
            endcase
        end
    end

endmodule
