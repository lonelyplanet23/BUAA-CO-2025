`timescale 1ns / 1ps
`include "constants.v"

module mips(
    input clk,
    input reset
);

    // ------------------------------------------------------------------
    // 1) Declaration: stage-wise datapath signals
    // ------------------------------------------------------------------

    // F stage
    wire [31:0] f_pc;
    wire [31:0] f_instr;
    wire [31:0] f_npc;
    wire        f_pc_en;
    wire        fd_en;
    wire        de_clr;

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

    // E stage
    wire [31:0] e_instr;
    wire [31:0] e_pc;
    wire [31:0] e_v1;
    wire [31:0] e_v2;
    wire [31:0] e_e32;
    wire [4:0]  e_a3;
    wire [1:0]  e_tnew;
    wire [2:0]  e_alu_op;
    wire [1:0]  e_alu_bsrc;
    wire        e_rfwr;
    wire [31:0] e_alu_a;
    wire [31:0] e_alu_b;
    wire [31:0] e_ao;

    // M stage
    wire [31:0] m_instr;
    wire [31:0] m_pc;
    wire [31:0] m_ao;
    wire [31:0] m_v2;
    wire [4:0]  m_a3;
    wire [1:0]  m_tnew;
    wire [31:0] m_rd;
    wire        m_rfwr;
    wire        m_dmwr;
    wire [31:0] m_wd;

    // W stage
    wire [31:0] w_instr;
    wire [31:0] w_pc;
    wire [31:0] w_ao;
    wire [31:0] w_rd;
    wire [4:0]  w_a3;
    wire        w_rfwr;
    wire [1:0]  w_Reg_WrSrc;
    wire [31:0] w_wd;

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
    // Forwarding mux placeholders (assign-only skeleton for practice)
    // ------------------------------------------------------------------


    assign e_alu_a = (fwd_e_a_sel == 2'b01) ? e_v1 : // TODO: forward from M stage
                     (fwd_e_a_sel == 2'b10) ? e_v1 : // TODO: forward from W stage
                     e_v1;

    assign e_alu_b = (e_alu_bsrc == `ALU_BSRC_EXT) ? e_e32 :
                     (fwd_e_b_sel == 2'b01) ? e_v2 : // TODO: forward from M stage
                     (fwd_e_b_sel == 2'b10) ? e_v2 : // TODO: forward from W stage
                     e_v2;

    assign m_wd = (fwd_m_wd_sel == 2'b01) ? m_v2 : // TODO: forward from E stage result
                  (fwd_m_wd_sel == 2'b10) ? m_v2 : // TODO: forward from W stage data
                  m_v2;

    wire [31:0] w_pc_plus8 = w_pc + 32'd8;
    assign w_wd = (w_Reg_WrSrc == `RS_MEM) ? w_rd :
                  (w_Reg_WrSrc == `RS_PC4) ? w_pc_plus8 :
                  w_ao;

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

    F_IM u_f_im (
        .A       (f_pc),
        .F_Instr (f_instr)
    );

    // -------------------- FD reg --------------------
    FD_REG u_fd_reg (
        .clk    (clk),
        .reset  (reset),
        .FD_en  (fd_en),
        .F_instr(f_instr),
        .F_PC   (f_pc),
        .D_Instr(d_instr),
        .D_PC   (d_pc)
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

    D_GRF u_d_grf (
        .A1   (d_rs),
        .A2   (d_rt),
        .RD1  (d_v1_raw),
        .RD2  (d_v2_raw),
        .PC   (w_pc),
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
        .D_ra   (d_v1),
        .nPC_Sel(d_npc_sel),
        .D_bjump(d_bjump),
        .NPC    (f_npc)
    );

    Controller ctrl_d (
        .opcode   (d_opcode),
        .funct    (d_funct),
        .Reg_WrSel(d_reg_wr_sel),
        .nPC_sel  (d_npc_sel),
        .ExtOp    (d_extop),
        .CmpOp    (d_cmp_op),
        .T_use_RS (d_t_use_rs),
        .T_use_RT (d_t_use_rt)
    );

    assign d_v1 = (fwd_d_rs_sel == 2'b01) ? d_v1_raw : // TODO: forward from E stage
                  (fwd_d_rs_sel == 2'b10) ? d_v1_raw : // TODO: forward from M stage
                  d_v1_raw;

    assign d_v2 = (fwd_d_rt_sel == 2'b01) ? d_v2_raw : // TODO: forward from E stage
                  (fwd_d_rt_sel == 2'b10) ? d_v2_raw : // TODO: forward from M stage
                  d_v2_raw;

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

    DE_REG u_de_reg (
        .clk    (clk),
        .reset  (reset),
        .DE_clr (de_clr),
        .D_V1   (d_v1),
        .D_V2   (d_v2),
        .D_E32  (d_ext32),
        .D_PC   (d_pc),
        .D_A3   (d_a3),
        .D_Instr(d_instr),
        .E_V1   (e_v1),
        .E_V2   (e_v2),
        .E_E32  (e_e32),
        .E_PC   (e_pc),
        .E_A3   (e_a3),
        .E_Instr(e_instr),
        .E_Tnew (e_tnew)
    );

    // -------------------- E stage --------------------
    Controller ctrl_e (
        .opcode  (e_opcode),
        .funct   (e_funct),
        .ALU_BSrc(e_alu_bsrc),
        .RFWr    (e_rfwr),
        .ALUOp   (e_alu_op)
    );

    E_ALU u_e_alu (
        .A      (e_alu_a),
        .B      (e_alu_b),
        .E_ALUOp(e_alu_op),
        .E_AO   (e_ao)
    );

    EM_REG u_em_reg (
        .clk    (clk),
        .reset  (reset),
        .E_Instr(e_instr),
        .E_AO   (e_ao),
        .E_V2   (e_v2),
        .E_PC   (e_pc),
        .E_A3   (e_a3),
        .E_RFWr (e_rfwr),
        .E_DMWr (1'b0),
        .E_Tnew (e_tnew),
        .M_Instr(m_instr),
        .M_AO   (m_ao),
        .M_V2   (m_v2),
        .M_PC   (m_pc),
        .M_A3   (m_a3),
        .M_Tnew (m_tnew)
    );

    // -------------------- M stage --------------------
    Controller ctrl_m (
        .opcode(m_opcode),
        .funct (m_funct),
        .RFWr  (m_rfwr),
        .DMWr  (m_dmwr)
    );

    M_DM u_m_dm (
        .A    (m_ao),
        .M_WD (m_wd),
        .PC   (m_pc),
        .M_RD (m_rd),
        .DMWr (m_dmwr),
        .clk  (clk),
        .reset(reset)
    );

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

    // -------------------- Hazard controller --------------------
    HazardCtrl u_hazard_ctrl (
        .T_use_RS   (d_t_use_rs),
        .T_use_RT   (d_t_use_rt),
        .E_Tnew     (e_tnew),
        .M_Tnew     (m_tnew),
        .D_A1       (d_rs),
        .D_A2       (d_rt),
        .E_A3       (e_a3),
        .M_A3       (m_a3),
        .E_RFWr     (e_rfwr),
        .M_RFWr     (m_rfwr),
        .Stall      (stall),
        .Fwd_D_RS_Sel(fwd_d_rs_sel),
        .Fwd_D_RT_Sel(fwd_d_rt_sel),
        .Fwd_E_A_Sel(fwd_e_a_sel),
        .Fwd_E_B_Sel(fwd_e_b_sel),
        .Fwd_M_WD_Sel(fwd_m_wd_sel)
    );

endmodule