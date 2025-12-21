`include "constants.v"
module CP0 (
    input         clk,          
    input         reset,          
    // 指令读写接口
    input  [4 :0] A1,           // 读寄存器编号（mfc0 rd）
    input  [4 :0] A2,           // 写寄存器编号（mtc0 rd）
    input  [31:0] DIn,          // 待写入 CP0 的数据（来自 GPR[rt]）
    input         CPWr,         // 写使能信号（执行 mtc0 时产生）
    output reg [31:0] DOut,         // CP0 寄存器读出数据（送往回写通路）
    
    input  [31:0] PC,           // 发生异常/中断时的 PC 值
    input         BD,           // 发生异常/中断时的指令是否是分支类
    input  [4 :0] ExcCode,      // 异常码（5位）
    input  [5 :0] HWInt,        // 6个外部硬件中断输入（来自 Bridge/Timer）
    
    input         EXLClr,       // 清除 SR.EXL（执行 eret 指令时产生）
    
    output        IntReq,       // 中断请求信号
    output reg [31:0] EPC           // EPC 寄存器输出值（送往 NPC 用于 eret 跳转）
);

    reg [31:0] PRId, SR, Cause;
    wire IntReq;      //判断 是否需要陷入内核
    initial begin
        PRId  <= 32'h2437_1277;
        SR    <= 32'h0000_0000;
        Cause <= 32'h0000_0000;
        EPC   <= 32'h0000_0000;
        DOut  <= 32'b0;
    end

    assign IntReq = (~`SR_EXL) && (ExcCode || (`SR_IE && |(`SR_IM & HWInt)));

    always @(posedge clk) begin
        if(reset) begin
            PRId  <= 32'h2437_1277;
            SR    <= 32'h0000_0000;
            Cause <= 32'h0000_0000;
            EPC   <= 32'h0000_0000;
        end
        else begin
            if(IntReq) begin
                `SR_EXL <= 1'b1;
                `Cause_BD <= BD;
                //有外部中断时，先处理外部，设为00000
                `Cause_ExcCode <= (~`SR_EXL) && `SR_IE && |(`SR_IM & HWInt)? 5'b00000 : ExcCode;
                EPC <= (BD)?(PC - 4) : PC; //跳转指令还需要向前一条，异常结束后再次执行分支指令
            end
            if(CPWr && ~IntReq) begin //!防止中断时对于寄存器的写入
                if(A2 == `CP0_SR) begin
                    SR <= DIn;
                end
                else if(A2 == `CP0_EPC) begin
                    EPC <= DIn;
                end
            end
            if(EXLClr) begin
                `SR_EXL <= 1'b0;
            end
            `Cause_IP <= HWInt;
        end
       
    end

    always @(*) begin
        case(A1)
            `CP0_PRId: DOut = PRId;
            `CP0_SR:   DOut = SR;
            `CP0_Cause:DOut = Cause;
            `CP0_EPC:  DOut = EPC;
            default:   DOut = 32'b0;
        endcase
    end
endmodule