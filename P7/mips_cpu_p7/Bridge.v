//系统桥，负责与CPU, MIPS(顶层) timer1、timer0交互
module Bridge(
    // 与CPU接口
    input  [31:0] CPU_i_inst_addr,
    output [31:0] CPU_i_inst_rdata,

    output  [5:0]  CPU_HWInt, 
    
    input  [31:0] CPU_m_data_addr,
    output [31:0] CPU_m_data_rdata,
    input  [31:0] CPU_m_data_wdata,
    input  [3 :0] CPU_m_data_byteen,

    input [31:0] CPU_macroscopic_pc,


    //与Mips 接口
    input         MIPS_interrupt,              // 外部中断信号
    output [31:0] MIPS_macroscopic_pc,         // 宏观 PC
    output [31:0] MIPS_i_inst_addr,            // IM 读取地址（取指 PC）
    
    input  [31:0] MIPS_i_inst_rdata,           // IM 读取数据
    output [31:0] MIPS_m_data_addr,            // DM 读写地址
    input  [31:0] MIPS_m_data_rdata,           // DM 读取数据
    output [31:0] MIPS_m_data_wdata,           // DM 待写入数据
    
    output [3 :0] MIPS_m_data_byteen,          // DM 字节使能信号
    output [31:0] MIPS_m_int_addr,             // 中断发生器待写入地址
    output [3 :0] MIPS_m_int_byteen,           // 中断发生器字节使能信号

    //与Timer1接口
    output [31:2] Timer1_Addr,
    output Timer1_WE,
    output [31:0] Timer1_Din,
    input [31:0] Timer1_Dout,
    input Timer1_IRQ,

    //与Timer0接口
    output [31:2] Timer0_Addr,
    output Timer0_WE,
    output [31:0] Timer0_Din,
    input [31:0] Timer0_Dout,
    input Timer0_IRQ
);

wire is_timer1, is_timer0, is_int, is_data;
assign is_timer1 = (CPU_m_data_addr >= 32'h0000_7f10) && (CPU_m_data_addr < 32'h0000_7f1c);
assign is_timer0 = (CPU_m_data_addr >= 32'h0000_7f00) && (CPU_m_data_addr < 32'h0000_7f0c);
assign is_int = (CPU_m_data_addr >= 32'h0000_7f20) && (CPU_m_data_addr < 32'h0000_7f24);
assign is_data = (CPU_m_data_addr >= 32'h0000_0000) && (CPU_m_data_addr < 32'h0000_3000);

//构造模拟的外部中断信号
assign CPU_HWInt = {3'b000, MIPS_interrupt,Timer1_IRQ, Timer0_IRQ};

//CPU DM_rdata
assign CPU_m_data_rdata = is_data ? MIPS_m_data_rdata :
                          is_timer1 ? Timer1_Dout :
                          is_timer0 ? Timer0_Dout :
                         32'b0 ;

//MIPS接口信号传递
assign MIPS_macroscopic_pc = CPU_macroscopic_pc;
assign MIPS_i_inst_addr = CPU_i_inst_addr;
assign CPU_i_inst_rdata = MIPS_i_inst_rdata;
assign MIPS_m_data_addr = CPU_m_data_addr;
assign MIPS_m_data_wdata = CPU_m_data_wdata;


assign MIPS_m_data_byteen = (is_data)? CPU_m_data_byteen : 4'b0000;

assign MIPS_m_int_addr =  CPU_m_data_addr;
assign MIPS_m_int_byteen = (is_data || is_timer0 || is_timer1)? 4'b0000 : (is_int) ? CPU_m_data_byteen : 4'b0000;


//Timer1接口信号传递
assign Timer1_Addr = CPU_m_data_addr[31:2];
assign Timer1_WE = (is_data)? 1'b0 : (is_timer0)? 1'b0 : (is_timer1) ? (&CPU_m_data_byteen) : 1'b0; 
assign Timer1_Din = CPU_m_data_wdata;   
//Timer0接口信号传递
assign Timer0_Addr = CPU_m_data_addr[31:2]; 
assign Timer0_WE = (is_data)? 1'b0 : (is_timer1)? 1'b0 : (is_timer0) ? (&CPU_m_data_byteen) : 1'b0;
assign Timer0_Din = CPU_m_data_wdata;



    
endmodule