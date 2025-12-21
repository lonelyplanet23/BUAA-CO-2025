module mips(
    input clk,                    // 时钟信号
    input reset,                  // 同步复位信号
    input interrupt,              // 外部中断信号
    output [31:0] macroscopic_pc, // 宏观 PC

    output [31:0] i_inst_addr,    // IM 读取地址（取指 PC）
    input  [31:0] i_inst_rdata,   // IM 读取数据

    output [31:0] m_data_addr,    // DM 读写地址
    input  [31:0] m_data_rdata,   // DM 读取数据
    output [31:0] m_data_wdata,   // DM 待写入数据
    output [3 :0] m_data_byteen,  // DM 字节使能信号

    output [31:0] m_int_addr,     // 中断发生器待写入地址
    output [3 :0] m_int_byteen,   // 中断发生器字节使能信号

    output [31:0] m_inst_addr,    // M 级 PC

    output w_grf_we,              // GRF 写使能信号
    output [4 :0] w_grf_addr,     // GRF 待写入寄存器编号
    output [31:0] w_grf_wdata,    // GRF 待写入数据

    output [31:0] w_inst_addr     // W 级 PC
);

    wire [31:0] cpu_i_inst_addr;
    wire [31:0] cpu_i_inst_rdata;
    wire [5:0] cpu_hwint;
    wire [31:0] cpu_m_data_addr;
    wire [31:0] cpu_m_data_rdata;
    wire [31:0] cpu_m_data_wdata;
    wire [3:0] cpu_m_data_byteen;
    wire [31:0] cpu_macroscopic_pc;

    wire [31:2] timer1_addr;
    wire timer1_we;
    wire [31:0] timer1_din;
    wire [31:0] timer1_dout;
    wire timer1_irq;

    wire [31:2] timer0_addr;
    wire timer0_we;
    wire [31:0] timer0_din;
    wire [31:0] timer0_dout;
    wire timer0_irq;

    // CPU 模块例化
    CPU cpu_inst (
        .clk(clk),
        .reset(reset),

        .i_inst_addr(cpu_i_inst_addr),
        .i_inst_rdata(cpu_i_inst_rdata),

        .HWInt(cpu_hwint),

        .m_data_addr(cpu_m_data_addr),
        .m_data_rdata(cpu_m_data_rdata),
        .m_data_wdata(cpu_m_data_wdata),
        .m_data_byteen(cpu_m_data_byteen),
        .m_inst_addr(m_inst_addr),

        .w_grf_we(w_grf_we),
        .w_grf_addr(w_grf_addr),
        .w_grf_wdata(w_grf_wdata),
        .w_inst_addr(w_inst_addr),
        .macroscopic_pc(cpu_macroscopic_pc)
    );

    // Bridge 模块例化
    Bridge bridge_inst (

        .CPU_i_inst_addr(cpu_i_inst_addr),
        .CPU_i_inst_rdata(cpu_i_inst_rdata),
        .CPU_HWInt(cpu_hwint),
        .CPU_m_data_addr(cpu_m_data_addr),
        .CPU_m_data_rdata(cpu_m_data_rdata),
        .CPU_m_data_wdata(cpu_m_data_wdata),
        .CPU_m_data_byteen(cpu_m_data_byteen),
        .CPU_macroscopic_pc(cpu_macroscopic_pc),

        .MIPS_interrupt(interrupt),
        .MIPS_macroscopic_pc(macroscopic_pc),
        .MIPS_i_inst_addr(i_inst_addr),
        .MIPS_i_inst_rdata(i_inst_rdata),
        .MIPS_m_data_addr(m_data_addr),
        .MIPS_m_data_rdata(m_data_rdata),
        .MIPS_m_data_wdata(m_data_wdata),
        .MIPS_m_data_byteen(m_data_byteen),
        .MIPS_m_int_addr(m_int_addr),
        .MIPS_m_int_byteen(m_int_byteen),

        .Timer1_Addr(timer1_addr),
        .Timer1_WE(timer1_we),
        .Timer1_Din(timer1_din),
        .Timer1_Dout(timer1_dout),
        .Timer1_IRQ(timer1_irq),

        .Timer0_Addr(timer0_addr),
        .Timer0_WE(timer0_we),
        .Timer0_Din(timer0_din),
        .Timer0_Dout(timer0_dout),
        .Timer0_IRQ(timer0_irq)
    );

    // Timer0 模块例化
    TC timer0_inst (
        .clk(clk),
        .reset(reset),

        .Addr(timer0_addr),
        .WE(timer0_we),
        .Din(timer0_din),
        .Dout(timer0_dout),
        .IRQ(timer0_irq)
    );

    // Timer1 模块例化
    TC timer1_inst (
        .clk(clk),
        .reset(reset),
        
        .Addr(timer1_addr),
        .WE(timer1_we),
        .Din(timer1_din),
        .Dout(timer1_dout),
        .IRQ(timer1_irq)
    );

endmodule