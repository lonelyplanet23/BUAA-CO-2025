`timescale 1ns / 1ps
`include "constants.v"

module EM_REG(
    input clk,
    input reset,
    input [31:0] E_Instr,
    input [31:0] E_AO,
    input [31:0] E_V2,
    input [31:0] E_PC,
    input [4:0]  E_ExcCode,
    input [4:0]  E_A3,
    input        E_RFWr,
    input [1:0]  E_Tnew,
    output reg [31:0] M_Instr,
    output reg [31:0] M_AO,
    output reg [31:0] M_V2,
    output reg [31:0] M_PC,
    output reg [4:0]  M_A3,
    output reg [4:0]  M_ExcCode,
    output reg        M_RFWr,
    output reg [1:0]  M_Tnew
);

    initial begin
        M_Instr <= 32'b0;
        M_AO <= 32'b0;
        M_V2 <= 32'b0;
        M_PC <= `INITIAL_ADDRESS;
        M_A3 <= 5'b0;
        M_RFWr <= 1'b0;
        M_ExcCode <= 5'b0;
        M_Tnew <= 2'b0;
    end

    always @(posedge clk) begin
        if (reset) begin
            M_Instr <= 32'b0;
            M_AO <= 32'b0;
            M_V2 <= 32'b0;
            M_PC <= `INITIAL_ADDRESS;
            M_A3 <= 5'b0;
            M_ExcCode <= 5'b0;
            M_Tnew <= 2'b0;
        end else begin
            M_Instr <= E_Instr;
            M_AO <= E_AO;
            M_V2 <= E_V2;
            M_PC <= E_PC;
            M_A3 <= E_A3;
            M_RFWr <= E_RFWr;
            M_ExcCode <= E_ExcCode;
            //Tnew-1,如果已经是0，则保持不变。
            M_Tnew <= (E_Tnew == 2'b00) ? 2'b00 : (E_Tnew - 2'b01);
        end
    end

endmodule


