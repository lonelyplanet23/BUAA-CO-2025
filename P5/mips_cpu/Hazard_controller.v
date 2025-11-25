`timescale 1ns / 1ps
`include "constants.v"


module HazardCtrl(
    input [1:0] T_use_RS,
    input [1:0] T_use_RT,
    input [1:0] E_Tnew,
    input [1:0] M_Tnew,
    input [4:0] D_A1,
    input [4:0] D_A2,
    input [4:0] E_A1, //!
    input [4:0] E_A2, //!
    input [4:0] E_A3,
    input [4:0] M_A3,//!
    input [4:0] W_A3,//!
    input       E_RFWr,
    input       M_RFWr,
    input       W_RFWr,
    output      Stall,
    output reg [1:0] Fwd_D_RS_Sel,
    output reg [1:0] Fwd_D_RT_Sel,
    output reg [1:0] Fwd_E_A_Sel,
    output reg [1:0] Fwd_E_B_Sel,
    output reg [1:0] Fwd_M_WD_Sel
);

    // ------------------------------------------------------------------
    // Stall detection wires
    // ------------------------------------------------------------------
    wire stall_rs0_e1;
    wire stall_rs0_e2;
    wire stall_rs0_m1;
    wire stall_rs1_e2;
    wire stall_rt0_e1;
    wire stall_rt0_e2;
    wire stall_rt0_m1;
    wire stall_rt1_e2;

    // TODO: implement load-use hazard checks based on T_use/T_new matrix
    assign stall_rs0_e1 = (T_use_RS == 1'b0) & (E_Tnew == 2'b01) & (D_A1 == E_A3) & (E_RFWr); 
    assign stall_rs0_e2 = (T_use_RS == 1'b0) & (E_Tnew == 2'b10) & (D_A1 == E_A3) & (E_RFWr);
    assign stall_rs0_m1 = (T_use_RS == 1'b0) & (M_Tnew == 2'b01) & (D_A1 == M_A3) & (M_RFWr);
    assign stall_rs1_e2 = (T_use_RS == 1'b1) & (E_Tnew == 2'b10) & (D_A1 == E_A3) & (E_RFWr);
    
    assign stall_rt0_e1 = (T_use_RT == 1'b0) & (E_Tnew == 2'b01) & (D_A2 == E_A3) & (E_RFWr);
    assign stall_rt0_e2 = (T_use_RT == 1'b0) & (E_Tnew == 2'b10) & (D_A2 == E_A3) & (E_RFWr);
    assign stall_rt0_m1 = (T_use_RT == 1'b0) & (M_Tnew == 2'b01) & (D_A2 == M_A3) & (M_RFWr);
    assign stall_rt1_e2 = (T_use_RT == 1'b1) & (E_Tnew == 2'b10) & (D_A2 == E_A3) & (E_RFWr);

    assign Stall = stall_rs0_e1 |
                   stall_rs0_e2 |
                   stall_rs0_m1 |
                   stall_rs1_e2 |
                   stall_rt0_e1 |
                   stall_rt0_e2 |
                   stall_rt0_m1 |
                   stall_rt1_e2;

    // ------------------------------------------------------------------
    // Forwarding selection wires
    // ------------------------------------------------------------------
    always @(*) begin
        // TODO: derive forwarding selections from production-consumption analysis
        Fwd_D_RS_Sel = (D_A1 == E_A3) & (E_Tnew == 2'b00) & E_RFWr ? `FROM_E :
                       (D_A1 == M_A3) & (M_Tnew == 2'b00) & M_RFWr ? `FROM_M :
                       (E_A1 == W_A3)                     & W_RFWr ? `FROM_W :
                                                                     0; 
        Fwd_D_RT_Sel = (D_A2 == E_A3) & (E_Tnew == 2'b00) & E_RFWr ? `FROM_E :
                       (D_A2 == M_A3) & (M_Tnew == 2'b00) & M_RFWr ? `FROM_M :
                       (E_A1 == W_A3)                     & W_RFWr ? `FROM_W :
                                                                     0; 
        Fwd_E_A_Sel  = (E_A1 == M_A3) & (M_Tnew == 2'b00) & M_RFWr ? `FROM_M :
                       (E_A1 == W_A3)                     & W_RFWr ? `FROM_W :
                                                                     0;
        Fwd_E_B_Sel  = (E_A2 == M_A3) & (M_Tnew == 2'b00) & M_RFWr ? `FROM_M :
                       (E_A2 == W_A3)                     & W_RFWr ? `FROM_W :
                                                                     0;
                            
        Fwd_M_WD_Sel = (M_A3 == W_A3)                     & W_RFWr ? `FROM_W :
                                                                     0;
    end

endmodule