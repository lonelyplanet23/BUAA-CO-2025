`timescale 1ns / 1ps
`include "constants.v"


module HazardCtrl(
    input [1:0] T_use_RS,
    input [1:0] T_use_RT,
    input       E_MDU_busy,
    input       E_MDU_start,
    input [1:0] E_Tnew,
    input [1:0] M_Tnew,
    input [4:0] D_A1,
    input [4:0] D_A2,
    input       D_MDU_related,
    input       D_eret, //!
    input [4:0] E_A1, 
    input [4:0] E_A2, 
    input [4:0] E_A3,
    input       E_MTC0, //!
    input [4:0] M_A2, 
    input [4:0] M_A3,
    input       M_MTC0, //!
    input [4:0] W_A3,
    input       E_RFWr,
    input       M_RFWr,
    input       W_RFWr,
    output      Stall,
    output [1:0] Fwd_D_RS_Sel,
    output [1:0] Fwd_D_RT_Sel,
    output [1:0] Fwd_E_A_Sel,
    output [1:0] Fwd_E_B_Sel,
    output [1:0] Fwd_M_WD_Sel
);

    // ------------------------------------------------------------------
    // Stall detection wires (优化：使用数值比较 T_use <= Tnew)
    // 如果使用时间小于等于写回可用时间则需要 stall
    // ------------------------------------------------------------------
    wire stall_rs_e;
    wire stall_rs_m;
    wire stall_rt_e;
    wire stall_rt_m;
    wire stall_mdu, stall_eret_e, stall_eret_m;

    assign stall_rs_e = (D_A1 != 5'b0) & (D_A1 == E_A3) & (E_RFWr) & (T_use_RS <= E_Tnew);
    assign stall_rs_m = (D_A1 != 5'b0) & (D_A1 == M_A3) & (M_RFWr) & (T_use_RS <= M_Tnew);
    assign stall_rt_e = (D_A2 != 5'b0) & (D_A2 == E_A3) & (E_RFWr) & (T_use_RT <= E_Tnew);
    assign stall_rt_m = (D_A2 != 5'b0) & (D_A2 == M_A3) & (M_RFWr) & (T_use_RT <= M_Tnew);
    assign stall_mdu  = (E_MDU_start | E_MDU_busy) & D_MDU_related;
    assign stall_eret_e = D_eret === 1'b1 & E_MTC0 === 1'b1 & E_A3 == 5'b01110;
    assign stall_eret_m = D_eret === 1'b1 & M_MTC0 === 1'b1 & M_A3 == 5'b01110;

    assign Stall = stall_rs_e |
                   stall_rs_m |
                   stall_rt_e |
                   stall_rt_m |
                   stall_mdu  |
                   stall_eret_m |
                   stall_eret_e;
                   

    // ------------------------------------------------------------------
    // Forwarding selection wires
    // ------------------------------------------------------------------

    assign Fwd_D_RS_Sel = (D_A1 == 5'b0) ? 2'b0 :
                        ((D_A1 == E_A3) && (E_Tnew == 2'b00) && E_RFWr) ? `FROM_E :
                        ((D_A1 == M_A3) && (M_Tnew == 2'b00) && M_RFWr) ? `FROM_M :
                        ((D_A1 == W_A3)                     && W_RFWr) ? `FROM_W :
                                                                        2'b0; //!debug 1'b0这样的话第一位是高阻值X 
    assign Fwd_D_RT_Sel = (D_A2 == 5'b0) ? 2'b0 :
                        ((D_A2 == E_A3) && (E_Tnew == 2'b00) && E_RFWr) ? `FROM_E :
                        ((D_A2 == M_A3) && (M_Tnew == 2'b00) && M_RFWr) ? `FROM_M :
                        ((D_A2 == W_A3)                     && W_RFWr) ? `FROM_W :
                                                                        2'b0; 
    assign Fwd_E_A_Sel  = (E_A1 == 5'b0) ? 2'b0 :
                        ((E_A1 == M_A3) && (M_Tnew == 2'b00) && M_RFWr) ? `FROM_M :
                        ((E_A1 == W_A3)                     && W_RFWr) ? `FROM_W :
                                                                        2'b0;
    assign Fwd_E_B_Sel  = (E_A2 == 5'b0) ? 2'b0 :
                        ((E_A2 == M_A3) && (M_Tnew == 2'b00) && M_RFWr) ? `FROM_M :
                        ((E_A2 == W_A3)                     && W_RFWr) ? `FROM_W :
                                                                        2'b0;
                                
    assign Fwd_M_WD_Sel = (M_A2 == 5'b0) ? 2'b0 :
                        ((M_A2 == W_A3)                     && W_RFWr) ? `FROM_W :
                                                                        2'b0;
endmodule