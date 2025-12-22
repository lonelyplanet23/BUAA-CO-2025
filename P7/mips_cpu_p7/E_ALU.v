`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:38:08 11/14/2025 
// Design Name: 
// Module Name:    ALU 
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
`include "constants.v"
module E_ALU(
    input [31:0] A,
    input [31:0] B,
    input [3:0] E_ALUOp,
    input [5:0] Opcode,    
    input [1:0] ALU_TYPE,
    output reg [31:0] E_AO,
    output reg [4:0] ExcCode
    );

    wire [31:0] AaddB;
    assign AaddB = A + B;
    // 判断溢出异常，设置溢出信号
    // 有符号拓展一位,再运算
    wire [32:0] Add_temp = {A[31], A} + {B[31], B};
    wire [32:0] Sub_temp = {A[31], A} - {B[31], B};
    wire Add_overflow = (Add_temp[31] != Add_temp[32]);
    wire Sub_overflow = (Sub_temp[31] != Sub_temp[32]);
    // ALU 运算
    always @(*) begin
        ExcCode = 5'b0; 
        E_AO = 32'b0;

        case (E_ALUOp)
            `ALU_ADD: begin 
                E_AO = A + B;
                if(Add_overflow && ALU_TYPE == `ALU_ARITHMETIC) ExcCode = `EXCCODE_OV;
                else if(Add_overflow && ALU_TYPE == `ALU_SAVE) ExcCode = `EXCCODE_ADES;
                else if(Add_overflow && ALU_TYPE == `ALU_LOAD) ExcCode = `EXCCODE_ADEL;
            end
            `ALU_SUB: begin
                E_AO = A - B;
                if(Sub_overflow && ALU_TYPE == `ALU_ARITHMETIC) ExcCode = `EXCCODE_OV;
            end
            `ALU_OR:  E_AO = A | B;
            `ALU_SHIFT_LEFT_16: E_AO = B << 16;
            `ALU_AND: E_AO = A & B;
            `ALU_SLT: E_AO = ($signed(A) < $signed(B)) ? 32'd1 : 32'd0;
            `ALU_SLTU: E_AO = (A < B) ? 32'd1 : 32'd0;
            default: E_AO = 32'h00000000;
        endcase
               
        case (Opcode)
            `LW: begin
                // 对齐检查（地址[1:0]必须为00）
                if(AaddB[1:0] != 2'b00) begin
                    ExcCode = `EXCCODE_ADEL;
                end
                // 地址范围检查
               
                else if(!( ((AaddB) >= 32'h0000_0000 && (AaddB) < 32'h0000_3000) ||  // DM 数据区
                           ((AaddB) >= 32'h0000_7f00 && (AaddB) <= 32'h0000_7f0b) ||  // Timer0 (0-B)
                           ((AaddB) >= 32'h0000_7f10 && (AaddB) <= 32'h0000_7f1b) ||  // Timer1 (10-1B)
                           ((AaddB) >= 32'h0000_7f20 && (AaddB) <= 32'h0000_7f23) ))  // Interrupt Gen
                begin
                    ExcCode = `EXCCODE_ADEL;
                end
            end
            // LB （1字节）
            `LB: begin
                // 地址范围检查
                if(!( ((AaddB) >= 32'h0000_0000 && (AaddB) < 32'h0000_3000) || 
                      ((AaddB) >= 32'h0000_7f20 && (AaddB) <= 32'h0000_7f23) )) begin 
                    ExcCode = `EXCCODE_ADEL;
                end
            end
            // LH（2字节） 
            
            `LH: begin
                // 对齐检查
                if(AaddB[0] != 1'b0) begin
                    ExcCode = `EXCCODE_ADEL;
                end
                // 地址范围检查
                else if(!( ((AaddB) >= 32'h0000_0000 && (AaddB) < 32'h0000_3000) || 
                           ((AaddB) >= 32'h0000_7f20 && (AaddB) <= 32'h0000_7f23) )) begin 
                    ExcCode = `EXCCODE_ADEL;
                end
            end

            // 存储类指令：SW（4字节）
            `SW: begin
                // 对齐检查
                if(AaddB[1:0] != 2'b00) begin
                    ExcCode = `EXCCODE_ADES;
                end
                //地址范围检查
                // 【修改重点】同样改为范围判断，覆盖 Timer 写操作
                else if(!( ((AaddB) >= 32'h0000_0000 && (AaddB) < 32'h0000_3000) || 
                           ((AaddB) >= 32'h0000_7f00 && (AaddB) < 32'h0000_7f08) ||  // Timer0
                           ((AaddB) >= 32'h0000_7f10 && (AaddB) < 32'h0000_7f18) ||  // Timer1
                           ((AaddB) >= 32'h0000_7f20 && (AaddB) < 32'h0000_7f24) )) begin  
                    ExcCode = `EXCCODE_ADES;
                end
            end

            // 存储类指令：SH（2字节）- 保持原样
            `SH: begin
                // 对齐检查
                if(AaddB[0] != 1'b0) begin
                    ExcCode = `EXCCODE_ADES;
                end
                // 地址范围检查
                else if(!( ((AaddB) >= 32'h0000_0000 && (AaddB) < 32'h0000_3000) || 
                           ((AaddB) >= 32'h0000_7f20 && (AaddB) < 32'h0000_7f24) )) begin 
                    ExcCode = `EXCCODE_ADES;
                end
            end
            
            // 存储类指令：SB（1字节）- 保持原样
            `SB: begin
                // 检查地址范围
                if(!( ((AaddB) >= 32'h0000_0000 && (AaddB) < 32'h0000_3000) || 
                      ((AaddB) >= 32'h0000_7f20 && (AaddB) < 32'h0000_7f24) )) begin 
                    ExcCode = `EXCCODE_ADES;
                end
            end
        endcase
    end

endmodule
