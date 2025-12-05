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
`define ADD 6'h20 //funct
`define SUB 6'h22 //funct
`define ORI 6'hd
`define LW  6'h23
`define SW  6'h2b
`define BEQ 6'h04
`define LUI 6'hf
`define JAL 6'b000011
`define JR  6'b001000 //funct
`define ZERO 6'b000000
`define J   6'b000010

`include "constants.v" // 包含所有宏定义

module Controller(
        input [5:0] opcode, 
        input [5:0] funct,
        output reg [1:0] Reg_WrSel,   // 目的寄存器选择
        output reg [1:0] ALU_BSrc,    // ALU第二操作数选择
        output reg [1:0] Reg_WrSrc,   // 写回寄存器数据源
        output reg RFWr,              // 寄存器写使能
        output reg DMWr,              // 数据存储器写使能
        output reg [2:0] nPC_sel,     // 下一个PC选择
        output reg ExtOp,             // 立即数扩展方式
        output reg [3:0] ALUOp,       // ALU运算类型 (4-bit)
        output reg [2:0] CmpOp,       // 比较操作类型
        output reg [1:0] T_use_RS,    // RS 消费时间
        output reg [1:0] T_use_RT     // RT 消费时间
    );

    
    always @(*) begin
        Reg_WrSel = `RD_RT;
        ALU_BSrc = `ALU_BSRC_V2;
        Reg_WrSrc = `RS_ALU;
        RFWr = 1'b0;
        DMWr = 1'b0;
        nPC_sel = `NPC_PC4; 
        ExtOp = `EXT_ZERO;
        ALUOp = `ALU_ADD;
        CmpOp = `CMP_NONE;
        T_use_RS = `TUSE_NONE;
        T_use_RT = `TUSE_NONE;
        
        case(opcode) 
            `ZERO: begin
                case (funct)
                    `ADD: begin
                        Reg_WrSel = `RD_RD;
                        RFWr = 1'b1;
                        ALUOp = `ALU_ADD;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;
                    end
                    `SUB: begin
                        Reg_WrSel = `RD_RD;
                        RFWr = 1'b1;
                        ALUOp = `ALU_SUB;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;
                    end
                    `JR: begin
                        nPC_sel = `NPC_JR;
                        T_use_RS = `TUSE_D;
                    end
                    `AND: begin
                        Reg_WrSel = `RD_RD;
                        RFWr = 1'b1;
                        ALUOp = `ALU_AND;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;
                    end
                    `OR: begin
                        Reg_WrSel = `RD_RD;
                        RFWr = 1'b1;
                        ALUOp = `ALU_OR;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;    
                    end
                    `SLT: begin
                        Reg_WrSel = `RD_RD;
                        RFWr = 1'b1;
                        ALUOp = `ALU_SLT;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;    
                    end
                    `SLTU: begin
                        Reg_WrSel = `RD_RD;
                        RFWr = 1'b1;
                        ALUOp = `ALU_SLTU;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;                            
                    end
                    default: ;
                endcase
            end
            `ADDI: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                RFWr = 1'b1;
                ExtOp = `EXT_ZERO;
                ALUOp = `ALU_ADD;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_NONE;                
            end
            `ANDI: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                RFWr = 1'b1;
                ExtOp = `EXT_ZERO;
                ALUOp = `ALU_AND;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_NONE;                   
            end
            `ORI: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                RFWr = 1'b1;
                ExtOp = `EXT_ZERO;
                ALUOp = `ALU_OR;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_NONE;
            end
            
            `LW: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                Reg_WrSrc = `RS_MEM;
                RFWr = 1'b1;
                ExtOp = `EXT_SIGN;
                ALUOp = `ALU_ADD;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_NONE;
            end
            
            `SW: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                DMWr = 1'b1;
                ExtOp = `EXT_SIGN;
                ALUOp = `ALU_ADD;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_M;
            end
            
            `BEQ: begin
                nPC_sel = `NPC_BRANCH;
                ExtOp = `EXT_SIGN;
                CmpOp = `CMP_EQ;
                T_use_RS = `TUSE_D;
                T_use_RT = `TUSE_D;
            end
            
            `BNE: begin
                nPC_sel = `NPC_BRANCH;
                ExtOp = `EXT_SIGN;
                CmpOp = `CMP_NEQ;
                T_use_RS = `TUSE_D;
                T_use_RT = `TUSE_D;
            end

            `LUI: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                RFWr = 1'b1;
                ExtOp = `EXT_ZERO;
                ALUOp = `ALU_SHIFT_LEFT_16;
            end

            `JAL: begin
                Reg_WrSel = `RD_RA;
                Reg_WrSrc = `RS_PC8;
                RFWr = 1'b1;
                nPC_sel = `NPC_JUMP;
            end

            `J: begin
                RFWr = 1'b0;
                nPC_sel = `NPC_JUMP;
            end
            
            default: ;
        endcase
    end

endmodule