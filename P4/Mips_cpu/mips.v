
module mips(
    input clk,
    input reset
);

endmodule
// MIPS Single-Cycle CPU Core Module Interfaces (Verilog)
// Based on the provided design document for a MIPS subset.

// ====================================================================
// 1. IFU (Instruction Fetch Unit) Sub-Modules
// ====================================================================

// --------------------------------------------------------------------
// 1.1 PC (Program Counter)
// Stores the current instruction address. Start address: 0x00003000.
// --------------------------------------------------------------------
module PC (
    input  wire        clk,
    input  wire        reset,    // Asynchronous reset (resets to 0x3000)
    input  wire [31:0] DI,       // Next PC address (NPC)
    output reg  [31:0] DO        // Current PC address
);
    // Implementation: register with async reset and sync load
endmodule


// --------------------------------------------------------------------
// 1.2 NPC (Next Program Counter)
// Calculates the address of the next instruction (PC+4 or Branch target).
// --------------------------------------------------------------------
module NPC (
    input  wire [31:0] PC,       // Current PC address
    input  wire [15:0] imm,      // 16-bit branch immediate offset
    input  wire        nPC_sel,  // Control signal: 1=Branch target, 0=PC+4
    input  wire        Zero,     // ALU Zero flag (rs == rt)
    output wire [31:0] NPC       // Next PC address
);
    // Implementation: Adder and Mux for PC+4 and branch calculation
endmodule


// --------------------------------------------------------------------
// 1.3 IM (Instruction Memory)
// Reads 32-bit instruction based on PC address.
// Capacity: 4096 * 32-bit (12-bit address space for words)
// --------------------------------------------------------------------
module IM (
    input  wire [31:0] IM_addr,  // Address input (from PC)
    output wire [31:0] IM_data   // 32-bit instruction output
);
    // Implementation: ROM/Memory array
endmodule


// ====================================================================
// 2. Splitter (Instruction Decoder)
// ====================================================================
module Splitter (
    input  wire [31:0] Instr,    // 32-bit machine instruction
    
    output wire [5:0]  opcode,   // [31:26]
    output wire [4:0]  rs,       // [25:21] - Source Register 1
    output wire [4:0]  rt,       // [20:16] - Source Register 2 / Write Register (I-type)
    output wire [4:0]  rd,       // [15:11] - Write Register (R-type)
    output wire [4:0]  shamt,    // [10:6]  - Shift amount (unused in this subset)
    output wire [5:0]  funct,    // [5:0]   - Function code (R-type)
    output wire [15:0] imm16     // [15:0]  - 16-bit immediate
);
    // Implementation: Wire assignments
endmodule


// ====================================================================
// 3. GRF (General Register File)
// ====================================================================
module GRF (
    // Read Ports
    input  wire [4:0] A1,        // Read Address 1 (rs)
    input  wire [4:0] A2,        // Read Address 2 (rt)
    output wire [31:0] RD1,      // Read Data 1
    output wire [31:0] RD2,      // Read Data 2
    
    // Write Port
    input  wire [4:0] A3,        // Write Address (rt/rd, selected by Mux)
    input  wire [31:0] WD,       // Write Data
    input  wire        WE,       // Write Enable
    
    // System Ports
    input  wire        Clk,
    input  wire        Reset     // Asynchronous reset
);
    // Implementation: Dual-port register array (with $0 always zero)
endmodule


// ====================================================================
// 4. ALU (Arithmetic Logic Unit)
// Supports ADDU, SUBU, ORI, Address Calculation (LW/SW), BEQ (SUB for comparison)
// Note: ALUctrl width adjusted to 3 bits based on control table.
// ====================================================================
module ALU (
    input  wire [31:0] A,        // Input 1
    input  wire [31:0] B,        // Input 2
    input  wire [2:0]  ALUCtrl,  // 3-bit Control Signal (000=Add, 001=Sub, 010=Or, 011=LUI/Shifted Imm)
    
    output wire [31:0] Result,   // 32-bit operation result
    output wire        Zero      // Output: 1 if Result is zero (for BEQ)
);
    // Implementation: Combination logic (case/if-else based on ALUCtrl)
endmodule


// ====================================================================
// 5. DM (Data Memory)
// Implemented as RAM for LW/SW instructions.
// Capacity: 3072 * 32-bit (12-bit address space for words)
// Address width corrected to 32 bits for consistency.
// --------------------------------------------------------------------
module DM (
    input  wire [31:0] Addr,     // Read/Write Address (from ALU)
    input  wire [31:0] WD,       // Write Data
    output wire [31:0] RD,       // Read Data
    
    input  wire        We,       // Write Enable (MemWrite)
    input  wire        Clk,
    input  wire        reset     // Asynchronous reset (initializes memory to 0x0)
);
    // Implementation: RAM array
endmodule


// ====================================================================
// 6. EXT (Extend Unit)
// Extends 16-bit immediate to 32 bits (Sign or Zero extension).
// --------------------------------------------------------------------
module EXT (
    input  wire [15:0] Imm16,    // 16-bit input
    input  wire        ExtOp,    // 1=Sign Extend (for LW/SW/BEQ), 0=Zero Extend (for ORI)
    output wire [31:0] Ext32     // 32-bit extended output
);
    // Implementation: Conditional concatenation based on ExtOp
endmodule


// ====================================================================
// 7. Controller (Control Unit)
// Generates all control signals based on opcode and funct.
// --------------------------------------------------------------------
module Controller (
    input  wire [5:0]  opcode,   // Instruction Opcode [31:26]
    input  wire [5:0]  funct,    // R-type Function Code [5:0]
    
    output wire        RegDst,     // 1=rd, 0=rt
    output wire        ALUSrc,     // 1=Immediate, 0=Register (rt)
    output wire        MemtoReg,   // 1=Memory Data, 0=ALU Result
    output wire        RegWrite,   // 1=Write to Reg File
    output wire        MemWrite,   // 1=Write to Data Memory
    output wire        nPC_sel,    // 1=Branch, 0=PC+4
    output wire        ExtOp,      // 1=Sign Extend, 0=Zero Extend
    output wire [2:0]  ALUctr      // ALU Control (000=Add, 001=Sub, 010=Or, 011=LUI)
);
    // Implementation: Combinational logic (assigns based on data path table)
endmodule

