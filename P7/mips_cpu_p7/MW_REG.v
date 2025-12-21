`timescale 1ns / 1ps
`include "constants.v"

module MW_REG(
    input clk,
    input reset,
    input [31:0] M_Instr,
    input [31:0] M_AO,
    input [31:0] M_RD,
    input [31:0] M_PC,
    input [4:0]  M_A3,
    output reg [31:0] W_Instr,
    output reg [31:0] W_AO,
    output reg [31:0] W_RD,
    output reg [31:0] W_PC,
    output reg [4:0]  W_A3
);

    initial begin
        W_Instr <= 32'b0;
        W_AO <= 32'b0;
        W_RD <= 32'b0;
        W_PC <= `INITIAL_ADDRESS;
        W_A3 <= 5'b0;
    end

    always @(posedge clk) begin
        if (reset) begin
            W_Instr <= 32'b0;
            W_AO <= 32'b0;
            W_RD <= 32'b0;
            W_PC <= `INITIAL_ADDRESS;
            W_A3 <= 5'b0;
        end else begin
            W_Instr <= M_Instr;
            W_AO <= M_AO;
            W_RD <= M_RD;
            W_PC <= M_PC;
            W_A3 <= M_A3;
        end
    end

endmodule
