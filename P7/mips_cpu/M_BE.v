`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:37:29 12/07/2025 
// Design Name: 
// Module Name:    M_BE 
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
module M_BE(
    input [1:0] BEOp,
    input [31:0] Addr,
    input [31:0] WD,
    input DMWr,
    output reg [3:0] M_byteen,
    output reg [31:0] m_data_wdata
    );
    
    wire [1:0] low_addr = Addr[1:0];

    always @(*) begin
        // 1. 默认清零，防止锁存器
        M_byteen = 4'b0000;
        m_data_wdata = 32'b0;

        if (DMWr) begin
            case(BEOp)
                `BE_SW: begin 
                    M_byteen = 4'b1111;
                    m_data_wdata = WD; // sw 不需要复制
                end

                `BE_SH: begin 
                    m_data_wdata = {WD[15:0], WD[15:0]}; 
                    
                    if (low_addr[1] == 1'b0) M_byteen = 4'b0011;
                    else                     M_byteen = 4'b1100;
                end

                `BE_SB: begin 
  
                    m_data_wdata = {WD[7:0], WD[7:0], WD[7:0], WD[7:0]};
                    
                    case(low_addr)
                        2'b00: M_byteen = 4'b0001;
                        2'b01: M_byteen = 4'b0010;
                        2'b10: M_byteen = 4'b0100;
                        2'b11: M_byteen = 4'b1000;
                    endcase
                end
                
                default: begin
                    M_byteen = 4'b0000;
                    m_data_wdata = WD;
                end
            endcase
        end
    end

endmodule