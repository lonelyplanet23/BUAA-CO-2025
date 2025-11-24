`timescale 1ns / 1ps
`include "constants.v"

module DE_REG(
    input clk,
    input reset,
    input DE_clr,
    input [31:0] D_V1,
    input [31:0] D_V2,
    input [31:0] D_E32,
    input [31:0] D_PC,
    input [4:0] D_A3,
    input [31:0] D_Instr,
    output [31:0] E_V1,
    output [31:0] E_V2,
    output [31:0] E_E32,
    output [31:0] E_PC,
    output [4:0] E_A3,
    output [31:0] E_Instr,
    output [1:0] E_Tnew
);

    reg [31:0] v1_reg;
    reg [31:0] v2_reg;
    reg [31:0] ext_reg;
    reg [31:0] pc_reg;
    reg [4:0] a3_reg;
    reg [31:0] instr_reg;
    reg [1:0] tnew_reg;
    wire [5:0] opcode; 
    wire [5:0] funct;

    assign E_V1 = v1_reg;
    assign E_V2 = v2_reg;
    assign E_E32 = ext_reg;
    assign E_PC = pc_reg;
    assign E_A3 = a3_reg;
    assign E_Instr = instr_reg;
    assign E_Tnew = tnew_reg;
    assign opcode = D_Instr[31:26];
    assign funct = D_Instr[5:0];

    initial begin
        v1_reg <= 32'b0;
        v2_reg <= 32'b0;
        ext_reg <= 32'b0;
        pc_reg <= `INITIAL_ADDRESS;
        a3_reg <= 5'b0;
        instr_reg <= 32'b0;
        tnew_reg <= 2'b0;
    end

    always @(posedge clk) begin
        if (reset || DE_clr) begin
            v1_reg <= 32'b0;
            v2_reg <= 32'b0;
            ext_reg <= 32'b0;
            pc_reg <= `INITIAL_ADDRESS;
            a3_reg <= 5'b0;
            instr_reg <= 32'b0;
            tnew_reg <= 2'b0;
        end else begin
            v1_reg <= D_V1;
            v2_reg <= D_V2;
            ext_reg <= D_E32;
            pc_reg <= D_PC;
            a3_reg <= D_A3;
            instr_reg <= D_Instr;
            // TODO: Generate Tnew based on D_Instr
            tnew_reg <= 2'b0;
        end
    end

endmodule

