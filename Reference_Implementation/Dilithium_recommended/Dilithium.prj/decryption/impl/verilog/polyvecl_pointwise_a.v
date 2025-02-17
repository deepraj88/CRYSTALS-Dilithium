// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module polyvecl_pointwise_a (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        w_coeffs_address0,
        w_coeffs_ce0,
        w_coeffs_we0,
        w_coeffs_d0,
        w_coeffs_q0,
        w_coeffs_offset,
        u_vec_coeffs_address0,
        u_vec_coeffs_ce0,
        u_vec_coeffs_q0,
        v_vec_coeffs_address0,
        v_vec_coeffs_ce0,
        v_vec_coeffs_q0
);

parameter    ap_ST_fsm_state1 = 19'd1;
parameter    ap_ST_fsm_state2 = 19'd2;
parameter    ap_ST_fsm_state3 = 19'd4;
parameter    ap_ST_fsm_state4 = 19'd8;
parameter    ap_ST_fsm_state5 = 19'd16;
parameter    ap_ST_fsm_state6 = 19'd32;
parameter    ap_ST_fsm_state7 = 19'd64;
parameter    ap_ST_fsm_state8 = 19'd128;
parameter    ap_ST_fsm_state9 = 19'd256;
parameter    ap_ST_fsm_state10 = 19'd512;
parameter    ap_ST_fsm_state11 = 19'd1024;
parameter    ap_ST_fsm_state12 = 19'd2048;
parameter    ap_ST_fsm_state13 = 19'd4096;
parameter    ap_ST_fsm_state14 = 19'd8192;
parameter    ap_ST_fsm_state15 = 19'd16384;
parameter    ap_ST_fsm_state16 = 19'd32768;
parameter    ap_ST_fsm_state17 = 19'd65536;
parameter    ap_ST_fsm_state18 = 19'd131072;
parameter    ap_ST_fsm_state19 = 19'd262144;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [10:0] w_coeffs_address0;
output   w_coeffs_ce0;
output   w_coeffs_we0;
output  [31:0] w_coeffs_d0;
input  [31:0] w_coeffs_q0;
input  [2:0] w_coeffs_offset;
output  [12:0] u_vec_coeffs_address0;
output   u_vec_coeffs_ce0;
input  [22:0] u_vec_coeffs_q0;
output  [9:0] v_vec_coeffs_address0;
output   v_vec_coeffs_ce0;
input  [31:0] v_vec_coeffs_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[10:0] w_coeffs_address0;
reg w_coeffs_ce0;
reg w_coeffs_we0;
reg[31:0] w_coeffs_d0;
reg[12:0] u_vec_coeffs_address0;
reg u_vec_coeffs_ce0;
reg[9:0] v_vec_coeffs_address0;
reg v_vec_coeffs_ce0;

