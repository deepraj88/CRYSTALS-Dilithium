// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module polyveck_make_hint (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        h_vec_coeffs_address0,
        h_vec_coeffs_ce0,
        h_vec_coeffs_we0,
        h_vec_coeffs_d0,
        u_vec_coeffs_address0,
        u_vec_coeffs_ce0,
        u_vec_coeffs_q0,
        v_vec_coeffs_address0,
        v_vec_coeffs_ce0,
        v_vec_coeffs_q0,
        ap_return
);

parameter    ap_ST_fsm_state1 = 8'd1;
parameter    ap_ST_fsm_state2 = 8'd2;
parameter    ap_ST_fsm_state3 = 8'd4;
parameter    ap_ST_fsm_state4 = 8'd8;
parameter    ap_ST_fsm_state5 = 8'd16;
parameter    ap_ST_fsm_state6 = 8'd32;
parameter    ap_ST_fsm_state7 = 8'd64;
parameter    ap_ST_fsm_state8 = 8'd128;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [10:0] h_vec_coeffs_address0;
output   h_vec_coeffs_ce0;
output   h_vec_coeffs_we0;
output  [0:0] h_vec_coeffs_d0;
output  [10:0] u_vec_coeffs_address0;
output   u_vec_coeffs_ce0;
input  [31:0] u_vec_coeffs_q0;
output  [10:0] v_vec_coeffs_address0;
output   v_vec_coeffs_ce0;
input  [31:0] v_vec_coeffs_q0;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg h_vec_coeffs_ce0;
reg h_vec_coeffs_we0;
reg u_vec_coeffs_ce0;
reg v_vec_coeffs_ce0;

