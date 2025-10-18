module splitter(
    input [31:0] A,
    output [7:0] O1,
    output [7:0] O2,
    output [7:0] O3,
    output [7:0] O4
);
    assign {O1, O2, O3, O4} = {A[31:24], A[23:16], A[15:8], A[7:0]};
endmodule