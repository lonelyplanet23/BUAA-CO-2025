`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:09:24 10/18/2025 
// Design Name: 
// Module Name:    expression 
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
module expression(
    input clk,
    input clr,
    input [7:0] in,
    output reg out
);
// IDLE ONE_NUM NUM_WITH_ONEOP VAILD INVALID
    parameter  IDLE = 3'b000,
        ONE_NUM = 3'b001,
        NUM_WITH_ONEOP = 3'b010,
        VAILD = 3'b011, 
        INVALID = 3'b100; // 异常符号、连续数字、前导运算符、连续运算符
    
    // machine variable
    reg [2:0] st_cur;
    reg [2:0] st_next;

    // 时序逻辑
    always @(posedge clk or posedge clr) begin
        if(clr)begin
            st_cur <= IDLE;
            //out <= 0;
        end
        else st_cur <= st_next; //!debug2
    end

    //状态转移和输出 MOORE
    always @(*) begin
        case (st_cur)
            IDLE: 
                begin
                    out = 0; //处理输出逻辑
                    case(in) //处理状态转移
                        "0", "1", "2", "3", "4", "5", "6", "7", "8", "9":  st_next = ONE_NUM;
                        "+" : st_next = INVALID;
                        "*" : st_next = INVALID;
                        default: st_next = INVALID; //!debug1 因为可能会输入其他字符
                    endcase
                end
            ONE_NUM:
                begin
                    out = 1;
                    case(in)
                        "0", "1", "2", "3", "4", "5", "6", "7", "8", "9":  st_next = INVALID;
                        "+", "*" : st_next = NUM_WITH_ONEOP;
                        default: st_next = INVALID;                        
                    endcase
                end
            NUM_WITH_ONEOP:
                begin       
                    out = 0;
                    case(in)
                        "0", "1", "2", "3", "4", "5", "6", "7", "8", "9":  st_next = VAILD;
                        "+", "*" : st_next = INVALID;
                        default: st_next = INVALID; 
                    endcase
                end
            VAILD:  
                begin
                    out = 1;
                    case(in)
                        "0", "1", "2", "3", "4", "5", "6", "7", "8", "9":  st_next = INVALID; //连续数字异常
                        "+", "*" : st_next = NUM_WITH_ONEOP;  
                        default: st_next = INVALID;                      
                    endcase
                end
            INVALID:    
                begin
                    out = 0;
                    case(in)
                        "0", "1", "2", "3", "4", "5", "6", "7", "8", "9":  st_next = INVALID; //重新开始
                        "+", "*" : st_next = INVALID; 
                        default: st_next = INVALID;                      
                    endcase  
                end
            default: //!default added for safety
                begin
                    out = 0;
                    st_next = IDLE;
                end
        endcase
    end   



endmodule
