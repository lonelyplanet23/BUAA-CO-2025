`timescale 1ns / 1ps
`include "constants.v"

module D_CMP(
    input [31:0] D_A1,
    input [31:0] D_A2,
    input [2:0] D_CmpOp,
    output D_bjump
    );  
    reg result;
    assign D_bjump = result;
    always @(*) begin
        case(D_CmpOp)
            `CMP_EQ:     result = (D_A1 == D_A2);
            default:    result = 0;
        endcase
    end

endmodule