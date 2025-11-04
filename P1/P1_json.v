module json(
    input clk,
    input reset,
    input [7:0]char,
    output reg[7:0]cur_num,
    output reg[7:0]max_num
);
    reg [3:0] state_cur, state_next;
    integer cnt;
    parameter IDLE = 4'b000,
              _BEGIN = 4'b001,
              LEFT_QUOTE = 4'b010,
              CONTENT = 4'b011,
              RIGHT_QUOTE = 4'b100,
              COLON = 4'b101,
              COMMA = 4'b110,
              _END = 4'b111,
              INVALID = 4'b1000,
              ZERO_END = 4'b1001;
    //时序逻辑
    always @(posedge clk, posedge reset) begin
        if(reset) begin
            cur_num = 8'b0;
            max_num = 8'b0;
            state_cur = IDLE;
        end

        else begin
            state_cur = state_next;
        end
    end
    //组合逻辑
    always @(*) begin
        case(state_cur)
            IDLE: begin
                max_num = 0;
                if(char == "{") state_next = _BEGIN;
                else state_next = IDLE; 
            end

            _BEGIN: begin
                cnt = 0;
                if(char == 8'h22) state_next = LEFT_QUOTE;
                else if(char == "}") state_next = ZERO_END;
                else state_next = _BEGIN;
            end

            LEFT_QUOTE: begin
                if(char == 8'h22) state_next = INVALID;
                else state_next = CONTENT;
            end
            
            CONTENT: begin
                if(char == 8'h22) state_next = RIGHT_QUOTE;
                else state_next = CONTENT;
            end

            RIGHT_QUOTE: begin
                if(char == ":") state_next = COLON;
                else if(char == ",") state_next = COMMA;
                else if(char == "}") state_next = _END;
                else state_next = INVALID;
            end

            COLON: begin
                if(char == 8'h22) state_next = LEFT_QUOTE;
                else state_next = COLON;
            end

            COMMA:begin
                cnt = cnt + 1;
                if(char == 8'h22) state_next = LEFT_QUOTE;
                else state_next = COMMA;
            end

            _END: begin
                cnt = cnt + 1; //!计数器单独设一个int变量，不要用结果reg[7:0]cur_num来计数！
                cur_num = cnt;
                if(max_num < cur_num) max_num = cur_num; // 更新
                if(char == "{") state_next = _BEGIN;
                else state_next = IDLE;
            end

            ZERO_END: begin
                cur_num = 0;
                if(char == "{") state_next = _BEGIN;
                else state_next = IDLE;
            end
            
            INVALID: begin
                if(char == "}") state_next = ZERO_END;
                else state_next = INVALID;
            end
        endcase
    end

endmodule