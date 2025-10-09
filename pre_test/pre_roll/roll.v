`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:50:59 10/09/2025 
// Design Name: 
// Module Name:    roll 
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
/*
    组合逻辑
*/
//////////////////////////////////////////////////////////////////////////////////
module roll(
    input [31:0] a,
    output reg [31:0] out
    );
integer i = 0;
reg [3:0] sum;
//! 变量名前[]:表示位宽，变量名后[]:表示数组位数
//! 注意选取位宽时的范围
always @(*) begin
    sum = 4'b0;
    //[3:0] [7:4] [11:8] [15:12] [19:16] [23:20] [27:24] [31:28]
    for(i = 0; i < 32; i = i + 4)begin
        sum = sum + a[(i+3) -: 4];
        //[bit+: width] : 从起始 bit 位开始递增，位宽为 width。
        sum = sum % 5'd16;
        out[(i+3) -: 4] = sum[3:0];
    end
end
    

endmodule
