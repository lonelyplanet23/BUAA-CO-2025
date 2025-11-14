`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:33:02 11/14/2025 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] IM_addr,
    output [31:0] IM_data
    );
    reg [31:0] ROM[4095:0];
    
    initial begin
        $readmemh("code.txt", ROM);
    end
    
    wire [11:0] addr;
    assign addr = (IM_addr - `INITIAL_ADDRESS)>>2;
    assign IM_data = ROM[addr];


endmodule
