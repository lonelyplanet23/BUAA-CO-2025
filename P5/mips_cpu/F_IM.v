`timescale 1ns / 1ps
`include "constants.v"
module F_IM(
    input [31:0] A,
    output [31:0] F_Instr
    );
    reg [31:0] ROM[4095:0];     
    integer i;
    initial begin
        for(i = 0; i < 4096; i = i + 1)begin
            ROM[i] = 32'h0;
        end
        $readmemh("code.txt", ROM);
    end
    
    wire [11:0] addr;
    assign addr = (A - `INITIAL_ADDRESS)>>2;
    assign F_Instr = ROM[addr];


endmodule
