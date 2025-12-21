`timescale 1ns / 1ps
 `include "constants.v"
 `timescale 1ns / 1ps
module mips(
    input clk,
    input reset,

    input  [31:0] i_inst_addr,
    output [31:0] i_inst_rdata,

    input  [31:0] m_data_addr,
    output [31:0] m_data_rdata,
    input  [31:0] m_data_wdata,
    input  [3 :0] m_data_byteen,
    input  [31:0] m_inst_addr,

    input         w_grf_we,
    input  [4:0]  w_grf_addr,
    input  [31:0] w_grf_wdata,
    input  [31:0] w_inst_addr
);
    function PC_error;
        input [31:0] pc;
        begin
            assign PC_error = (pc[1:0] != 2'b00) || (pc < 32'h0000_3000) || (pc >= 32'h0000_7000);
        end    
    endfunction
    // ------------------------------------------------------------------
    // 1) Declaration: stage-wise datapath signals
    // ------------------------------------------------------------------

    // F stage
    wire [31:0] f_pc;
    wire [31:0] f_instr_raw, f_instr;
    wire [31:0] f_npc;
    wire        f_pc_en;
    wire        fd_en;
    wire        de_clr;
    wire [4:0]  f_exccode;
    wire [4:0]  fd_exccode; // from FD reg to D stage

    // D stage
    wire [31:0] d_instr;
    wire [31:0] d_pc;
    wire [5:0]  d_opcode;
    wire [4:0]  d_rs;
    wire [4:0]  d_rt;
    wire [4:0]  d_rd;
    wire [4:0]  d_shamt;
    wire [5:0]  d_funct;
    wire [25:0] d_imm26;
    wire [15:0] d_imm16;
    wire [31:0] d_v1_raw;
    wire [31:0] d_v2_raw;
    wire [31:0] d_v1;
    wire [31:0] d_v2;
    wire [31:0] d_ext32;
    wire [2:0]  d_npc_sel;
    wire        d_extop;
    wire [2:0]  d_cmp_op;
    wire        d_bjump;
    wire [1:0]  d_reg_wr_sel;
    wire [1:0]  d_t_use_rs;
    wire [1:0]  d_t_use_rt;
    wire [4:0]  d_a3;
    wire        d_mdu_related;
    wire [4:0]  d_exccode_raw; 
    wire [4:0]  d_exccode;      
    wire        d_ri; //! 表示指令是否非法
    wire        d_BD; //! 表示是否是跳转类指令

    wire [4:0]  de_exccode;
    // E stage
    wire [31:0] e_instr;
    wire [31:0] e_pc;
    wire [31:0] e_v1;
    wire [31:0] e_v2;
    wire [31:0] e_e32;
    wire [4:0]  e_a3;
    wire [1:0]  e_tnew;
    wire [3:0]  e_alu_op;
    wire [1:0]  e_alu_bsrc;
    wire [1:0]  e_Reg_WrSrc;
    wire        e_rfwr;
    wire [31:0] e_alu_a;
    wire [31:0] e_alu_b;
    wire [31:0] e_ao;
    wire [31:0] fwd_e_v2;
    reg  [31:0] e_reg_wd; //!此阶段jal已产生值

    wire [2:0]  e_mdu_op;
    wire [31:0] e_hi;
    wire [31:0] e_lo;
    wire        e_mdu_start;
    wire        e_mdu_busy;
    wire [2:0]  e_ao_sel;
    wire [4:0]  e_exccode_raw;
    wire [4:0]  e_exccode;
    wire        e_BD;
     

    // M stage
    wire [31:0] m_instr;
    wire [31:0] m_pc;
    wire [31:0] m_ao;
    // raw AO from pipeline register; used to avoid multiple drivers
    wire [31:0] m_ao_raw;
    wire [31:0] m_v2;
    wire [4:0]  m_a3;
    wire [1:0]  m_tnew;
    wire [31:0] m_rd;
    wire [1:0]  m_Reg_WrSrc;
    wire        m_rfwr;
    wire        m_dmwr;
    wire [31:0] m_wd;     //! 指写入DM的值
    reg  [31:0] m_reg_wd; //!此阶段jal，计算类已产生值
    wire [2:0]  m_deOp;
    wire [2:0]  m_beOp;
    wire        m_cpz_wr;
    wire        m_cpz_sel;
    wire [4:0]  m_exccode;
    wire        m_BD;
 
    // W stage
    wire [31:0] w_instr;
    wire [31:0] w_pc;
    wire [31:0] w_ao;
    wire [31:0] w_rd;
    wire [4:0]  w_a3;
    wire        w_rfwr;
    wire [1:0]  w_Reg_WrSrc;
    wire [31:0] w_wd;
    reg [31:0] w_reg_wd;


    // Hazard / forwarding control
    wire        stall;
    wire [1:0]  fwd_d_rs_sel;
    wire [1:0]  fwd_d_rt_sel;
    wire [1:0]  fwd_e_a_sel;
    wire [1:0]  fwd_e_b_sel;
    wire [1:0]  fwd_m_wd_sel;

    assign f_pc_en = ~stall;
    assign fd_en  = ~stall;
    assign de_clr = stall;

    // ------------------------------------------------------------------
    // Controller op/funct extraction per stage
    // ------------------------------------------------------------------
    wire [5:0] f_opcode = f_instr[31:26];
    wire [5:0] f_funct  = f_instr[5:0];
    wire [5:0] e_opcode = e_instr[31:26];
    wire [5:0] e_funct  = e_instr[5:0];
    wire [5:0] m_opcode = m_instr[31:26];
    wire [5:0] m_funct  = m_instr[5:0];
    wire [5:0] w_opcode = w_instr[31:26];
    wire [5:0] w_funct  = w_instr[5:0];


    // ------------------------------------------------------------------
    // 2) Stage implementations & placeholder mux blocks
    // ------------------------------------------------------------------

    // -------------------- F stage --------------------

    F_PC u_f_pc (
        .clk     (clk),
        .reset   (reset),
        .F_NPC_in(f_npc),
        .F_PC_en (f_pc_en),
        .F_PC    (f_pc)
    );
    
    
    assign i_inst_addr = f_pc; //!注意是谁驱动谁（输入驱动输出）
    
    //! f stage exception
    assign f_instr_raw = i_inst_rdata;
    assign f_instr = PC_error(f_pc) ? 32'b0 : f_instr_raw;
    assign f_exccode = PC_error(f_pc) ? `EXCCODE_ADEL : 5'b0;

    // F_IM u_f_im (
    //     .A       (f_pc),
    //     .F_Instr (f_instr)
    // );

    // -------------------- FD reg --------------------
    FD_REG u_fd_reg (
        .clk      (clk),
        .reset    (reset),
        .FD_en    (fd_en),
        .F_instr  (f_instr),
        .F_PC     (f_pc),
        .F_ExcCode(f_exccode),
        .D_ExcCode(fd_exccode),
        .D_Instr  (d_instr),
        .D_PC     (d_pc)
    );

    // -------------------- D stage --------------------
    Splitter u_d_split (
        .Instr (d_instr),
        .opcode(d_opcode),
        .rs    (d_rs),
        .rt    (d_rt),
        .rd    (d_rd),
        .shamt (d_shamt),
        .funct (d_funct),
        .imm26 (d_imm26),
        .imm16 (d_imm16)
    );

    D_GRF u_dw_grf (
        .A1   (d_rs),
        .A2   (d_rt),
        .RD1  (d_v1_raw),
        .RD2  (d_v2_raw),
        .PC   (w_pc), //!写阶段在W阶段，故需要w_pc 
        .A3   (w_a3),
        .WD   (w_wd),
        .RFWr (w_rfwr),
        .clk  (clk),
        .reset(reset)
    );

    D_EXT u_d_ext (
        .D_Imm16(d_imm16),
        .D_EXTOp(d_extop),
        .D_EXT32(d_ext32)
    );

    D_CMP u_d_cmp (
        .D_A1   (d_v1),
        .D_A2   (d_v2),
        .D_CmpOp(d_cmp_op),
        .D_bjump(d_bjump)
    );

    DF_NPC u_df_npc (
        .F_PC   (f_pc),
        .D_PC   (d_pc),
        .D_imm16(d_imm16),
        .D_imm26(d_imm26),
        .D_ra   (d_v1), //!
        .nPC_Sel(d_npc_sel),
        .D_bjump(d_bjump),
        .NPC    (f_npc)
    );

    Controller ctrl_d (
        .opcode   (d_opcode),
        .funct    (d_funct),
        .rs       (d_rs),
        .Reg_WrSel(d_reg_wr_sel),
        .nPC_sel  (d_npc_sel),
        .ExtOp    (d_extop),
        .CmpOp    (d_cmp_op),
        .MDU_related(d_mdu_related),
        .T_use_RS (d_t_use_rs),
        .T_use_RT (d_t_use_rt),
        .RI       (d_ri)
    );
    // D stage v1, v2 forward muxes
    assign d_v1 = (fwd_d_rs_sel == `FROM_E) ? e_reg_wd: 
                  (fwd_d_rs_sel == `FROM_M) ? m_reg_wd: 
                  (fwd_d_rs_sel == `FROM_W) ? w_reg_wd:
                  d_v1_raw;

    assign d_v2 = (fwd_d_rt_sel == `FROM_E) ? e_reg_wd:
                  (fwd_d_rt_sel == `FROM_M) ? m_reg_wd: 
                  (fwd_d_rt_sel == `FROM_W) ? w_reg_wd:
                  d_v2_raw;

    // D stage A3_Sel mux
    reg [4:0] d_a3_r;  
    always @(*) begin
        case (d_reg_wr_sel)
            `RD_RD: d_a3_r = d_rd;
            `RD_RT: d_a3_r = d_rt;
            `RD_RA: d_a3_r = 5'd31;
            default: d_a3_r = 5'd0;
        endcase
    end
    assign d_a3 = d_a3_r;

    //! D stage exception 
    assign d_exccode_raw = (d_ri) ? `EXCCODE_RI : (d_opcode == `SYSCALL) ? `EXCCODE_SYS : 5'b00000;
    // Merge exceptions arriving from F 
    assign d_exccode = (fd_exccode != 5'b0) ? fd_exccode : d_exccode_raw;

    // BD signal
    assign d_BD = (d_npc_sel == `NPC_BRANCH || d_npc_sel == `NPC_JUMP);
    

    // -------------------- DE reg --------------------
    DE_REG u_de_reg (
        .clk    (clk),
        .reset  (reset),
        .DE_clr (de_clr),
        .D_ExcCode(d_exccode),
        .D_V1   (d_v1),
        .D_V2   (d_v2),
        .D_E32  (d_ext32),
        .D_PC   (d_pc),
        .D_A3   (d_a3),
        .D_Instr(d_instr),
        .D_BD   (d_BD),
        .E_V1   (e_v1),
        .E_V2   (e_v2),
        .E_E32  (e_e32),
        .E_PC   (e_pc),
        .E_A3   (e_a3),
        .E_Instr(e_instr),
        .E_ExcCode(de_exccode),
        .E_Tnew (e_tnew),
        .E_BD   (e_BD)
    );

    // -------------------- E stage --------------------
    Controller ctrl_e (
        .opcode  (e_opcode),
        .funct   (e_funct),
        .rs      (e_instr[25:21]),
        .ALU_BSrc(e_alu_bsrc),
        .Reg_WrSrc(e_Reg_WrSrc),
        .RFWr    (e_rfwr),
        .ALUOp   (e_alu_op),
        .AO_sel  (e_ao_sel),
        .MDUOp   (e_mdu_op),
        .MDU_start(e_mdu_start) 
    );

    wire [31:0] e_ao_raw; // 表示alu输出的值
    E_ALU u_e_alu (
        .A        (e_alu_a),
        .B        (e_alu_b),
        .Opcode   (e_opcode),
        .E_ALUOp  (e_alu_op),
        .E_AO     (e_ao_raw),
        .ExcCode_raw(e_exccode_raw)
    );
    
    MultDivUnit u_e_mdu (
        .A        (e_alu_a),
        .B        (e_alu_b),
        .MDUOp    (e_mdu_op),
        .E_HI     (e_hi),
        .E_LO     (e_lo),
        .clk      (clk),
        .reset    (reset),
        .start    (e_mdu_start),
        .busy     (e_mdu_busy)
    );
    

    // E stage alu_a alu_b forward muxes
    assign e_alu_a = (fwd_e_a_sel == `FROM_M) ? m_reg_wd : 
                     (fwd_e_a_sel == `FROM_W) ? w_reg_wd : 
                     e_v1;

    assign fwd_e_v2 = (fwd_e_b_sel == `FROM_M) ? m_reg_wd  : 
                     (fwd_e_b_sel == `FROM_W) ? w_reg_wd : 
                     e_v2;
    
    // E stage alu_b mux
    reg [31:0] e_alu_b_r;
    always @(*) begin
        case(e_alu_bsrc)
            `ALU_BSRC_V2:  e_alu_b_r = fwd_e_v2;
            `ALU_BSRC_EXT: e_alu_b_r = e_e32;
            default:       e_alu_b_r = 32'd0;
        endcase
    end
    assign e_alu_b = e_alu_b_r;

    // E stage reg_wd mux
    always @(*) begin
        case(e_Reg_WrSrc)
            `RS_PC8: e_reg_wd = e_pc + 32'd8;
            default: e_reg_wd = 32'd0; 
        endcase
    end
    
    //! E stage ao sel mux
    assign e_ao = (e_ao_sel == `FROM_ALU) ? e_ao_raw :
                  (e_ao_sel == `FROM_HI)  ? e_hi :
                  (e_ao_sel == `FROM_LO)  ? e_lo :
                  32'd0;
    // Merge exceptions arriving from D
    assign e_exccode = (de_exccode != 5'b00000)? de_exccode : e_exccode_raw;
    
    //-------------------- EM REG --------------------
    EM_REG u_em_reg (
        .clk    (clk),
        .reset  (reset),
        .E_Instr   (e_instr),
        .E_AO      (e_ao),
        .E_V2      (fwd_e_v2),
        .E_PC      (e_pc),
        .E_ExcCode (e_exccode),
        .E_A3      (e_a3),
        .E_RFWr    (e_rfwr),
        .E_Tnew    (e_tnew),
        .E_BD      (e_BD),
        .M_Instr   (m_instr),
        .M_AO      (m_ao_raw),
        .M_V2      (m_v2),
        .M_PC      (m_pc),
        .M_A3      (m_a3),
        .M_ExcCode (m_exccode_raw),
        .M_RFWr    (m_rfwr),
        .M_Tnew    (m_tnew),
        .M_BD      (m_BD)
    );

    // -------------------- M stage --------------------
    Controller ctrl_m (
        .opcode(m_opcode),
        .funct (m_funct),
        .rs    (m_instr[25:21]),
        .RFWr  (m_rfwr),
        .Reg_WrSrc(m_Reg_WrSrc),
        .DMWr  (m_dmwr),
        .BEOp  (m_beOp),
        .DEOp  (m_deOp),
        .CPWr  (m_cpz_wr),
        .CPZSel(m_cpz_sel)
    );

    // M stage data memory
    M_BE u_m_byteen (
        .BEOp(m_beOp),
        .Addr(m_ao),
        .WD(m_wd),
        .DMWr(m_dmwr),
        .M_byteen(m_data_byteen),
        .m_data_wdata(m_data_wdata)
    );
    
    assign m_data_addr = m_ao;
    assign m_inst_addr = m_pc;
    
    M_DE u_m_dataExt(
        .DEOp(m_deOp),
        .A(m_ao[1:0]),
        .M_RD(m_data_rdata),
        .M_RDEXT(m_rd)
    );

    // M stage wd forward mux
    assign m_wd = (fwd_m_wd_sel == `FROM_W) ? w_reg_wd : 
                  m_v2;

    // M stage reg_wd mux
    always @(*) begin
        case(m_Reg_WrSrc)
            `RS_ALU:  m_reg_wd = m_ao;
            `RS_PC8:  m_reg_wd = m_pc + 32'd8;
            default:  m_reg_wd = 32'd0;
        endcase
    end
    
    //! M stage CP0 read mux
    wire [31:0] m_cp0_out;
    assign m_ao = (m_cpz_sel) ? m_cp0_out : m_ao_raw; 
    

    //-------------------- MW REG --------------------
    MW_REG u_mw_reg (
        .clk    (clk),
        .reset  (reset),
        .M_Instr(m_instr),
        .M_AO   (m_ao),
        .M_RD   (m_rd),
        .M_PC   (m_pc),
        .M_A3   (m_a3),
        .W_Instr(w_instr),
        .W_AO   (w_ao),
        .W_RD   (w_rd),
        .W_PC   (w_pc),
        .W_A3   (w_a3)
    );

    // -------------------- W stage --------------------
    Controller ctrl_w (
        .opcode   (w_opcode),
        .funct    (w_funct),
        .Reg_WrSrc(w_Reg_WrSrc),
        .RFWr     (w_rfwr)
    );

    // test print
    assign w_grf_we = w_rfwr;
    assign w_grf_addr = w_a3;
    assign w_grf_wdata = w_wd;
    assign w_inst_addr = w_pc;

    // W stage wd sel mux
    always @(*) begin
        case(w_Reg_WrSrc)
            `RS_MEM: w_reg_wd = w_rd;
            `RS_PC8: w_reg_wd = w_pc + 32'd8;
            `RS_ALU: w_reg_wd = w_ao;
            default: w_reg_wd = 32'd0;
        endcase
    end
    assign w_wd = w_reg_wd;
    
    // -------------------- Hazard controller --------------------
    HazardCtrl u_hazard_ctrl (
        .T_use_RS   (d_t_use_rs),
        .T_use_RT   (d_t_use_rt),
        .E_MDU_busy (e_mdu_busy),
        .E_MDU_start(e_mdu_start),
        .E_Tnew     (e_tnew),
        .M_Tnew     (m_tnew),
        .D_MDU_related(d_mdu_related),
        .D_A1       (d_rs),
        .D_A2       (d_rt),
        .E_A1       (e_instr[25:21]),
        .E_A2       (e_instr[20:16]),
        .E_A3       (e_a3),
        .M_A3       (m_a3),
        .M_A2       (m_instr[20:16]),
        .W_A3       (w_a3),
        .E_RFWr     (e_rfwr),
        .M_RFWr     (m_rfwr),
        .W_RFWr     (w_rfwr),
        .Stall      (stall),
        .Fwd_D_RS_Sel(fwd_d_rs_sel),
        .Fwd_D_RT_Sel(fwd_d_rt_sel),
        .Fwd_E_A_Sel(fwd_e_a_sel),
        .Fwd_E_B_Sel(fwd_e_b_sel),
        .Fwd_M_WD_Sel(fwd_m_wd_sel)
    );

endmodule