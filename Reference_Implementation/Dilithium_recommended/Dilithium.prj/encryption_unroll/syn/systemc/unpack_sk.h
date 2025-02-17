// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _unpack_sk_HH_
#define _unpack_sk_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct unpack_sk : public sc_module {
    // Port declarations 40
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<7> > rho_address0;
    sc_out< sc_logic > rho_ce0;
    sc_out< sc_logic > rho_we0;
    sc_out< sc_lv<8> > rho_d0;
    sc_out< sc_lv<12> > tr_address0;
    sc_out< sc_logic > tr_ce0;
    sc_out< sc_logic > tr_we0;
    sc_out< sc_lv<8> > tr_d0;
    sc_out< sc_lv<10> > s1_vec_coeffs_address0;
    sc_out< sc_logic > s1_vec_coeffs_ce0;
    sc_out< sc_logic > s1_vec_coeffs_we0;
    sc_out< sc_lv<32> > s1_vec_coeffs_d0;
    sc_out< sc_lv<10> > s1_vec_coeffs_address1;
    sc_out< sc_logic > s1_vec_coeffs_ce1;
    sc_out< sc_logic > s1_vec_coeffs_we1;
    sc_out< sc_lv<32> > s1_vec_coeffs_d1;
    sc_out< sc_lv<11> > s2_vec_coeffs_address0;
    sc_out< sc_logic > s2_vec_coeffs_ce0;
    sc_out< sc_logic > s2_vec_coeffs_we0;
    sc_out< sc_lv<32> > s2_vec_coeffs_d0;
    sc_out< sc_lv<11> > s2_vec_coeffs_address1;
    sc_out< sc_logic > s2_vec_coeffs_ce1;
    sc_out< sc_logic > s2_vec_coeffs_we1;
    sc_out< sc_lv<32> > s2_vec_coeffs_d1;
    sc_out< sc_lv<11> > t0_vec_coeffs_address0;
    sc_out< sc_logic > t0_vec_coeffs_ce0;
    sc_out< sc_logic > t0_vec_coeffs_we0;
    sc_out< sc_lv<32> > t0_vec_coeffs_d0;
    sc_out< sc_lv<12> > sk_address0;
    sc_out< sc_logic > sk_ce0;
    sc_in< sc_lv<8> > sk_q0;
    sc_out< sc_lv<12> > sk_address1;
    sc_out< sc_logic > sk_ce1;
    sc_in< sc_lv<8> > sk_q1;


    // Module declarations
    unpack_sk(sc_module_name name);
    SC_HAS_PROCESS(unpack_sk);

    ~unpack_sk();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<19> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > reg_487;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<6> > i_6_fu_498_p2;
    sc_signal< sc_lv<6> > i_6_reg_1342;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > tmp_1_fu_504_p1;
    sc_signal< sc_lv<64> > tmp_1_reg_1347;
    sc_signal< sc_lv<1> > tmp_fu_492_p2;
    sc_signal< sc_lv<6> > i_7_fu_515_p2;
    sc_signal< sc_lv<6> > i_7_reg_1360;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > sum2_cast_fu_527_p1;
    sc_signal< sc_lv<64> > sum2_cast_reg_1365;
    sc_signal< sc_lv<1> > tmp_3_fu_509_p2;
    sc_signal< sc_lv<6> > i_8_fu_538_p2;
    sc_signal< sc_lv<6> > i_8_reg_1378;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > tmp_6_fu_532_p2;
    sc_signal< sc_lv<3> > i_9_fu_578_p2;
    sc_signal< sc_lv<3> > i_9_reg_1391;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<10> > p_sum2_cast_fu_602_p1;
    sc_signal< sc_lv<10> > p_sum2_cast_reg_1396;
    sc_signal< sc_lv<1> > tmp_9_fu_572_p2;
    sc_signal< sc_lv<8> > i_15_fu_612_p2;
    sc_signal< sc_lv<8> > i_15_reg_1404;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<1> > tmp_i_fu_606_p2;
    sc_signal< sc_lv<3> > i_11_fu_724_p2;
    sc_signal< sc_lv<3> > i_11_reg_1417;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<11> > tmp_12_cast_fu_738_p1;
    sc_signal< sc_lv<11> > tmp_12_cast_reg_1422;
    sc_signal< sc_lv<1> > tmp_8_fu_718_p2;
    sc_signal< sc_lv<8> > i_17_fu_748_p2;
    sc_signal< sc_lv<8> > i_17_reg_1430;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<1> > tmp_i2_fu_742_p2;
    sc_signal< sc_lv<3> > i_16_fu_870_p2;
    sc_signal< sc_lv<3> > i_16_reg_1443;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<13> > sum_cast_fu_906_p2;
    sc_signal< sc_lv<13> > sum_cast_reg_1448;
    sc_signal< sc_lv<1> > tmp_7_fu_864_p2;
    sc_signal< sc_lv<7> > i_18_fu_922_p2;
    sc_signal< sc_lv<7> > i_18_reg_1462;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<6> > tmp_28_fu_928_p1;
    sc_signal< sc_lv<6> > tmp_28_reg_1467;
    sc_signal< sc_lv<1> > tmp_i3_fu_916_p2;
    sc_signal< sc_lv<10> > tmp_i4_fu_944_p2;
    sc_signal< sc_lv<10> > tmp_i4_reg_1473;
    sc_signal< sc_lv<8> > tmp_41_i_fu_1063_p3;
    sc_signal< sc_lv<8> > tmp_41_i_reg_1502;
    sc_signal< sc_lv<13> > sum5_i5_fu_1188_p2;
    sc_signal< sc_lv<13> > sum5_i5_reg_1518;
    sc_signal< sc_lv<6> > tmp_75_i_reg_1523;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<6> > i_reg_372;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<6> > i_1_reg_383;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<6> > i_2_reg_394;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<3> > i_3_reg_406;
    sc_signal< sc_lv<8> > i_i_reg_418;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<3> > i_4_reg_430;
    sc_signal< sc_lv<8> > i_i1_reg_442;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<3> > i_5_reg_454;
    sc_signal< sc_lv<7> > i_i2_reg_466;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<64> > sum4_cast_fu_552_p1;
    sc_signal< sc_lv<64> > sum6_cast_fu_567_p1;
    sc_signal< sc_lv<64> > sum5_i_cast_fu_627_p1;
    sc_signal< sc_lv<64> > tmp_18_fu_660_p1;
    sc_signal< sc_lv<64> > tmp_20_fu_683_p1;
    sc_signal< sc_lv<64> > sum5_i4_cast_fu_773_p1;
    sc_signal< sc_lv<64> > tmp_24_fu_806_p1;
    sc_signal< sc_lv<64> > tmp_26_fu_829_p1;
    sc_signal< sc_lv<64> > sum9_i_cast_fu_959_p1;
    sc_signal< sc_lv<64> > sum_i_cast_fu_979_p1;
    sc_signal< sc_lv<64> > tmp_30_fu_993_p1;
    sc_signal< sc_lv<64> > sum1_i_cast_fu_1028_p1;
    sc_signal< sc_lv<64> > sum2_i_cast_fu_1047_p1;
    sc_signal< sc_lv<64> > tmp_33_fu_1098_p1;
    sc_signal< sc_lv<64> > sum3_i_cast_fu_1155_p1;
    sc_signal< sc_lv<64> > sum4_i_cast_fu_1174_p1;
    sc_signal< sc_lv<64> > tmp_36_fu_1231_p1;
    sc_signal< sc_lv<64> > sum5_i5_cast_fu_1284_p1;
    sc_signal< sc_lv<64> > tmp_38_fu_1312_p1;
    sc_signal< sc_lv<32> > tmp_83_i_cast_fu_1058_p1;
    sc_signal< sc_lv<32> > tmp_84_i_cast_fu_1199_p1;
    sc_signal< sc_lv<32> > tmp_85_i_cast_fu_1294_p1;
    sc_signal< sc_lv<32> > tmp_86_i_cast_fu_1334_p1;
    sc_signal< sc_lv<6> > sum2_fu_521_p2;
    sc_signal< sc_lv<7> > sum_fu_544_p3;
    sc_signal< sc_lv<12> > tmp_7_cast1_fu_557_p1;
    sc_signal< sc_lv<12> > sum6_fu_561_p2;
    sc_signal< sc_lv<2> > tmp_4_fu_584_p1;
    sc_signal< sc_lv<9> > tmp_2_fu_588_p3;
    sc_signal< sc_lv<9> > p_sum2_fu_596_p2;
    sc_signal< sc_lv<10> > tmp_i_cast_fu_618_p1;
    sc_signal< sc_lv<10> > sum5_i_fu_622_p2;
    sc_signal< sc_lv<4> > tmp_10_fu_632_p1;
    sc_signal< sc_lv<7> > tmp_11_fu_640_p1;
    sc_signal< sc_lv<11> > tmp_17_fu_650_p4;
    sc_signal< sc_lv<4> > grp_fu_477_p4;
    sc_signal< sc_lv<8> > tmp_14_fu_644_p2;
    sc_signal< sc_lv<8> > tmp_138_i_fu_669_p2;
    sc_signal< sc_lv<11> > tmp_19_fu_675_p3;
    sc_signal< sc_lv<15> > tmp_134_i_cast_cast_fu_636_p1;
    sc_signal< sc_lv<15> > tmp_140_i_fu_688_p2;
    sc_signal< sc_lv<23> > tmp_140_i_cast1_fu_694_p1;
    sc_signal< sc_lv<15> > tmp_137_i_cast_cast_fu_665_p1;
    sc_signal< sc_lv<15> > tmp_141_i_fu_703_p2;
    sc_signal< sc_lv<23> > tmp_141_i_cast1_fu_709_p1;
    sc_signal< sc_lv<10> > tmp_5_fu_730_p3;
    sc_signal< sc_lv<10> > tmp_i3_cast_fu_754_p1;
    sc_signal< sc_lv<10> > tmp6_fu_758_p2;
    sc_signal< sc_lv<11> > tmp6_cast_fu_764_p1;
    sc_signal< sc_lv<11> > sum5_i4_fu_768_p2;
    sc_signal< sc_lv<4> > tmp_21_fu_778_p1;
    sc_signal< sc_lv<7> > tmp_22_fu_786_p1;
    sc_signal< sc_lv<11> > tmp_23_fu_796_p4;
    sc_signal< sc_lv<8> > tmp_27_fu_790_p2;
    sc_signal< sc_lv<8> > tmp_147_i_fu_815_p2;
    sc_signal< sc_lv<11> > tmp_25_fu_821_p3;
    sc_signal< sc_lv<15> > tmp_143_i_cast_cast_fu_782_p1;
    sc_signal< sc_lv<15> > tmp_149_i_fu_834_p2;
    sc_signal< sc_lv<23> > tmp_149_i_cast1_fu_840_p1;
    sc_signal< sc_lv<15> > tmp_146_i_cast_cast_fu_811_p1;
    sc_signal< sc_lv<15> > tmp_150_i_fu_849_p2;
    sc_signal< sc_lv<23> > tmp_150_i_cast1_fu_855_p1;
    sc_signal< sc_lv<12> > p_shl_fu_876_p3;
    sc_signal< sc_lv<9> > p_shl8_fu_888_p3;
    sc_signal< sc_lv<13> > p_shl_cast_fu_884_p1;
    sc_signal< sc_lv<13> > p_shl8_cast_fu_896_p1;
    sc_signal< sc_lv<13> > tmp_s_fu_900_p2;
    sc_signal< sc_lv<9> > p_shl_i_fu_932_p3;
    sc_signal< sc_lv<10> > p_shl_i_cast_fu_940_p1;
    sc_signal< sc_lv<10> > i_i2_cast1_fu_912_p1;
    sc_signal< sc_lv<13> > tmp_40_i_cast_fu_950_p1;
    sc_signal< sc_lv<13> > sum9_i_fu_954_p2;
    sc_signal< sc_lv<10> > tmp_43_i_fu_964_p2;
    sc_signal< sc_lv<13> > tmp_44_i_cast_fu_970_p1;
    sc_signal< sc_lv<13> > sum_i_fu_974_p2;
    sc_signal< sc_lv<11> > tmp_29_fu_984_p4;
    sc_signal< sc_lv<6> > tmp_39_fu_998_p1;
    sc_signal< sc_lv<14> > tmp_15_i_fu_1002_p3;
    sc_signal< sc_lv<10> > tmp_50_i_fu_1014_p2;
    sc_signal< sc_lv<13> > tmp_51_i_cast_fu_1019_p1;
    sc_signal< sc_lv<13> > sum1_i_fu_1023_p2;
    sc_signal< sc_lv<10> > tmp_55_i_fu_1033_p2;
    sc_signal< sc_lv<13> > tmp_56_i_cast_fu_1038_p1;
    sc_signal< sc_lv<13> > sum2_i_fu_1042_p2;
    sc_signal< sc_lv<24> > tmp_46_i_cast_fu_1010_p1;
    sc_signal< sc_lv<24> > tmp_83_i_fu_1052_p2;
    sc_signal< sc_lv<2> > tmp_47_i_fu_1070_p4;
    sc_signal< sc_lv<8> > tmp_48_i_fu_1084_p2;
    sc_signal< sc_lv<11> > tmp_32_fu_1090_p3;
    sc_signal< sc_lv<8> > tmp_31_fu_1080_p1;
    sc_signal< sc_lv<10> > tmp_12_fu_1115_p3;
    sc_signal< sc_lv<10> > tmp_53_i_fu_1103_p3;
    sc_signal< sc_lv<4> > tmp_40_fu_1111_p1;
    sc_signal< sc_lv<10> > tmp_13_fu_1123_p2;
    sc_signal< sc_lv<14> > tmp_60_i_fu_1129_p3;
    sc_signal< sc_lv<10> > tmp_64_i_fu_1141_p2;
    sc_signal< sc_lv<13> > tmp_65_i_cast_fu_1146_p1;
    sc_signal< sc_lv<13> > sum3_i_fu_1150_p2;
    sc_signal< sc_lv<10> > tmp_69_i_fu_1160_p2;
    sc_signal< sc_lv<13> > tmp_70_i_cast_fu_1165_p1;
    sc_signal< sc_lv<13> > sum4_i_fu_1169_p2;
    sc_signal< sc_lv<10> > tmp_78_i_fu_1179_p2;
    sc_signal< sc_lv<13> > tmp_79_i_cast_fu_1184_p1;
    sc_signal< sc_lv<24> > tmp_60_i_cast_fu_1137_p1;
    sc_signal< sc_lv<24> > tmp_84_i_fu_1193_p2;
    sc_signal< sc_lv<4> > tmp_61_i_fu_1204_p4;
    sc_signal< sc_lv<8> > tmp_62_i_fu_1218_p2;
    sc_signal< sc_lv<11> > tmp_35_fu_1223_p3;
    sc_signal< sc_lv<8> > tmp_34_fu_1214_p1;
    sc_signal< sc_lv<12> > tmp_15_fu_1248_p3;
    sc_signal< sc_lv<12> > tmp_67_i_fu_1236_p3;
    sc_signal< sc_lv<2> > tmp_41_fu_1244_p1;
    sc_signal< sc_lv<12> > tmp_16_fu_1256_p2;
    sc_signal< sc_lv<14> > tmp_74_i_fu_1262_p3;
    sc_signal< sc_lv<24> > tmp_74_i_cast_fu_1270_p1;
    sc_signal< sc_lv<24> > tmp_85_i_fu_1288_p2;
    sc_signal< sc_lv<8> > tmp_76_i_fu_1299_p2;
    sc_signal< sc_lv<11> > tmp_37_fu_1304_p3;
    sc_signal< sc_lv<14> > tmp_82_i_fu_1317_p3;
    sc_signal< sc_lv<24> > tmp_82_i_cast_fu_1324_p1;
    sc_signal< sc_lv<24> > tmp_86_i_fu_1328_p2;
    sc_signal< sc_lv<19> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<19> ap_ST_fsm_state1;
    static const sc_lv<19> ap_ST_fsm_state2;
    static const sc_lv<19> ap_ST_fsm_state3;
    static const sc_lv<19> ap_ST_fsm_state4;
    static const sc_lv<19> ap_ST_fsm_state5;
    static const sc_lv<19> ap_ST_fsm_state6;
    static const sc_lv<19> ap_ST_fsm_state7;
    static const sc_lv<19> ap_ST_fsm_state8;
    static const sc_lv<19> ap_ST_fsm_state9;
    static const sc_lv<19> ap_ST_fsm_state10;
    static const sc_lv<19> ap_ST_fsm_state11;
    static const sc_lv<19> ap_ST_fsm_state12;
    static const sc_lv<19> ap_ST_fsm_state13;
    static const sc_lv<19> ap_ST_fsm_state14;
    static const sc_lv<19> ap_ST_fsm_state15;
    static const sc_lv<19> ap_ST_fsm_state16;
    static const sc_lv<19> ap_ST_fsm_state17;
    static const sc_lv<19> ap_ST_fsm_state18;
    static const sc_lv<19> ap_ST_fsm_state19;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<6> ap_const_lv6_30;
    static const sc_lv<12> ap_const_lv12_A5D;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<9> ap_const_lv9_70;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<15> ap_const_lv15_6006;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<10> ap_const_lv10_270;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<13> ap_const_lv13_4F0;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<24> ap_const_lv24_800001;
    static const sc_lv<10> ap_const_lv10_4;
    static const sc_lv<10> ap_const_lv10_5;
    static const sc_lv<10> ap_const_lv10_6;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<8> ap_const_lv8_3;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_fu_477_p4();
    void thread_i_11_fu_724_p2();
    void thread_i_15_fu_612_p2();
    void thread_i_16_fu_870_p2();
    void thread_i_17_fu_748_p2();
    void thread_i_18_fu_922_p2();
    void thread_i_6_fu_498_p2();
    void thread_i_7_fu_515_p2();
    void thread_i_8_fu_538_p2();
    void thread_i_9_fu_578_p2();
    void thread_i_i2_cast1_fu_912_p1();
    void thread_p_shl8_cast_fu_896_p1();
    void thread_p_shl8_fu_888_p3();
    void thread_p_shl_cast_fu_884_p1();
    void thread_p_shl_fu_876_p3();
    void thread_p_shl_i_cast_fu_940_p1();
    void thread_p_shl_i_fu_932_p3();
    void thread_p_sum2_cast_fu_602_p1();
    void thread_p_sum2_fu_596_p2();
    void thread_rho_address0();
    void thread_rho_ce0();
    void thread_rho_d0();
    void thread_rho_we0();
    void thread_s1_vec_coeffs_address0();
    void thread_s1_vec_coeffs_address1();
    void thread_s1_vec_coeffs_ce0();
    void thread_s1_vec_coeffs_ce1();
    void thread_s1_vec_coeffs_d0();
    void thread_s1_vec_coeffs_d1();
    void thread_s1_vec_coeffs_we0();
    void thread_s1_vec_coeffs_we1();
    void thread_s2_vec_coeffs_address0();
    void thread_s2_vec_coeffs_address1();
    void thread_s2_vec_coeffs_ce0();
    void thread_s2_vec_coeffs_ce1();
    void thread_s2_vec_coeffs_d0();
    void thread_s2_vec_coeffs_d1();
    void thread_s2_vec_coeffs_we0();
    void thread_s2_vec_coeffs_we1();
    void thread_sk_address0();
    void thread_sk_address1();
    void thread_sk_ce0();
    void thread_sk_ce1();
    void thread_sum1_i_cast_fu_1028_p1();
    void thread_sum1_i_fu_1023_p2();
    void thread_sum2_cast_fu_527_p1();
    void thread_sum2_fu_521_p2();
    void thread_sum2_i_cast_fu_1047_p1();
    void thread_sum2_i_fu_1042_p2();
    void thread_sum3_i_cast_fu_1155_p1();
    void thread_sum3_i_fu_1150_p2();
    void thread_sum4_cast_fu_552_p1();
    void thread_sum4_i_cast_fu_1174_p1();
    void thread_sum4_i_fu_1169_p2();
    void thread_sum5_i4_cast_fu_773_p1();
    void thread_sum5_i4_fu_768_p2();
    void thread_sum5_i5_cast_fu_1284_p1();
    void thread_sum5_i5_fu_1188_p2();
    void thread_sum5_i_cast_fu_627_p1();
    void thread_sum5_i_fu_622_p2();
    void thread_sum6_cast_fu_567_p1();
    void thread_sum6_fu_561_p2();
    void thread_sum9_i_cast_fu_959_p1();
    void thread_sum9_i_fu_954_p2();
    void thread_sum_cast_fu_906_p2();
    void thread_sum_fu_544_p3();
    void thread_sum_i_cast_fu_979_p1();
    void thread_sum_i_fu_974_p2();
    void thread_t0_vec_coeffs_address0();
    void thread_t0_vec_coeffs_ce0();
    void thread_t0_vec_coeffs_d0();
    void thread_t0_vec_coeffs_we0();
    void thread_tmp6_cast_fu_764_p1();
    void thread_tmp6_fu_758_p2();
    void thread_tmp_10_fu_632_p1();
    void thread_tmp_11_fu_640_p1();
    void thread_tmp_12_cast_fu_738_p1();
    void thread_tmp_12_fu_1115_p3();
    void thread_tmp_134_i_cast_cast_fu_636_p1();
    void thread_tmp_137_i_cast_cast_fu_665_p1();
    void thread_tmp_138_i_fu_669_p2();
    void thread_tmp_13_fu_1123_p2();
    void thread_tmp_140_i_cast1_fu_694_p1();
    void thread_tmp_140_i_fu_688_p2();
    void thread_tmp_141_i_cast1_fu_709_p1();
    void thread_tmp_141_i_fu_703_p2();
    void thread_tmp_143_i_cast_cast_fu_782_p1();
    void thread_tmp_146_i_cast_cast_fu_811_p1();
    void thread_tmp_147_i_fu_815_p2();
    void thread_tmp_149_i_cast1_fu_840_p1();
    void thread_tmp_149_i_fu_834_p2();
    void thread_tmp_14_fu_644_p2();
    void thread_tmp_150_i_cast1_fu_855_p1();
    void thread_tmp_150_i_fu_849_p2();
    void thread_tmp_15_fu_1248_p3();
    void thread_tmp_15_i_fu_1002_p3();
    void thread_tmp_16_fu_1256_p2();
    void thread_tmp_17_fu_650_p4();
    void thread_tmp_18_fu_660_p1();
    void thread_tmp_19_fu_675_p3();
    void thread_tmp_1_fu_504_p1();
    void thread_tmp_20_fu_683_p1();
    void thread_tmp_21_fu_778_p1();
    void thread_tmp_22_fu_786_p1();
    void thread_tmp_23_fu_796_p4();
    void thread_tmp_24_fu_806_p1();
    void thread_tmp_25_fu_821_p3();
    void thread_tmp_26_fu_829_p1();
    void thread_tmp_27_fu_790_p2();
    void thread_tmp_28_fu_928_p1();
    void thread_tmp_29_fu_984_p4();
    void thread_tmp_2_fu_588_p3();
    void thread_tmp_30_fu_993_p1();
    void thread_tmp_31_fu_1080_p1();
    void thread_tmp_32_fu_1090_p3();
    void thread_tmp_33_fu_1098_p1();
    void thread_tmp_34_fu_1214_p1();
    void thread_tmp_35_fu_1223_p3();
    void thread_tmp_36_fu_1231_p1();
    void thread_tmp_37_fu_1304_p3();
    void thread_tmp_38_fu_1312_p1();
    void thread_tmp_39_fu_998_p1();
    void thread_tmp_3_fu_509_p2();
    void thread_tmp_40_fu_1111_p1();
    void thread_tmp_40_i_cast_fu_950_p1();
    void thread_tmp_41_fu_1244_p1();
    void thread_tmp_41_i_fu_1063_p3();
    void thread_tmp_43_i_fu_964_p2();
    void thread_tmp_44_i_cast_fu_970_p1();
    void thread_tmp_46_i_cast_fu_1010_p1();
    void thread_tmp_47_i_fu_1070_p4();
    void thread_tmp_48_i_fu_1084_p2();
    void thread_tmp_4_fu_584_p1();
    void thread_tmp_50_i_fu_1014_p2();
    void thread_tmp_51_i_cast_fu_1019_p1();
    void thread_tmp_53_i_fu_1103_p3();
    void thread_tmp_55_i_fu_1033_p2();
    void thread_tmp_56_i_cast_fu_1038_p1();
    void thread_tmp_5_fu_730_p3();
    void thread_tmp_60_i_cast_fu_1137_p1();
    void thread_tmp_60_i_fu_1129_p3();
    void thread_tmp_61_i_fu_1204_p4();
    void thread_tmp_62_i_fu_1218_p2();
    void thread_tmp_64_i_fu_1141_p2();
    void thread_tmp_65_i_cast_fu_1146_p1();
    void thread_tmp_67_i_fu_1236_p3();
    void thread_tmp_69_i_fu_1160_p2();
    void thread_tmp_6_fu_532_p2();
    void thread_tmp_70_i_cast_fu_1165_p1();
    void thread_tmp_74_i_cast_fu_1270_p1();
    void thread_tmp_74_i_fu_1262_p3();
    void thread_tmp_76_i_fu_1299_p2();
    void thread_tmp_78_i_fu_1179_p2();
    void thread_tmp_79_i_cast_fu_1184_p1();
    void thread_tmp_7_cast1_fu_557_p1();
    void thread_tmp_7_fu_864_p2();
    void thread_tmp_82_i_cast_fu_1324_p1();
    void thread_tmp_82_i_fu_1317_p3();
    void thread_tmp_83_i_cast_fu_1058_p1();
    void thread_tmp_83_i_fu_1052_p2();
    void thread_tmp_84_i_cast_fu_1199_p1();
    void thread_tmp_84_i_fu_1193_p2();
    void thread_tmp_85_i_cast_fu_1294_p1();
    void thread_tmp_85_i_fu_1288_p2();
    void thread_tmp_86_i_cast_fu_1334_p1();
    void thread_tmp_86_i_fu_1328_p2();
    void thread_tmp_8_fu_718_p2();
    void thread_tmp_9_fu_572_p2();
    void thread_tmp_fu_492_p2();
    void thread_tmp_i2_fu_742_p2();
    void thread_tmp_i3_cast_fu_754_p1();
    void thread_tmp_i3_fu_916_p2();
    void thread_tmp_i4_fu_944_p2();
    void thread_tmp_i_cast_fu_618_p1();
    void thread_tmp_i_fu_606_p2();
    void thread_tmp_s_fu_900_p2();
    void thread_tr_address0();
    void thread_tr_ce0();
    void thread_tr_d0();
    void thread_tr_we0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
