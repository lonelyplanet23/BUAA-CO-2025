`timescale 1ns / 1ps
// --- ALU Control (3-bit) ---
`define ALU_ADD               3'b000
`define ALU_SUB               3'b001
`define ALU_OR                3'b010
`define ALU_SHIFT_LEFT_16     3'b011


// --- Register Destination (RegDst 2-bit) ---
`define RD_RT                 2'b00 // 写回 rt (I-type)
`define RD_RD                 2'b01 // 写回 rd (R-type)
`define RD_RA                 2'b10 // 写回 $ra ($31) (JAL)

// --- Register Source (RegSrc / MemtoReg 2-bit) ---
`define RS_ALU                2'b00 // 写回 ALU Result (R-type, ORI, LUI)
`define RS_MEM                2'b01 // 写回 Memory Read Data (LW)
`define RS_PC4                2'b10 // 写回 PC+4 (JAL)

// --- ALU B Source (2-bit) ---
`define ALU_BSRC_V2           2'b00 // 使用寄存器 V2
`define ALU_BSRC_EXT          2'b01 // 使用扩展后的立即数
`define ALU_BSRC_UNUSED       2'b11 // 未使用（占位）

// --- Next PC Select (nPC_sel 2-bit) ---
`define NPC_PC4               3'b000 // PC + 4 (顺序执行)
`define NPC_BRANCH            3'b001 // Branch Target (beq)
`define NPC_JUMP              3'b010 // Jump Target (J, JAL)
`define NPC_JR                3'b011 // Jump Register (JR)

// --- Immediate Extension ---
`define EXT_ZERO              1'b0
`define EXT_SIGN              1'b1

// --- Compare Operation (CmpOp 3-bit) ---
`define CMP_NONE              3'b000
`define CMP_EQ                3'b001

// --- T_use Encoding (2-bit) ---
`define TUSE_D                2'b00
`define TUSE_E                2'b01
`define TUSE_M                2'b10
`define TUSE_NONE             2'b11

// --- Other Constants ---
`define INITIAL_ADDRESS       32'h00003000
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

