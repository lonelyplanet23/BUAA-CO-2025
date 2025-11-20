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
        output reg [1:0] RegDst,   // 寄存器目标选择
        output reg ALUSrc,         // ALU第二个源操作数选择
        output reg [1:0] RegSrc,   // 写回寄存器数据源选择
        output reg RegWrite,       // 寄存器写  使能
        output reg MemWrite,       // 数据存储器写使能
        output reg [2:0] nPC_Sel,  // 下一个PC地址选择
        output reg ExtOp,          // 立即数扩展方式
        output reg [2:0] ALUCtrl   // ALU运算类型控制
    );

    
    always @(*) begin
        RegDst = `RD_RT;
        ALUSrc = 1'b0;
        RegSrc = `RS_ALU;
        RegWrite = 1'b0;
        MemWrite = 1'b0;
        nPC_Sel = `NPC_PC4; 
        ExtOp = 1'b0;
        ALUCtrl = `ALU_ADD;
        
        case(opcode) 
            `ZERO: begin
                case (funct)
                    `ADD: begin
                        RegDst = `RD_RD;
                        RegSrc = `RS_ALU;
                        RegWrite = 1'b1;
                        ALUCtrl = `ALU_ADD;
                    end
                    `SUB: begin
                        RegDst = `RD_RD;
                        RegSrc = `RS_ALU;
                        RegWrite = 1'b1;
                        ALUCtrl = `ALU_SUB;
                    end
                    `JR: begin
                        nPC_Sel = `NPC_JR;
                    end
                    default: ;
                endcase
            end
            
            `ORI: begin
                RegDst = `RD_RT;
                ALUSrc = 1'b1;
                RegSrc = `RS_ALU;
                RegWrite = 1'b1;
                ExtOp = 1'b0;
                ALUCtrl = `ALU_OR;
            end
            
            `LW: begin
                RegDst = `RD_RT;
                ALUSrc = 1'b1;
                RegSrc = `RS_MEM;
                RegWrite = 1'b1;
                ExtOp = 1'b1;
                ALUCtrl = `ALU_ADD;
            end
            
            `SW: begin
                ALUSrc = 1'b1;
                MemWrite = 1'b1;
                ExtOp = 1'b1;
                ALUCtrl = `ALU_ADD;
            end
            
            `BEQ: begin
                ALUSrc = 1'b0;
                nPC_Sel = `NPC_BRANCH;
                ExtOp = 1'b1;
                ALUCtrl = `ALU_SUB;

            end

            `LUI: begin
                RegDst = `RD_RT;
                ALUSrc = 1'b1;
                RegSrc = `RS_ALU;
                RegWrite = 1'b1;
                ExtOp = 1'b0;
                ALUCtrl = `ALU_SHIFT_LEFT_16;
            end

            `JAL: begin
                RegDst = `RD_RA;
                RegSrc = `RS_PC4;
                RegWrite = 1'b1;
                nPC_Sel = `NPC_JUMP;
            end

            `J: begin
                RegWrite = 0;
                nPC_Sel = `NPC_JUMP;
            end
            default: ;
        endcase
    end

endmodule