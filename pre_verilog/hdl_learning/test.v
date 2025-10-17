module top_module (
    input [31:0] a,
    input [31:0] b,
    output [31:0] sum
);//
    wire temp;
    wire tmp1;
    add16 add_1(a[15:0], b[15:0], 1'b0, sum[15:0], temp);
    add16 add_2(a[31:16], b[31:16], temp, sum[31:16], tmp1);

endmodule

module add16 ( input[15:0] a, input[15:0] b, input cin, output[15:0] sum, output cout );
endmodule

module add1 ( input a, input b, input cin,   output sum, output cout );

// Full adder module here
    assign sum = a ^ b ^ cin;
    assign cout = (a&b) | (a&cin) | (b&cin);
endmodule

//a fast 2-to-1 multiplexer to select which result happened to be correct.
module top_module_cse_adder(
    input [31:0] a,
    input [31:0] b,
    output [31:0] sum
);
    wire sel;
    wire tmp1, tmp2;
    wire [15:0] sum1, sum2;
    add16 add_1(a[15:0], b[15:0], 1'b0, sum[15:0], sel);
    add16 add_2(a[31:16], b[31:16], 1'b0, sum1, tmp1);
    add16 add_3(a[31:16], b[31:16], 1'b1, sum2, tmp2);

    reg [31:16] sum_tmp;
    always @(*) begin
        case(sel)
            0 : sum_tmp = sum1;
            1 : sum_tmp = sum2;
        endcase
    end
    assign sum[31:16] = sum_tmp;
endmodule

module add_sub(
    input [31:0] a,
    input [31:0] b,
    input sub,
    output [31:0] sum
);
    wire [31:0] tmp;
    wire cin, cout;
    assign tmp = b ^ {32{sub}};
    
    add16 add_1(a[15:0], tmp[15:0], sub, sum[15:0], cin);
    add16 add_2(a[31:16], tmp[31:16], cin, sum[31:16], cout);
    
endmodule

module encoder_8bit (
    input [7:0] in,
    output reg [2:0] pos );
    always @(*) begin
        casez(in)
            8'bzzzzzzz1: pos = 0;
            8'bzzzzzz1z: pos = 1;
            8'bzzzzz1zz: pos = 2;
            8'bzzzz1zzz: pos = 3;
            8'bzzz1zzzz: pos = 4;
            8'bzz1zzzzz: pos = 5;
            8'bz1zzzzzz: pos = 6;
            8'b1zzzzzzz: pos = 7;
            default: pos = 3'b000;
        endcase
    end
endmodule

module process_with_keyboard (
    input [15:0] scancode,
    output reg left,
    output reg down,
    output reg right,
    output reg up  ); 

    always @(*) begin
        left = 1'b0; down = 1'b0; right = 1'b0; up = 1'b0;
        case(scancode)
            16'he06b: left = 1'b1;
            16'he072: down = 1'b1;
            16'he074: right = 1'b1;
            16'he075: up = 1'b1;
        endcase

    end
endmodule

module reverse_100bits( 
    input [99:0] in,
    output [99:0] out
);
	integer i = 0;
    reg [99:0] tmp;
    always @(*)begin
        for(i = 0; i <= 99; i = i+1)begin
            tmp[i] = in[99-i];
        end
    end
    assign out = tmp;
endmodule

module Popcount255( 
    input [254:0] in,
    output [7:0] out );
    integer i;
    reg [7:0] tmp = 0;
    always @(*)begin
        for(i = 0; i <= 254; i = i+1)begin
            tmp = tmp + ((in[i] == 1)? 1'b1 : 1'b0);
        end
    end
    assign out = tmp;
endmodule
// module add1 ( input a, input b, input cin,   output sum, output cout );

// // Full adder module here
//     assign sum = a ^ b ^ cin;
//     assign cout = (a&b) | (a&cin) | (b&cin);
// endmodule
module adder100i( 
    input [99:0] a, b,
    input cin,
    output [99:0] cout,
    output [99:0] sum );
    // instantiate LSB adder
    add1 my_add_first(
        .a(a[0]),
        .b(b[0]),
        .cin(cin),
        .sum(sum[0]),
        .cout(cout[0])
    );
    genvar i;
    generate
        for(i = 1; i <= 99; i = i+1) begin : bit_adder
            add1 my_add(
                .a(a[i]),
                .b(b[i]),
                .cin(cout[i-1]),
                .sum(sum[i]),
                .cout(cout[i])
            );
        end
    endgenerate
endmodule

module bcd_fadd (
    input [3:0] a,
    input [3:0] b,
    input     cin,
    output   cout,
    output [3:0] sum );
endmodule

module bcd_fadd_all( 
    input [399:0] a, b,
    input cin,
    output cout,
    output [399:0] sum );
    wire [99:0] tmp;
    bcd_fadd ad1(a[3:0], b[3:0], cin, tmp[0], sum[3:0]);

    genvar i;
    generate
        for(i = 1; i <= 99; i = i+1)begin
            bcd_fadd adder_bit(
                .a(a[i*4 + 3 -: 4]),
                .b(b[i*4 + 3 -: 4]),
                .cin(tmp[i-1]),
                .cout(tmp[i]),
                .sum(sum[i*4 + 3 -: 4])
            );
        end
    endgenerate
    assign cout = tmp[99];
endmodule