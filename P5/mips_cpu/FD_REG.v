`timescale 1ns / 1ps
`include "constants.v"

module FD_REG(
    input clk,
    input reset,
    input FD_en,
    input [31:0] F_instr,
    input [31:0] F_PC,
    output [31:0] D_Instr,
    output [31:0] D_PC
);

    reg [31:0] instr_reg;
    reg [31:0] pc_reg;

    assign D_Instr = instr_reg;
    assign D_PC = pc_reg;

    initial begin
        instr_reg <= 32'b0;
        pc_reg <= `INITIAL_ADDRESS;
    end

    always @(posedge clk) begin
        if (reset) begin
            instr_reg <= 32'b0;
            pc_reg <= `INITIAL_ADDRESS;
        end else if (FD_en) begin
            instr_reg <= F_instr;
            pc_reg <= F_PC;
        end
    end

endmodule