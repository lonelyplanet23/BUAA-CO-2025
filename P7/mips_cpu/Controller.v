`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:44:58 11/14/2025 
// Design Name: 
// Module Name:    Controller 
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
`include "constants.v" // 包含所有宏定义

module Controller(
        input [5:0] opcode, 
        input [5:0] funct,
        input [4:0] rs,
        output reg [1:0] Reg_WrSel,   // 目的寄存器选择
        output reg [1:0] ALU_BSrc,    // ALU第二操作数选择
        output reg [1:0] Reg_WrSrc,   // 写回寄存器数据源
        output reg RFWr,              // 寄存器写使能
        output reg DMWr,              // 数据存储器写使能
        output reg [2:0] nPC_sel,     // 下一个PC选择
        output reg ExtOp,             // 立即数扩展方式
        output reg [3:0] ALUOp,       // ALU运算类型 (4-bit)
        output reg [2:0] CmpOp,       // 比较操作类型
        output reg [1:0] T_use_RS,    // RS 消费时间
        output reg [1:0] T_use_RT,     // RT 消费时间
        output reg [2:0] AO_sel,     // E阶段ALU/MDU选择
        output reg [2:0] MDUOp,      // 乘除槽操作类型
        output reg       MDU_related,  // 指令是否与乘除槽相关
        output reg       MDU_start,        // 乘除槽开始运算的信号
        output reg [2:0] BEOp,        // 字节使能操作类型
        output reg [2:0] DEOp,      // DM读取数据的扩展方式
        output reg CPWr,        // CP0寄存器写使能
        output reg CPZSel,      // 输出选择CP0寄存器
        output reg RI            // 非法或未知指令标志 (Reserved Instruction)
    );

    
    always @(*) begin
        Reg_WrSel = `RD_RT;
        ALU_BSrc = `ALU_BSRC_V2;
        Reg_WrSrc = `RS_ALU;
        RFWr = 1'b0;
        DMWr = 1'b0;
        nPC_sel = `NPC_PC4; 
        ExtOp = `EXT_ZERO;
        ALUOp = `ALU_ADD;
        CmpOp = `CMP_NONE;
        T_use_RS = `TUSE_NONE;
        T_use_RT = `TUSE_NONE;
        AO_sel = `FROM_ALU; 
        MDUOp = `MDU_NOP;
        MDU_start = 1'b0;
        MDU_related = 1'b0;
        BEOp = `BE_NONE;    
        DEOp = `DE_NONE;
        CPWr = 1'b0;
        CPZSel = `FROM_ALU;
        RI = 1'b0;  // 初始化非法指令标志为0

        
        case(opcode) 
            `ZERO: begin
                case (funct)
                    `ADD: begin
                        Reg_WrSel = `RD_RD;
                        RFWr = 1'b1;
                        ALUOp = `ALU_ADD;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;
                    end
                    `SUB: begin
                        Reg_WrSel = `RD_RD;
                        RFWr = 1'b1;
                        ALUOp = `ALU_SUB;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;
                    end
                    `JR: begin
                        nPC_sel = `NPC_JR;
                        T_use_RS = `TUSE_D;
                    end
                    `AND: begin
                        Reg_WrSel = `RD_RD;
                        RFWr = 1'b1;
                        ALUOp = `ALU_AND;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;
                    end
                    `OR: begin
                        Reg_WrSel = `RD_RD;
                        RFWr = 1'b1;
                        ALUOp = `ALU_OR;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;    
                    end
                    `SLT: begin
                        Reg_WrSel = `RD_RD;
                        RFWr = 1'b1;
                        ALUOp = `ALU_SLT;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;    
                    end
                    `SLTU: begin
                        Reg_WrSel = `RD_RD;
                        RFWr = 1'b1;
                        ALUOp = `ALU_SLTU;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;                            
                    end
                    `MULT: begin
                        MDU_related = 1'b1;
                        MDUOp = `MDU_MULT;
                        MDU_start = 1'b1;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;
                    end
                    `MULTU: begin
                        MDU_related = 1'b1;
                        MDUOp = `MDU_MULTU;
                        MDU_start = 1'b1;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;
                    end
                    `DIV: begin
                        MDU_related = 1'b1;
                        MDUOp = `MDU_DIV;
                        MDU_start = 1'b1;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;
                    end
                    `DIVU: begin
                        MDU_related = 1'b1;
                        MDUOp = `MDU_DIVU;
                        MDU_start = 1'b1;
                        T_use_RS = `TUSE_E;
                        T_use_RT = `TUSE_E;
                    end
                    `MTHI: begin
                        MDU_related = 1'b1;
                        MDUOp = `MDU_MTHI;
                        MDU_start = 1'b0;
                        T_use_RS = `TUSE_E;
                    end
                    `MTLO: begin
                        MDU_related = 1'b1;
                        MDUOp = `MDU_MTLO;
                        MDU_start = 1'b0;
                        T_use_RS = `TUSE_E;
                    end
                    `MFHI: begin
                        MDU_related = 1'b1;
                        Reg_WrSel = `RD_RD;
                        AO_sel = `FROM_HI;
                        RFWr = 1'b1;
                    end
                    `MFLO: begin
                        MDU_related = 1'b1;
                        Reg_WrSel = `RD_RD;
                        AO_sel = `FROM_LO;
                        RFWr = 1'b1;
                    end
                    6'b000000: begin // NOP指令
                    end
                    default: begin
                        // R型指令的funct不在已定义列表中，为非法指令
                        RI = 1'b1;
                    end
                endcase
            end
            
            `ADDI: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                RFWr = 1'b1;
                ExtOp = `EXT_SIGN;
                ALUOp = `ALU_ADD;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_NONE;                
            end
            `ANDI: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                RFWr = 1'b1;
                ExtOp = `EXT_ZERO;
                ALUOp = `ALU_AND;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_NONE;                   
            end
            `ORI: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                RFWr = 1'b1;
                ExtOp = `EXT_ZERO;
                ALUOp = `ALU_OR;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_NONE;
            end
            
            `LW: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                Reg_WrSrc = `RS_MEM;
                RFWr = 1'b1;
                ExtOp = `EXT_SIGN;
                ALUOp = `ALU_ADD;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_NONE;
            end
            `LB: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                Reg_WrSrc = `RS_MEM;
                RFWr = 1'b1;
                DEOp = `DE_LB;
                ExtOp = `EXT_SIGN;
                ALUOp = `ALU_ADD;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_NONE;
            end            
            `LH: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                Reg_WrSrc = `RS_MEM;
                RFWr = 1'b1;
                DEOp = `DE_LH;
                ExtOp = `EXT_SIGN;
                ALUOp = `ALU_ADD;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_NONE;
            end            
            `SW: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                DMWr = 1'b1;
                BEOp = `BE_SW;
                ExtOp = `EXT_SIGN;
                ALUOp = `ALU_ADD;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_M;
            end
            `SB: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                DMWr = 1'b1;
                BEOp = `BE_SB;
                ExtOp = `EXT_SIGN;
                ALUOp = `ALU_ADD;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_M;                
            end
            `SH: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                DMWr = 1'b1;
                BEOp = `BE_SH;
                ExtOp = `EXT_SIGN;
                ALUOp = `ALU_ADD;
                T_use_RS = `TUSE_E;
                T_use_RT = `TUSE_M;                
            end
            `BEQ: begin
                nPC_sel = `NPC_BRANCH;
                ExtOp = `EXT_SIGN;
                CmpOp = `CMP_EQ;
                T_use_RS = `TUSE_D;
                T_use_RT = `TUSE_D;
            end
            
            `BNE: begin
                nPC_sel = `NPC_BRANCH;
                ExtOp = `EXT_SIGN;
                CmpOp = `CMP_NEQ;
                T_use_RS = `TUSE_D;
                T_use_RT = `TUSE_D;
            end

            `LUI: begin
                ALU_BSrc = `ALU_BSRC_EXT;
                RFWr = 1'b1;
                ExtOp = `EXT_ZERO;
                ALUOp = `ALU_SHIFT_LEFT_16;
            end

            `JAL: begin
                Reg_WrSel = `RD_RA;
                Reg_WrSrc = `RS_PC8;
                RFWr = 1'b1;
                nPC_sel = `NPC_JUMP;
            end

            `J: begin
                RFWr = 1'b0;
                nPC_sel = `NPC_JUMP;
            end
            `SYSCALL: begin
                // 系统调用指令，不需要设置控制信号
                // 异常处理由CP0模块处理
            end
            
            default: begin
                if(`MFC0) begin
                    RFWr = 1'b1;
                    CPZSel = `FROM_CP0;
                end
                else if(`MTC0) begin
                    CPWr = 1'b1;
                    T_use_RT = `TUSE_M;
                end     
                else begin
                    RI = 1'b1;
                end       
            end
        endcase


    end

endmodule