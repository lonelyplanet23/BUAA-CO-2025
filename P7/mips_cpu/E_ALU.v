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
    output reg [31:0] E_AO,
    output reg [4:0] ExcCode_raw
    );
    // 异常检测
    wire [31:0] AaddB;
    assign AaddB = A + B;
    always @(*) begin
        ExcCode_raw = `EXCCODE_INT;  
        case (Opcode)
            `LW: begin
                // 对齐检查（地址[1:0]必须为00）
                if((AaddB)[1:0] != 2'b00) begin
                    ExcCode_raw = `EXCCODE_ADEL;
                end
                // 地址范围检查
                else if(!( ((AaddB) >= 32'h00000000 && (AaddB) < 32'h00003000) ||  // 基础范围
                           ((AaddB) == 32'h00007f00) || (AaddB) == 32'h00007f04 || 
                           (AaddB) == 32'h00007f08 || (AaddB) == 32'h00007f10 || 
                           (AaddB) == 32'h00007f14 || (AaddB) == 32'h00007f18 ||  // LW专属
                           ((AaddB) >= 32'h00007f20 && (AaddB) < 32'h00007f24) )) begin  // 通用额外
                    ExcCode_raw = `EXCCODE_ADEL;
                end
            end

            // LH（2字节）
            `LH: begin
                // 对齐检查
                if((AaddB)[0] != 1'b0) begin
                    ExcCode_raw = `EXCCODE_ADEL;
                end
                // 地址范围检查
                else if(!( ((AaddB) >= 32'h00000000 && (AaddB) < 32'h00003000) ||  // 基础范围
                           ((AaddB) >= 32'h00007f20 && (AaddB) < 32'h00007f24) )) begin  // 通用额外
                    ExcCode = `EXCCODE_ADEL;
                end
            end

            // 存储类指令：SW（4字节）
            `SW: begin
                // 对齐检查
                if((AaddB)[1:0] != 2'b00) begin
                    ExcCode_raw = `EXCCODE_ADES;
                end
                //地址范围检查
                else if(!( ((AaddB) >= 32'h00000000 && (AaddB) < 32'h00003000) ||  
                           ((AaddB) == 32'h00007f00) || (AaddB) == 32'h00007f04 || 
                           (AaddB) == 32'h00007f10 || (AaddB) == 32'h00007f14 ||  // SW专属
                           ((AaddB) >= 32'h00007f20 && (AaddB) < 32'h00007f24) )) begin  
                    ExcCode_raw = `EXCCODE_ADES;
                end
            end

            // 存储类指令：SH（2字节）
            `SH: begin
                // 对齐检查
                if((AaddB)[0] != 1'b0) begin
                    ExcCode_raw = `EXCCODE_ADES;
                end
                // 地址范围检查
                else if(!( ((AaddB) >= 32'h00000000 && (AaddB) < 32'h00003000) ||  
                           ((AaddB) >= 32'h00007f20 && (AaddB) < 32'h00007f24) )) begin  
                    ExcCode = `EXCCODE_ADES;
                end
            end
            //存储类指令：SB（1字节）
            `SB: begin
                // 检查地址范围
                if(!( ((AaddB) >= 32'h00000000 && (AaddB) < 32'h00003000) ||  
                       ((AaddB) >= 32'h00007f20 && (AaddB) < 32'h00007f24) )) begin 
                    ExcCode = `EXCCODE_ADES;
                end
            end
            default: ExcCode_raw = `EXCCODE_INT;
        endcase
    end
    // 判断溢出异常，设置溢出信号
    // 有符号拓展一位,再运算
    wire [32:0] Add_temp = {A[31], A} + {B[31], B};
    wire [32:0] Sub_temp = {A[31], A} - {B[31], B};
    wire Add_overflow = (Add_temp[31] == Add_temp[32]);
    wire Sub_overflow = (Sub_temp[31] == Sub_temp[32]);
    // ALU 运算
    always @(*) begin
        case (E_ALUOp)
            `ALU_ADD: begin 
                E_AO = A + B;
                if(Add_overflow) ExcCode_raw = `EXCCODE_OV;
            end
            `ALU_SUB: begin
                E_AO = A - B;
                if(Sub_overflow) ExcCode_raw = `EXCCODE_OV;
            end
            `ALU_OR:  E_AO = A | B;
            `ALU_SHIFT_LEFT_16: E_AO = B << 16;
            `ALU_AND: E_AO = A & B;
            `ALU_SLT: E_AO = ($signed(A) < $signed(B)) ? 32'd1 : 32'd0;
            `ALU_SLTU: E_AO = (A < B) ? 32'd1 : 32'd0;
            default: E_AO = 32'h00000000;
        endcase
    end

endmodule
