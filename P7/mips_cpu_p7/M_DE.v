`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:42:38 12/07/2025 
// Design Name: 
// Module Name:    M_DE 
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

module M_DE(
    input [2:0] DEOp,    
    input [1:0] A,       
    input [31:0] M_RD,   
    output reg [31:0] M_RDEXT 
    );

    always @(*) begin
        case(DEOp)
            `DE_NONE: M_RDEXT = M_RD; // lw: 原样输出

            `DE_LB: begin // lb: 符号字节扩展
                case(A)
                    2'b00: M_RDEXT = {{24{M_RD[7]}},  M_RD[7:0]};
                    2'b01: M_RDEXT = {{24{M_RD[15]}}, M_RD[15:8]};
                    2'b10: M_RDEXT = {{24{M_RD[23]}}, M_RD[23:16]};
                    2'b11: M_RDEXT = {{24{M_RD[31]}}, M_RD[31:24]};
                endcase
            end

            `DE_LH: begin // lh: 符号半字扩展
                if(A[1] == 1'b0) M_RDEXT = {{16{M_RD[15]}}, M_RD[15:0]};
                else             M_RDEXT = {{16{M_RD[31]}}, M_RD[31:16]};
            end

            default: M_RDEXT = M_RD;
        endcase
    end

endmodule
