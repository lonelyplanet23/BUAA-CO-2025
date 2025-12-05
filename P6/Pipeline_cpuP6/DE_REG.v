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
    output reg [31:0] E_V1,
    output reg [31:0] E_V2,
    output reg [31:0] E_E32,
    output reg [31:0] E_PC,
    output reg [4:0] E_A3,
    output reg [31:0] E_Instr,
    output reg [1:0] E_Tnew
);

    wire [5:0] opcode; 
    wire [5:0] funct;
    reg [1:0] next_tnew;

    assign opcode = D_Instr[31:26];
    assign funct = D_Instr[5:0];

    initial begin
        E_V1 <= 32'b0;
        E_V2 <= 32'b0;
        E_E32 <= 32'b0;
        E_PC <= `INITIAL_ADDRESS;
        E_A3 <= 5'b0;
        E_Instr <= 32'b0;
        E_Tnew <= 2'b0;
    end

    always @(posedge clk) begin
        if (reset || DE_clr) begin
            E_V1 <= 32'b0;
            E_V2 <= 32'b0;
            E_E32 <= 32'b0;
            E_PC <= `INITIAL_ADDRESS;
            E_A3 <= 5'b0;
            E_Instr <= 32'b0;
            E_Tnew <= 2'b0;
        end else begin
            E_V1 <= D_V1;
            E_V2 <= D_V2;
            E_E32 <= D_E32;
            E_PC <= D_PC;
            E_A3 <= D_A3;
            E_Instr <= D_Instr;
            E_Tnew <= next_tnew;
        end
    end

    always @(*) begin
        case (opcode)
            `ZERO: begin
                case (funct)
                    `ADD:   next_tnew = 2'b01;
                    `SUB:   next_tnew = 2'b01;
                    `AND:   next_tnew = 2'b01;
                    `OR:    next_tnew = 2'b01;
                    `SLT:   next_tnew = 2'b01;
                    `SLTU:  next_tnew = 2'b01;
                    `JR:    next_tnew = 2'b00;
                    default:next_tnew = 2'b00;
                endcase
            end
            `ADDI:  next_tnew = 2'b01;
            `ANDI:  next_tnew = 2'b01;
            `ORI:   next_tnew = 2'b01;
            `LW:    next_tnew = 2'b10;
            `LUI:   next_tnew = 2'b01;
            default:next_tnew = 2'b00;
        endcase
    end

endmodule

