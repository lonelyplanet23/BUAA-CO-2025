 `timescale 1ns / 1ps
// --- ALU Control (4-bit) ---
`define ALU_ADD               4'b0000
`define ALU_SUB               4'b0001
`define ALU_OR                4'b0010
`define ALU_SHIFT_LEFT_16     4'b0011
`define ALU_AND               4'b0100
`define ALU_SLT               4'b0101
`define ALU_SLTU              4'b0110
// --- MDU control (3-bit) ---
`define MDU_MULT   3'b000 // mult
`define MDU_MULTU  3'b001 // multu
`define MDU_DIV    3'b010 // div
`define MDU_DIVU   3'b011 // divu
`define MDU_MTHI   3'b100 // mthi
`define MDU_MTLO   3'b101 // mtlo
`define MDU_NOP    3'b110 // nop
// --- AO source sel (3-bit) ---
`define FROM_ALU   3'b000
`define FROM_HI    3'b001
`define FROM_LO    3'b010

// --- Register Destination (RegDst 2-bit) ---
`define RD_RT                 2'b00 // 写回 rt (I-type)
`define RD_RD                 2'b01 // 写回 rd (R-type)
`define RD_RA                 2'b10 // 写回 $ra ($31) (JAL)

// --- 寄存器写入值 (RegSrc) ---
`define RS_ALU                2'b00 // 写回 ALU Result (R-type, ORI, LUI)
`define RS_MEM                2'b01 // 写回 Memory Read Data (LW)
`define RS_PC8                2'b10 // 写回 PC+8 (JAL)

// --- ALU B Source (2-bit) ---
`define ALU_BSRC_V2           2'b00 // 使用寄存器 V2
`define ALU_BSRC_EXT          2'b01 // 使用扩展后的立即数



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
`define CMP_NEQ               3'b010

// --- T_use Encoding (2-bit) ---
`define TUSE_D                2'b00
`define TUSE_E                2'b01
`define TUSE_M                2'b10
`define TUSE_NONE             2'b11

// --- Data Extension Ops (DEOp) ---
`define DE_NONE  3'b000 // LW (No extension)
`define DE_LB    3'b010 // LB (Signed Byte)
`define DE_LH    3'b100 // LH (Signed Half)

// --- Byte Enable Ops (BEOp) 自定义 ---
`define BE_SW    2'b00  // SW
`define BE_SH    2'b01  // SH
`define BE_SB    2'b10  // SB
`define BE_NONE  2'b11  // 不写内存
// --- Opcode / funct encoding (binary, 6-bit) ---
`define ADD  6'b100000 //funct (0x20) ok
`define SUB  6'b100010 //funct (0x22) ok
`define AND  6'b100100 //funct (0x24) ok
`define OR   6'b100101 //funct (0x25) ok
`define SLT  6'b101010 //funct (0x2A) ok 
`define SLTU 6'b101011 //funct (0x2B) ok
`define ORI  6'b001101 //opcode (0x0D) ok
`define ADDI 6'b001000 //opcode (0x08) ok
`define ANDI 6'b001100 //opcode (0x0C) ok
`define LW   6'b100011 //opcode (0x23) ok
`define LB   6'b100000 //opcode (0x20)
`define LH   6'b100001 //opcode (0x21)
`define SW   6'b101011 //opcode (0x2B) ok
`define SB   6'b101000 //opcode (0x28)
`define SH   6'b101001 //opcode (0x29)
`define BEQ  6'b000100 //opcode (0x04) ok
`define BNE  6'b000101 //opcode (0x05)
`define LUI  6'b001111 //opcode (0x0F) ok
`define JAL  6'b000011 //opcode (0x03) ok
`define JR   6'b001000 //funct (0x08)  ok
// --- Multiply/Divide and HI/LO related funct (binary) ---
`define MULT  6'b011000 //funct (0x18)
`define MULTU 6'b011001 //funct (0x19)
`define DIV   6'b011010 //funct (0x1A)
`define DIVU  6'b011011 //funct (0x1B)
`define MFHI  6'b010000 //funct (0x10)
`define MTHI  6'b010001 //funct (0x11)
`define MFLO  6'b010010 //funct (0x12)
`define MTLO  6'b010011 //funct (0x13)

`define ZERO  6'b000000
`define J     6'b000010
// --- Forward encoding ---
// 00表示不使用转发
`define FROM_E 2'b01
`define FROM_M 2'b10
`define FROM_W 2'b11

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