(* fsm_encoding = "none" *) reg   [18:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [22:0] reg_230;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state10;
reg   [31:0] reg_234;
wire   [11:0] tmp_45_cast_fu_246_p1;
reg   [11:0] tmp_45_cast_reg_633;
wire   [5:0] tmp_47_cast_fu_258_p1;
reg   [5:0] tmp_47_cast_reg_640;
wire   [8:0] i_11_fu_268_p2;
reg   [8:0] i_11_reg_648;
wire    ap_CS_fsm_state2;
wire   [0:0] tmp_i_fu_262_p2;
wire   [54:0] a_assign_fu_301_p2;
reg   [54:0] a_assign_reg_663;
wire    ap_CS_fsm_state4;
wire  signed [31:0] tmp_fu_307_p1;
reg  signed [31:0] tmp_reg_668;
wire   [11:0] tmp_43_fu_315_p2;
reg   [11:0] tmp_43_reg_673;
wire    ap_CS_fsm_state5;
wire   [31:0] t_fu_320_p2;
reg   [31:0] t_reg_678;
wire   [54:0] t_1_fu_328_p2;
reg   [54:0] t_1_reg_683;
wire    ap_CS_fsm_state6;
wire   [13:0] tmp_53_cast_fu_380_p3;
reg   [13:0] tmp_53_cast_reg_691;
wire    ap_CS_fsm_state8;
wire   [0:0] exitcond_fu_365_p2;
wire   [11:0] tmp_55_cast_fu_396_p1;
reg   [11:0] tmp_55_cast_reg_696;
wire   [8:0] i_2_fu_406_p2;
reg   [8:0] i_2_reg_704;
wire    ap_CS_fsm_state9;
wire   [0:0] tmp_i2_fu_400_p2;
wire   [54:0] a_assign_3_fu_448_p2;
reg   [54:0] a_assign_3_reg_719;
wire    ap_CS_fsm_state11;
wire  signed [31:0] tmp_53_fu_454_p1;
reg  signed [31:0] tmp_53_reg_724;
wire   [31:0] t_5_fu_458_p2;
reg   [31:0] t_5_reg_729;
wire    ap_CS_fsm_state12;
wire   [54:0] t_6_fu_466_p2;
reg   [54:0] t_6_reg_734;
wire    ap_CS_fsm_state13;
wire   [8:0] i_13_fu_510_p2;
reg   [8:0] i_13_reg_742;
wire    ap_CS_fsm_state15;
reg   [10:0] w_coeffs_addr_2_reg_747;
wire   [0:0] tmp_i3_30_fu_504_p2;
wire   [2:0] i_3_fu_535_p2;
wire   [8:0] i_12_fu_554_p2;
reg   [8:0] i_12_reg_765;
wire    ap_CS_fsm_state17;
reg   [10:0] w_coeffs_addr_reg_770;
wire   [0:0] tmp_s_fu_548_p2;
wire   [24:0] t_4_fu_618_p2;
reg   [24:0] t_4_reg_775;
wire    ap_CS_fsm_state18;
reg   [7:0] t_coeffs_address0;
reg    t_coeffs_ce0;
reg    t_coeffs_we0;
wire   [31:0] t_coeffs_d0;
wire   [31:0] t_coeffs_q0;
reg   [8:0] i_i_reg_172;
wire    ap_CS_fsm_state7;
reg   [2:0] i_reg_184;
reg   [8:0] i_i1_reg_196;
wire    ap_CS_fsm_state14;
reg   [8:0] i_i2_reg_208;
wire    ap_CS_fsm_state16;
reg   [8:0] i_1_reg_219;
wire    ap_CS_fsm_state19;
wire   [63:0] tmp_45_fu_288_p1;
wire   [63:0] tmp_i_27_fu_274_p1;
wire   [63:0] tmp_48_cast_fu_334_p1;
wire   [63:0] tmp_59_cast_fu_425_p1;
wire   [63:0] tmp_60_cast_fu_435_p1;
wire   [63:0] tmp_i3_fu_472_p1;
wire   [63:0] tmp_61_cast_fu_530_p1;
wire   [63:0] tmp_i2_32_fu_516_p1;
wire   [63:0] tmp_56_cast_fu_569_p1;
wire   [31:0] tmp_i_i_fu_360_p1;
wire   [31:0] tmp_161_i_fu_541_p2;
wire  signed [31:0] t_5_cast_fu_624_p1;
wire   [10:0] tmp_41_fu_238_p3;
wire   [4:0] tmp_42_fu_250_p3;
wire   [12:0] tmp_44_fu_279_p4;
wire   [31:0] a_assign_fu_301_p0;
wire   [22:0] a_assign_fu_301_p1;
wire   [11:0] tmp_i_cast_fu_311_p1;
wire   [31:0] t_1_fu_328_p1;
wire   [55:0] t_2_cast_cast_fu_341_p1;
wire   [55:0] a_assign_cast_fu_338_p1;
wire   [55:0] t_2_fu_344_p2;
wire   [23:0] tmp_46_fu_350_p4;
wire   [5:0] tmp_cast_fu_371_p1;
wire   [5:0] tmp_47_fu_375_p2;
wire   [10:0] tmp_48_fu_388_p3;
wire   [13:0] tmp_i3_cast_fu_416_p1;
wire   [13:0] tmp_51_fu_420_p2;
wire   [11:0] tmp_i3_cast1_fu_412_p1;
wire   [11:0] tmp_52_fu_430_p2;
wire   [31:0] a_assign_3_fu_448_p0;
wire   [22:0] a_assign_3_fu_448_p1;
wire   [31:0] t_6_fu_466_p1;
wire   [55:0] t_8_cast_cast_fu_480_p1;
wire   [55:0] a_assign_3_cast9_fu_477_p1;
wire   [55:0] t_7_fu_483_p2;
wire   [23:0] tmp_54_fu_489_p4;
wire   [11:0] tmp_i2_cast_fu_521_p1;
wire   [11:0] tmp_55_fu_525_p2;
wire   [11:0] tmp_33_cast_fu_560_p1;
wire   [11:0] tmp_49_fu_564_p2;
wire   [22:0] t_3_fu_574_p1;
wire   [8:0] tmp_50_fu_582_p4;
wire   [21:0] tmp_i1_fu_596_p3;
wire   [23:0] t_4_cast_fu_578_p1;
wire   [23:0] a_assign_2_cast_fu_592_p1;
wire   [23:0] tmp_41_i_fu_608_p2;
wire  signed [24:0] tmp_41_i_cast_fu_614_p1;
wire   [24:0] tmp_i1_cast_fu_604_p1;
reg   [18:0] ap_NS_fsm;
wire   [54:0] a_assign_3_fu_448_p00;
wire   [54:0] a_assign_3_fu_448_p10;
wire   [54:0] a_assign_fu_301_p00;
wire   [54:0] a_assign_fu_301_p10;
wire   [54:0] t_1_fu_328_p10;
wire   [54:0] t_6_fu_466_p10;

// power-on initialization
initial begin
#0 ap_CS_fsm = 19'd1;
end

polyvecl_pointwisdEe #(
    .DataWidth( 32 ),
    .AddressRange( 256 ),
    .AddressWidth( 8 ))
