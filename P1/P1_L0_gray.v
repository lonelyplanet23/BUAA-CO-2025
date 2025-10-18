module gray (
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output Overflow
);
    reg flag;
    reg [2:0] cnt;
    always @(posedge Clk)begin
        if(Reset == 1'b1) begin
            cnt <= 1'b0;
            flag <= 1'b0;
        end 
        else if(En == 1'b1) begin
            if(cnt == 3'b111) begin
                cnt <= 0;
                flag <= 1;
            end
            else begin
                cnt <= cnt + 1'b1;
            end
        end
    end
    assign Output = cnt ^ (cnt >> 1); //格雷码镜像构造法
    assign Overflow = flag;
endmodule