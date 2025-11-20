`timescale 1ns / 1ps
// --- ALU Control (3-bit) ---
`define ALU_ADD       3'b000
`define ALU_SUB       3'b001
`define ALU_OR        3'b010
`define ALU_SHIFT_LEFT_16       3'b011

// --- Register Destination (RegDst 2-bit) ---
`define RD_RT         2'b00 // 写回 rt (I-type)
`define RD_RD         2'b01 // 写回 rd (R-type)
`define RD_RA         2'b10 // 写回 $ra ($31) (JAL)

// --- Register Source (RegSrc / MemtoReg 2-bit) ---
`define RS_ALU        2'b00 // 写回 ALU Result (R-type, ORI, LUI)
`define RS_MEM        2'b01 // 写回 Memory Read Data (LW)
`define RS_PC4        2'b10 // 写回 PC+4 (JAL)

// --- Next PC Select (nPC_sel 2-bit) ---
`define NPC_PC4       3'b00 // PC + 4 (顺序执行)
`define NPC_BRANCH    3'b01 // Branch Target (beq)
`define NPC_JUMP      3'b10 // Jump Target (J, JAL)
`define NPC_JR        3'b11 // Jump Register (JR)

// --- Other Constants ---
`define INITIAL_ADDRESS  32'h00003000
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:53 11/14/2025 
// Design Name: 
// Module Name:    constants 
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