t_coeffs_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(t_coeffs_address0),
    .ce0(t_coeffs_ce0),
    .we0(t_coeffs_we0),
    .d0(t_coeffs_d0),
    .q0(t_coeffs_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & (exitcond_fu_365_p2 == 1'd1))) begin
        i_1_reg_219 <= 9'd0;
    end else if ((1'b1 == ap_CS_fsm_state19)) begin
        i_1_reg_219 <= i_12_reg_765;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        i_i1_reg_196 <= i_2_reg_704;
    end else if (((exitcond_fu_365_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        i_i1_reg_196 <= 9'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state9) & (tmp_i2_fu_400_p2 == 1'd1))) begin
        i_i2_reg_208 <= 9'd0;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        i_i2_reg_208 <= i_13_reg_742;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        i_i_reg_172 <= i_11_reg_648;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_i_reg_172 <= 9'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i_fu_262_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        i_reg_184 <= 3'd1;
    end else if (((1'b1 == ap_CS_fsm_state15) & (tmp_i3_30_fu_504_p2 == 1'd1))) begin
        i_reg_184 <= i_3_fu_535_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        a_assign_3_reg_719 <= a_assign_3_fu_448_p2;
        tmp_53_reg_724 <= tmp_53_fu_454_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        a_assign_reg_663 <= a_assign_fu_301_p2;
        tmp_reg_668 <= tmp_fu_307_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_11_reg_648 <= i_11_fu_268_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        i_12_reg_765 <= i_12_fu_554_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        i_13_reg_742 <= i_13_fu_510_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        i_2_reg_704 <= i_2_fu_406_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state3))) begin
        reg_230 <= u_vec_coeffs_q0;
        reg_234 <= v_vec_coeffs_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        t_1_reg_683 <= t_1_fu_328_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state18)) begin
        t_4_reg_775 <= t_4_fu_618_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        t_5_reg_729 <= t_5_fu_458_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        t_6_reg_734 <= t_6_fu_466_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        t_reg_678 <= t_fu_320_p2;
        tmp_43_reg_673 <= tmp_43_fu_315_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        tmp_45_cast_reg_633[10 : 8] <= tmp_45_cast_fu_246_p1[10 : 8];
        tmp_47_cast_reg_640[4 : 2] <= tmp_47_cast_fu_258_p1[4 : 2];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_365_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        tmp_53_cast_reg_691[13 : 8] <= tmp_53_cast_fu_380_p3[13 : 8];
        tmp_55_cast_reg_696[10 : 8] <= tmp_55_cast_fu_396_p1[10 : 8];
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i3_30_fu_504_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state15))) begin
        w_coeffs_addr_2_reg_747 <= tmp_61_cast_fu_530_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_s_fu_548_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state17))) begin
        w_coeffs_addr_reg_770 <= tmp_56_cast_fu_569_p1;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state17) & (tmp_s_fu_548_p2 == 1'd1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) & (tmp_s_fu_548_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        t_coeffs_address0 = tmp_i2_32_fu_516_p1;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        t_coeffs_address0 = tmp_i3_fu_472_p1;
    end else begin
        t_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state15))) begin
        t_coeffs_ce0 = 1'b1;
    end else begin
        t_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        t_coeffs_we0 = 1'b1;
    end else begin
        t_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        u_vec_coeffs_address0 = tmp_59_cast_fu_425_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        u_vec_coeffs_address0 = tmp_45_fu_288_p1;
    end else begin
        u_vec_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state9))) begin
        u_vec_coeffs_ce0 = 1'b1;
    end else begin
        u_vec_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        v_vec_coeffs_address0 = tmp_60_cast_fu_435_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        v_vec_coeffs_address0 = tmp_i_27_fu_274_p1;
    end else begin
        v_vec_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state9))) begin
        v_vec_coeffs_ce0 = 1'b1;
    end else begin
        v_vec_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        w_coeffs_address0 = w_coeffs_addr_reg_770;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        w_coeffs_address0 = tmp_56_cast_fu_569_p1;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        w_coeffs_address0 = w_coeffs_addr_2_reg_747;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        w_coeffs_address0 = tmp_61_cast_fu_530_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        w_coeffs_address0 = tmp_48_cast_fu_334_p1;
    end else begin
        w_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state15))) begin
        w_coeffs_ce0 = 1'b1;
    end else begin
        w_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        w_coeffs_d0 = t_5_cast_fu_624_p1;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        w_coeffs_d0 = tmp_161_i_fu_541_p2;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        w_coeffs_d0 = tmp_i_i_fu_360_p1;
    end else begin
        w_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state7))) begin
        w_coeffs_we0 = 1'b1;
    end else begin
        w_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((tmp_i_fu_262_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state8 : begin
            if (((1'b1 == ap_CS_fsm_state8) & (exitcond_fu_365_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state17;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state9 : begin
            if (((1'b1 == ap_CS_fsm_state9) & (tmp_i2_fu_400_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state15;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state15 : begin
            if (((1'b1 == ap_CS_fsm_state15) & (tmp_i3_30_fu_504_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state17 : begin
            if (((1'b1 == ap_CS_fsm_state17) & (tmp_s_fu_548_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state18;
            end
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_assign_2_cast_fu_592_p1 = tmp_50_fu_582_p4;

assign a_assign_3_cast9_fu_477_p1 = a_assign_3_reg_719;

assign a_assign_3_fu_448_p0 = a_assign_3_fu_448_p00;

assign a_assign_3_fu_448_p00 = reg_234;

assign a_assign_3_fu_448_p1 = a_assign_3_fu_448_p10;

assign a_assign_3_fu_448_p10 = reg_230;

assign a_assign_3_fu_448_p2 = (a_assign_3_fu_448_p0 * a_assign_3_fu_448_p1);

assign a_assign_cast_fu_338_p1 = a_assign_reg_663;

assign a_assign_fu_301_p0 = a_assign_fu_301_p00;

assign a_assign_fu_301_p00 = reg_234;

assign a_assign_fu_301_p1 = a_assign_fu_301_p10;

assign a_assign_fu_301_p10 = reg_230;

assign a_assign_fu_301_p2 = (a_assign_fu_301_p0 * a_assign_fu_301_p1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state18 = ap_CS_fsm[32'd17];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign exitcond_fu_365_p2 = ((i_reg_184 == 3'd4) ? 1'b1 : 1'b0);

assign i_11_fu_268_p2 = (i_i_reg_172 + 9'd1);

assign i_12_fu_554_p2 = (i_1_reg_219 + 9'd1);

assign i_13_fu_510_p2 = (i_i2_reg_208 + 9'd1);

assign i_2_fu_406_p2 = (i_i1_reg_196 + 9'd1);

assign i_3_fu_535_p2 = (i_reg_184 + 3'd1);

assign t_1_fu_328_p1 = t_1_fu_328_p10;

assign t_1_fu_328_p10 = t_reg_678;

assign t_1_fu_328_p2 = (55'd8380417 * t_1_fu_328_p1);

assign t_2_cast_cast_fu_341_p1 = t_1_reg_683;

assign t_2_fu_344_p2 = (t_2_cast_cast_fu_341_p1 + a_assign_cast_fu_338_p1);

assign t_3_fu_574_p1 = w_coeffs_q0[22:0];

assign t_4_cast_fu_578_p1 = t_3_fu_574_p1;

assign t_4_fu_618_p2 = ($signed(tmp_41_i_cast_fu_614_p1) + $signed(tmp_i1_cast_fu_604_p1));

assign t_5_cast_fu_624_p1 = $signed(t_4_reg_775);

assign t_5_fu_458_p2 = ($signed(32'd4236238847) * $signed(tmp_53_reg_724));

assign t_6_fu_466_p1 = t_6_fu_466_p10;

assign t_6_fu_466_p10 = t_5_reg_729;

assign t_6_fu_466_p2 = (55'd8380417 * t_6_fu_466_p1);

assign t_7_fu_483_p2 = (t_8_cast_cast_fu_480_p1 + a_assign_3_cast9_fu_477_p1);

assign t_8_cast_cast_fu_480_p1 = t_6_reg_734;

assign t_coeffs_d0 = tmp_54_fu_489_p4;

assign t_fu_320_p2 = ($signed(32'd4236238847) * $signed(tmp_reg_668));

assign tmp_161_i_fu_541_p2 = (w_coeffs_q0 + t_coeffs_q0);

assign tmp_33_cast_fu_560_p1 = i_1_reg_219;

assign tmp_41_fu_238_p3 = {{w_coeffs_offset}, {8'd0}};

assign tmp_41_i_cast_fu_614_p1 = $signed(tmp_41_i_fu_608_p2);

assign tmp_41_i_fu_608_p2 = (t_4_cast_fu_578_p1 - a_assign_2_cast_fu_592_p1);

assign tmp_42_fu_250_p3 = {{w_coeffs_offset}, {2'd0}};

assign tmp_43_fu_315_p2 = (tmp_i_cast_fu_311_p1 + tmp_45_cast_reg_633);

assign tmp_44_fu_279_p4 = {{{w_coeffs_offset}, {1'd0}}, {i_i_reg_172}};

assign tmp_45_cast_fu_246_p1 = tmp_41_fu_238_p3;

assign tmp_45_fu_288_p1 = tmp_44_fu_279_p4;

assign tmp_46_fu_350_p4 = {{t_2_fu_344_p2[55:32]}};

assign tmp_47_cast_fu_258_p1 = tmp_42_fu_250_p3;

assign tmp_47_fu_375_p2 = (tmp_cast_fu_371_p1 + tmp_47_cast_reg_640);

assign tmp_48_cast_fu_334_p1 = tmp_43_reg_673;

assign tmp_48_fu_388_p3 = {{i_reg_184}, {8'd0}};

assign tmp_49_fu_564_p2 = (tmp_33_cast_fu_560_p1 + tmp_45_cast_reg_633);

assign tmp_50_fu_582_p4 = {{w_coeffs_q0[31:23]}};

assign tmp_51_fu_420_p2 = (tmp_i3_cast_fu_416_p1 + tmp_53_cast_reg_691);

assign tmp_52_fu_430_p2 = (tmp_i3_cast1_fu_412_p1 + tmp_55_cast_reg_696);

assign tmp_53_cast_fu_380_p3 = {{tmp_47_fu_375_p2}, {8'd0}};

assign tmp_53_fu_454_p1 = a_assign_3_fu_448_p2[31:0];

assign tmp_54_fu_489_p4 = {{t_7_fu_483_p2[55:32]}};

assign tmp_55_cast_fu_396_p1 = tmp_48_fu_388_p3;

assign tmp_55_fu_525_p2 = (tmp_45_cast_reg_633 + tmp_i2_cast_fu_521_p1);

assign tmp_56_cast_fu_569_p1 = tmp_49_fu_564_p2;

assign tmp_59_cast_fu_425_p1 = tmp_51_fu_420_p2;

assign tmp_60_cast_fu_435_p1 = tmp_52_fu_430_p2;

assign tmp_61_cast_fu_530_p1 = tmp_55_fu_525_p2;

assign tmp_cast_fu_371_p1 = i_reg_184;

assign tmp_fu_307_p1 = a_assign_fu_301_p2[31:0];

assign tmp_i1_cast_fu_604_p1 = tmp_i1_fu_596_p3;

assign tmp_i1_fu_596_p3 = {{tmp_50_fu_582_p4}, {13'd0}};

assign tmp_i2_32_fu_516_p1 = i_i2_reg_208;

assign tmp_i2_cast_fu_521_p1 = i_i2_reg_208;

assign tmp_i2_fu_400_p2 = ((i_i1_reg_196 == 9'd256) ? 1'b1 : 1'b0);

assign tmp_i3_30_fu_504_p2 = ((i_i2_reg_208 == 9'd256) ? 1'b1 : 1'b0);

assign tmp_i3_cast1_fu_412_p1 = i_i1_reg_196;

assign tmp_i3_cast_fu_416_p1 = i_i1_reg_196;

assign tmp_i3_fu_472_p1 = i_i1_reg_196;

assign tmp_i_27_fu_274_p1 = i_i_reg_172;

assign tmp_i_cast_fu_311_p1 = i_i_reg_172;

assign tmp_i_fu_262_p2 = ((i_i_reg_172 == 9'd256) ? 1'b1 : 1'b0);

assign tmp_i_i_fu_360_p1 = tmp_46_fu_350_p4;

assign tmp_s_fu_548_p2 = ((i_1_reg_219 == 9'd256) ? 1'b1 : 1'b0);

always @ (posedge ap_clk) begin
    tmp_45_cast_reg_633[7:0] <= 8'b00000000;
    tmp_45_cast_reg_633[11] <= 1'b0;
    tmp_47_cast_reg_640[1:0] <= 2'b00;
    tmp_47_cast_reg_640[5] <= 1'b0;
    tmp_53_cast_reg_691[7:0] <= 8'b00000000;
    tmp_55_cast_reg_696[7:0] <= 8'b00000000;
    tmp_55_cast_reg_696[11] <= 1'b0;
end

endmodule //polyvecl_pointwise_a