(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [2:0] i_23_fu_173_p2;
reg   [2:0] i_23_reg_597;
wire    ap_CS_fsm_state2;
wire   [11:0] tmp_63_cast_fu_187_p1;
reg   [11:0] tmp_63_cast_reg_602;
wire   [0:0] tmp_fu_167_p2;
wire   [8:0] j_1_fu_197_p2;
reg   [8:0] j_1_reg_610;
wire    ap_CS_fsm_state3;
wire   [63:0] tmp_64_cast_fu_212_p1;
reg   [63:0] tmp_64_cast_reg_615;
wire   [0:0] tmp_s_fu_191_p2;
reg   [31:0] u_vec_coeffs_load_reg_630;
wire    ap_CS_fsm_state4;
wire   [23:0] t_10_fu_280_p2;
reg   [23:0] t_10_reg_635;
wire   [22:0] t_11_fu_300_p2;
reg   [22:0] t_11_reg_640;
reg   [8:0] tmp_64_reg_645;
wire   [3:0] a_assign_5_fu_364_p2;
reg   [3:0] a_assign_5_reg_651;
wire    ap_CS_fsm_state5;
wire  signed [23:0] a_assign_8_fu_399_p2;
reg  signed [23:0] a_assign_8_reg_656;
wire   [0:0] tmp_65_fu_405_p3;
reg   [0:0] tmp_65_reg_661;
wire   [18:0] t_12_fu_425_p2;
reg   [18:0] t_12_reg_666;
wire   [24:0] a_assign_9_fu_441_p2;
reg   [24:0] a_assign_9_reg_671;
wire    ap_CS_fsm_state6;
wire   [23:0] t_14_fu_508_p2;
reg   [23:0] t_14_reg_676;
wire   [0:0] tmp_221_i_fu_568_p2;
reg   [0:0] tmp_221_i_reg_681;
wire    ap_CS_fsm_state7;
reg   [2:0] i_reg_137;
reg   [8:0] j_reg_148;
wire    ap_CS_fsm_state8;
reg   [31:0] s_fu_94;
wire   [31:0] s_1_fu_576_p2;
wire   [10:0] tmp_57_fu_179_p3;
wire   [11:0] tmp_27_cast_fu_203_p1;
wire   [11:0] tmp_58_fu_207_p2;
wire   [18:0] t_fu_218_p1;
wire   [12:0] tmp_59_fu_226_p4;
wire   [21:0] tmp_i_i_fu_236_p3;
wire   [22:0] tmp_i_i_cast_fu_244_p1;
wire   [22:0] tmp1_fu_248_p2;
wire  signed [23:0] tmp1_cast_fu_254_p1;
wire   [23:0] t_cast_fu_222_p1;
wire   [23:0] t_9_fu_258_p2;
wire   [0:0] tmp_60_fu_264_p3;
wire   [23:0] tmp_285_i_i_cast_cas_fu_272_p3;
wire   [22:0] tmp_62_fu_286_p1;
wire   [22:0] tmp_63_fu_290_p1;
wire   [31:0] a_assign_6_fu_294_p2;
wire   [31:0] t_1_i_i_fu_319_p2;
wire  signed [31:0] t_13_cast_fu_316_p1;
wire   [31:0] a_assign_4_fu_324_p2;
wire   [31:0] u_fu_330_p2;
wire   [0:0] tmp_61_fu_346_p3;
wire   [0:0] tmp2_fu_354_p2;
wire   [3:0] tmp2_cast_fu_360_p1;
wire   [3:0] tmp_286_i_i_cast_fu_336_p4;
wire   [21:0] tmp_i_i_i_fu_376_p3;
wire   [23:0] t_14_cast_fu_370_p1;
wire   [23:0] a_assign_7_cast_fu_373_p1;
wire   [23:0] tmp_42_i_i_i_fu_387_p2;
wire   [23:0] tmp3_fu_393_p2;
wire   [23:0] tmp_i_i_i_cast_fu_383_p1;
wire   [18:0] tmp_66_fu_413_p1;
wire   [18:0] tmp_31_cast_fu_417_p3;
wire   [24:0] tmp_i7_i_cast_cast_fu_434_p3;
wire  signed [24:0] a_assign_9_cast7_fu_431_p1;
wire   [5:0] tmp_67_fu_450_p4;
wire   [14:0] tmp_68_fu_460_p3;
wire  signed [21:0] tmp_i10_i_fu_468_p1;
wire   [22:0] tmp_i10_i_cast_fu_472_p1;
wire   [22:0] tmp4_fu_476_p2;
wire  signed [23:0] tmp4_cast_fu_482_p1;
wire   [23:0] t_16_cast_fu_447_p1;
wire   [23:0] t_13_fu_486_p2;
wire   [0:0] tmp_69_fu_492_p3;
wire   [23:0] tmp_285_i15_i_cast_c_fu_500_p3;
wire   [24:0] t_1_i17_i_fu_517_p2;
wire  signed [24:0] t_18_cast_fu_514_p1;
wire   [24:0] a_assign_1_fu_522_p2;
wire   [24:0] u_1_fu_528_p2;
wire   [0:0] tmp_70_fu_544_p3;
wire   [0:0] tmp5_fu_552_p2;
wire   [3:0] tmp5_cast_fu_558_p1;
wire   [3:0] tmp_286_i20_i_cast_fu_534_p4;
wire   [3:0] a_assign_s_fu_562_p2;
wire   [31:0] tmp_222_i_fu_573_p1;
reg   [7:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 8'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_s_fu_191_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_reg_137 <= i_23_reg_597;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_137 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_167_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_148 <= 9'd0;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        j_reg_148 <= j_1_reg_610;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        s_fu_94 <= s_1_fu_576_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        s_fu_94 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        a_assign_5_reg_651 <= a_assign_5_fu_364_p2;
        a_assign_8_reg_656 <= a_assign_8_fu_399_p2;
        t_12_reg_666 <= t_12_fu_425_p2;
        tmp_65_reg_661 <= a_assign_8_fu_399_p2[32'd23];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        a_assign_9_reg_671 <= a_assign_9_fu_441_p2;
        t_14_reg_676 <= t_14_fu_508_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_23_reg_597 <= i_23_fu_173_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_1_reg_610 <= j_1_fu_197_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        t_10_reg_635 <= t_10_fu_280_p2;
        t_11_reg_640 <= t_11_fu_300_p2;
        tmp_64_reg_645 <= {{a_assign_6_fu_294_p2[31:23]}};
        u_vec_coeffs_load_reg_630 <= u_vec_coeffs_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        tmp_221_i_reg_681 <= tmp_221_i_fu_568_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_167_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_63_cast_reg_602[10 : 8] <= tmp_63_cast_fu_187_p1[10 : 8];
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_s_fu_191_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_64_cast_reg_615[11 : 0] <= tmp_64_cast_fu_212_p1[11 : 0];
    end
end

always @ (*) begin
    if ((((tmp_fu_167_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((tmp_fu_167_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        h_vec_coeffs_ce0 = 1'b1;
    end else begin
        h_vec_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        h_vec_coeffs_we0 = 1'b1;
    end else begin
        h_vec_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        u_vec_coeffs_ce0 = 1'b1;
    end else begin
        u_vec_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        v_vec_coeffs_ce0 = 1'b1;
    end else begin
        v_vec_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((tmp_fu_167_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_s_fu_191_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
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
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_assign_1_fu_522_p2 = ($signed(t_1_i17_i_fu_517_p2) - $signed(t_18_cast_fu_514_p1));

assign a_assign_4_fu_324_p2 = ($signed(t_1_i_i_fu_319_p2) - $signed(t_13_cast_fu_316_p1));

assign a_assign_5_fu_364_p2 = (tmp2_cast_fu_360_p1 + tmp_286_i_i_cast_fu_336_p4);

assign a_assign_6_fu_294_p2 = (u_vec_coeffs_q0 + v_vec_coeffs_q0);

assign a_assign_7_cast_fu_373_p1 = tmp_64_reg_645;

assign a_assign_8_fu_399_p2 = (tmp3_fu_393_p2 + tmp_i_i_i_cast_fu_383_p1);

assign a_assign_9_cast7_fu_431_p1 = a_assign_8_reg_656;

assign a_assign_9_fu_441_p2 = ($signed(tmp_i7_i_cast_cast_fu_434_p3) + $signed(a_assign_9_cast7_fu_431_p1));

assign a_assign_s_fu_562_p2 = (tmp5_cast_fu_558_p1 + tmp_286_i20_i_cast_fu_534_p4);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_return = s_fu_94;

assign h_vec_coeffs_address0 = tmp_64_cast_reg_615;

assign h_vec_coeffs_d0 = tmp_221_i_reg_681;

assign i_23_fu_173_p2 = (i_reg_137 + 3'd1);

assign j_1_fu_197_p2 = (j_reg_148 + 9'd1);

assign s_1_fu_576_p2 = (tmp_222_i_fu_573_p1 + s_fu_94);

assign t_10_fu_280_p2 = (tmp_285_i_i_cast_cas_fu_272_p3 + t_9_fu_258_p2);

assign t_11_fu_300_p2 = (tmp_62_fu_286_p1 + tmp_63_fu_290_p1);

assign t_12_fu_425_p2 = (tmp_66_fu_413_p1 + tmp_31_cast_fu_417_p3);

assign t_13_cast_fu_316_p1 = $signed(t_10_reg_635);

assign t_13_fu_486_p2 = ($signed(tmp4_cast_fu_482_p1) + $signed(t_16_cast_fu_447_p1));

assign t_14_cast_fu_370_p1 = t_11_reg_640;

assign t_14_fu_508_p2 = (tmp_285_i15_i_cast_c_fu_500_p3 + t_13_fu_486_p2);

assign t_16_cast_fu_447_p1 = t_12_reg_666;

assign t_18_cast_fu_514_p1 = $signed(t_14_reg_676);

assign t_1_i17_i_fu_517_p2 = (25'd261887 + a_assign_9_reg_671);

assign t_1_i_i_fu_319_p2 = (32'd261887 + u_vec_coeffs_load_reg_630);

assign t_9_fu_258_p2 = ($signed(tmp1_cast_fu_254_p1) + $signed(t_cast_fu_222_p1));

assign t_cast_fu_222_p1 = t_fu_218_p1;

assign t_fu_218_p1 = u_vec_coeffs_q0[18:0];

assign tmp1_cast_fu_254_p1 = $signed(tmp1_fu_248_p2);

assign tmp1_fu_248_p2 = ($signed(23'd8126719) + $signed(tmp_i_i_cast_fu_244_p1));

assign tmp2_cast_fu_360_p1 = tmp2_fu_354_p2;

assign tmp2_fu_354_p2 = (tmp_61_fu_346_p3 ^ 1'd1);

assign tmp3_fu_393_p2 = ($signed(24'd8396799) + $signed(tmp_42_i_i_i_fu_387_p2));

assign tmp4_cast_fu_482_p1 = $signed(tmp4_fu_476_p2);

assign tmp4_fu_476_p2 = ($signed(23'd8126719) + $signed(tmp_i10_i_cast_fu_472_p1));

assign tmp5_cast_fu_558_p1 = tmp5_fu_552_p2;

assign tmp5_fu_552_p2 = (tmp_70_fu_544_p3 ^ 1'd1);

assign tmp_221_i_fu_568_p2 = ((a_assign_5_reg_651 != a_assign_s_fu_562_p2) ? 1'b1 : 1'b0);

assign tmp_222_i_fu_573_p1 = tmp_221_i_reg_681;

assign tmp_27_cast_fu_203_p1 = j_reg_148;

assign tmp_285_i15_i_cast_c_fu_500_p3 = ((tmp_69_fu_492_p3[0:0] === 1'b1) ? 24'd523776 : 24'd0);

assign tmp_285_i_i_cast_cas_fu_272_p3 = ((tmp_60_fu_264_p3[0:0] === 1'b1) ? 24'd523776 : 24'd0);

assign tmp_286_i20_i_cast_fu_534_p4 = {{a_assign_1_fu_522_p2[22:19]}};

assign tmp_286_i_i_cast_fu_336_p4 = {{a_assign_4_fu_324_p2[22:19]}};

assign tmp_31_cast_fu_417_p3 = ((tmp_65_fu_405_p3[0:0] === 1'b1) ? 19'd516097 : 19'd0);

assign tmp_42_i_i_i_fu_387_p2 = (t_14_cast_fu_370_p1 - a_assign_7_cast_fu_373_p1);

assign tmp_57_fu_179_p3 = {{i_reg_137}, {8'd0}};

assign tmp_58_fu_207_p2 = (tmp_27_cast_fu_203_p1 + tmp_63_cast_reg_602);

assign tmp_59_fu_226_p4 = {{u_vec_coeffs_q0[31:19]}};

assign tmp_60_fu_264_p3 = t_9_fu_258_p2[32'd23];

assign tmp_61_fu_346_p3 = u_fu_330_p2[32'd31];

assign tmp_62_fu_286_p1 = v_vec_coeffs_q0[22:0];

assign tmp_63_cast_fu_187_p1 = tmp_57_fu_179_p3;

assign tmp_63_fu_290_p1 = u_vec_coeffs_q0[22:0];

assign tmp_64_cast_fu_212_p1 = tmp_58_fu_207_p2;

assign tmp_65_fu_405_p3 = a_assign_8_fu_399_p2[32'd23];

assign tmp_66_fu_413_p1 = a_assign_8_fu_399_p2[18:0];

assign tmp_67_fu_450_p4 = {{a_assign_9_fu_441_p2[24:19]}};

assign tmp_68_fu_460_p3 = {{tmp_67_fu_450_p4}, {9'd0}};

assign tmp_69_fu_492_p3 = t_13_fu_486_p2[32'd23];

assign tmp_70_fu_544_p3 = u_1_fu_528_p2[32'd24];

assign tmp_fu_167_p2 = ((i_reg_137 == 3'd5) ? 1'b1 : 1'b0);

assign tmp_i10_i_cast_fu_472_p1 = $unsigned(tmp_i10_i_fu_468_p1);

assign tmp_i10_i_fu_468_p1 = $signed(tmp_68_fu_460_p3);

assign tmp_i7_i_cast_cast_fu_434_p3 = ((tmp_65_reg_661[0:0] === 1'b1) ? 25'd8380417 : 25'd0);

assign tmp_i_i_cast_fu_244_p1 = tmp_i_i_fu_236_p3;

assign tmp_i_i_fu_236_p3 = {{tmp_59_fu_226_p4}, {9'd0}};

assign tmp_i_i_i_cast_fu_383_p1 = tmp_i_i_i_fu_376_p3;

assign tmp_i_i_i_fu_376_p3 = {{tmp_64_reg_645}, {13'd0}};

assign tmp_s_fu_191_p2 = ((j_reg_148 == 9'd256) ? 1'b1 : 1'b0);

assign u_1_fu_528_p2 = ($signed(25'd33554431) + $signed(a_assign_1_fu_522_p2));

assign u_fu_330_p2 = ($signed(32'd4294967295) + $signed(a_assign_4_fu_324_p2));

assign u_vec_coeffs_address0 = tmp_64_cast_fu_212_p1;

assign v_vec_coeffs_address0 = tmp_64_cast_fu_212_p1;

always @ (posedge ap_clk) begin
    tmp_63_cast_reg_602[7:0] <= 8'b00000000;
    tmp_63_cast_reg_602[11] <= 1'b0;
    tmp_64_cast_reg_615[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
end

endmodule //polyveck_make_hint
