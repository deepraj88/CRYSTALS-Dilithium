// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "polyveck_use_hint.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic polyveck_use_hint::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic polyveck_use_hint::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<7> polyveck_use_hint::ap_ST_fsm_state1 = "1";
const sc_lv<7> polyveck_use_hint::ap_ST_fsm_state2 = "10";
const sc_lv<7> polyveck_use_hint::ap_ST_fsm_state3 = "100";
const sc_lv<7> polyveck_use_hint::ap_ST_fsm_state4 = "1000";
const sc_lv<7> polyveck_use_hint::ap_ST_fsm_state5 = "10000";
const sc_lv<7> polyveck_use_hint::ap_ST_fsm_state6 = "100000";
const sc_lv<7> polyveck_use_hint::ap_ST_fsm_state7 = "1000000";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_1 = "1";
const sc_lv<1> polyveck_use_hint::ap_const_lv1_0 = "0";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_2 = "10";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_3 = "11";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_4 = "100";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_5 = "101";
const sc_lv<3> polyveck_use_hint::ap_const_lv3_0 = "000";
const sc_lv<1> polyveck_use_hint::ap_const_lv1_1 = "1";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_6 = "110";
const sc_lv<9> polyveck_use_hint::ap_const_lv9_0 = "000000000";
const sc_lv<3> polyveck_use_hint::ap_const_lv3_5 = "101";
const sc_lv<3> polyveck_use_hint::ap_const_lv3_1 = "1";
const sc_lv<8> polyveck_use_hint::ap_const_lv8_0 = "00000000";
const sc_lv<9> polyveck_use_hint::ap_const_lv9_100 = "100000000";
const sc_lv<9> polyveck_use_hint::ap_const_lv9_1 = "1";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_13 = "10011";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_1F = "11111";
const sc_lv<23> polyveck_use_hint::ap_const_lv23_7C00FF = "11111000000000011111111";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_17 = "10111";
const sc_lv<24> polyveck_use_hint::ap_const_lv24_7FE00 = "1111111111000000000";
const sc_lv<24> polyveck_use_hint::ap_const_lv24_0 = "000000000000000000000000";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_3FEFF = "111111111011111111";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_FFFFFFFF = "11111111111111111111111111111111";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_16 = "10110";
const sc_lv<32> polyveck_use_hint::ap_const_lv32_D = "1101";
const sc_lv<24> polyveck_use_hint::ap_const_lv24_7BE102 = "11110111110000100000010";
const sc_lv<24> polyveck_use_hint::ap_const_lv24_7FE001 = "11111111110000000000001";
const sc_lv<4> polyveck_use_hint::ap_const_lv4_F = "1111";
const sc_lv<5> polyveck_use_hint::ap_const_lv5_1 = "1";
const sc_lv<5> polyveck_use_hint::ap_const_lv5_0 = "00000";
const sc_lv<4> polyveck_use_hint::ap_const_lv4_0 = "0000";
const sc_lv<5> polyveck_use_hint::ap_const_lv5_1F = "11111";
const sc_lv<5> polyveck_use_hint::ap_const_lv5_F = "1111";
const bool polyveck_use_hint::ap_const_boolean_1 = true;

polyveck_use_hint::polyveck_use_hint(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a0_fu_357_p2);
    sensitive << ( tmp_251_i_i_fu_352_p2 );
    sensitive << ( tmp_250_i_i_cast_fu_349_p1 );

    SC_METHOD(thread_a1_fu_333_p2);
    sensitive << ( tmp_29_fu_313_p4 );
    sensitive << ( tmp_30_fu_323_p1 );

    SC_METHOD(thread_a_assign_4_fu_269_p2);
    sensitive << ( t_1_i_i_fu_264_p2 );
    sensitive << ( t_11_cast_fu_261_p1 );

    SC_METHOD(thread_a_assign_5_fu_327_p2);
    sensitive << ( tmp5_cast_fu_309_p1 );
    sensitive << ( tmp_249_i_i_cast_fu_291_p1 );

    SC_METHOD(thread_a_assign_7_cast6_fu_369_p1);
    sensitive << ( a1_reg_486 );

    SC_METHOD(thread_a_assign_7_cast_fu_372_p1);
    sensitive << ( a1_reg_486 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_143_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_143_p2 );

    SC_METHOD(thread_h_vec_coeffs_address0);
    sensitive << ( tmp_64_cast_reg_464 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_h_vec_coeffs_ce0);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_i_14_fu_149_p2);
    sensitive << ( i_reg_121 );

    SC_METHOD(thread_j_6_fu_173_p2);
    sensitive << ( j_reg_132 );

    SC_METHOD(thread_sel_tmp1_fu_421_p2);
    sensitive << ( h_vec_coeffs_q0 );
    sensitive << ( tmp_1_i_reg_504 );

    SC_METHOD(thread_sel_tmp2_fu_426_p3);
    sensitive << ( sel_tmp1_fu_421_p2 );
    sensitive << ( tmp_4_i_cast_fu_394_p1 );
    sensitive << ( tmp_7_i_cast_fu_417_p1 );

    SC_METHOD(thread_t_11_cast_fu_261_p1);
    sensitive << ( t_9_reg_480 );

    SC_METHOD(thread_t_1_i_i_fu_264_p2);
    sensitive << ( u_vec_coeffs_load_reg_475 );

    SC_METHOD(thread_t_8_fu_233_p2);
    sensitive << ( tmp4_cast_fu_229_p1 );
    sensitive << ( t_cast_fu_197_p1 );

    SC_METHOD(thread_t_9_fu_255_p2);
    sensitive << ( t_8_fu_233_p2 );
    sensitive << ( tmp_248_i_i_cast_cas_fu_247_p3 );

    SC_METHOD(thread_t_cast_fu_197_p1);
    sensitive << ( t_fu_193_p1 );

    SC_METHOD(thread_t_fu_193_p1);
    sensitive << ( u_vec_coeffs_q0 );

    SC_METHOD(thread_tmp4_cast_fu_229_p1);
    sensitive << ( tmp4_fu_223_p2 );

    SC_METHOD(thread_tmp4_fu_223_p2);
    sensitive << ( tmp_i_i_cast_fu_219_p1 );

    SC_METHOD(thread_tmp5_cast_fu_309_p1);
    sensitive << ( tmp5_fu_303_p2 );

    SC_METHOD(thread_tmp5_fu_303_p2);
    sensitive << ( tmp_61_fu_295_p3 );

    SC_METHOD(thread_tmp_1_i_fu_363_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( a0_fu_357_p2 );

    SC_METHOD(thread_tmp_248_i_i_cast_cas_fu_247_p3);
    sensitive << ( tmp_59_fu_239_p3 );

    SC_METHOD(thread_tmp_249_i_i_cast_fu_291_p1);
    sensitive << ( tmp_60_fu_281_p4 );

    SC_METHOD(thread_tmp_250_i_i_cast_fu_349_p1);
    sensitive << ( tmp_250_i_i_reg_494 );

    SC_METHOD(thread_tmp_251_i_i_fu_352_p2);
    sensitive << ( t_9_reg_480 );

    SC_METHOD(thread_tmp_29_fu_313_p4);
    sensitive << ( a_assign_4_fu_269_p2 );

    SC_METHOD(thread_tmp_2_i_fu_375_p2);
    sensitive << ( a1_reg_486 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_tmp_30_fu_323_p1);
    sensitive << ( tmp5_fu_303_p2 );

    SC_METHOD(thread_tmp_34_cast_fu_179_p1);
    sensitive << ( j_reg_132 );

    SC_METHOD(thread_tmp_3_i_fu_380_p2);
    sensitive << ( a_assign_7_cast_fu_372_p1 );

    SC_METHOD(thread_tmp_4_i_cast_fu_394_p1);
    sensitive << ( tmp_4_i_fu_386_p3 );

    SC_METHOD(thread_tmp_4_i_fu_386_p3);
    sensitive << ( tmp_2_i_fu_375_p2 );
    sensitive << ( tmp_3_i_fu_380_p2 );

    SC_METHOD(thread_tmp_56_fu_155_p3);
    sensitive << ( i_reg_121 );

    SC_METHOD(thread_tmp_57_fu_183_p2);
    sensitive << ( tmp_63_cast_reg_451 );
    sensitive << ( tmp_34_cast_fu_179_p1 );

    SC_METHOD(thread_tmp_58_fu_201_p4);
    sensitive << ( u_vec_coeffs_q0 );

    SC_METHOD(thread_tmp_59_fu_239_p3);
    sensitive << ( t_8_fu_233_p2 );

    SC_METHOD(thread_tmp_5_i_fu_398_p2);
    sensitive << ( a1_reg_486 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_tmp_60_fu_281_p4);
    sensitive << ( a_assign_4_fu_269_p2 );

    SC_METHOD(thread_tmp_61_fu_295_p3);
    sensitive << ( u_fu_275_p2 );

    SC_METHOD(thread_tmp_63_cast_fu_163_p1);
    sensitive << ( tmp_56_fu_155_p3 );

    SC_METHOD(thread_tmp_64_cast_fu_188_p1);
    sensitive << ( tmp_57_fu_183_p2 );

    SC_METHOD(thread_tmp_6_i_fu_403_p2);
    sensitive << ( a_assign_7_cast_fu_372_p1 );

    SC_METHOD(thread_tmp_7_i_cast_fu_417_p1);
    sensitive << ( tmp_7_i_fu_409_p3 );

    SC_METHOD(thread_tmp_7_i_fu_409_p3);
    sensitive << ( tmp_5_i_fu_398_p2 );
    sensitive << ( tmp_6_i_fu_403_p2 );

    SC_METHOD(thread_tmp_fu_143_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_121 );

    SC_METHOD(thread_tmp_i_i_cast_fu_219_p1);
    sensitive << ( tmp_i_i_fu_211_p3 );

    SC_METHOD(thread_tmp_i_i_fu_211_p3);
    sensitive << ( tmp_58_fu_201_p4 );

    SC_METHOD(thread_tmp_s_fu_167_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( j_reg_132 );

    SC_METHOD(thread_u_fu_275_p2);
    sensitive << ( a_assign_4_fu_269_p2 );

    SC_METHOD(thread_u_vec_coeffs_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_64_cast_fu_188_p1 );

    SC_METHOD(thread_u_vec_coeffs_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_w_vec_coeffs_address0);
    sensitive << ( tmp_64_cast_reg_464 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_w_vec_coeffs_ce0);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_w_vec_coeffs_d0);
    sensitive << ( h_vec_coeffs_q0 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( sel_tmp2_fu_426_p3 );
    sensitive << ( a_assign_7_cast6_fu_369_p1 );

    SC_METHOD(thread_w_vec_coeffs_we0);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_143_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_s_fu_167_p2 );

    ap_CS_fsm = "0000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "polyveck_use_hint_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, w_vec_coeffs_address0, "(port)w_vec_coeffs_address0");
    sc_trace(mVcdFile, w_vec_coeffs_ce0, "(port)w_vec_coeffs_ce0");
    sc_trace(mVcdFile, w_vec_coeffs_we0, "(port)w_vec_coeffs_we0");
    sc_trace(mVcdFile, w_vec_coeffs_d0, "(port)w_vec_coeffs_d0");
    sc_trace(mVcdFile, u_vec_coeffs_address0, "(port)u_vec_coeffs_address0");
    sc_trace(mVcdFile, u_vec_coeffs_ce0, "(port)u_vec_coeffs_ce0");
    sc_trace(mVcdFile, u_vec_coeffs_q0, "(port)u_vec_coeffs_q0");
    sc_trace(mVcdFile, h_vec_coeffs_address0, "(port)h_vec_coeffs_address0");
    sc_trace(mVcdFile, h_vec_coeffs_ce0, "(port)h_vec_coeffs_ce0");
    sc_trace(mVcdFile, h_vec_coeffs_q0, "(port)h_vec_coeffs_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_14_fu_149_p2, "i_14_fu_149_p2");
    sc_trace(mVcdFile, i_14_reg_446, "i_14_reg_446");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, tmp_63_cast_fu_163_p1, "tmp_63_cast_fu_163_p1");
    sc_trace(mVcdFile, tmp_63_cast_reg_451, "tmp_63_cast_reg_451");
    sc_trace(mVcdFile, tmp_fu_143_p2, "tmp_fu_143_p2");
    sc_trace(mVcdFile, j_6_fu_173_p2, "j_6_fu_173_p2");
    sc_trace(mVcdFile, j_6_reg_459, "j_6_reg_459");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_64_cast_fu_188_p1, "tmp_64_cast_fu_188_p1");
    sc_trace(mVcdFile, tmp_64_cast_reg_464, "tmp_64_cast_reg_464");
    sc_trace(mVcdFile, tmp_s_fu_167_p2, "tmp_s_fu_167_p2");
    sc_trace(mVcdFile, u_vec_coeffs_load_reg_475, "u_vec_coeffs_load_reg_475");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, t_9_fu_255_p2, "t_9_fu_255_p2");
    sc_trace(mVcdFile, t_9_reg_480, "t_9_reg_480");
    sc_trace(mVcdFile, a1_fu_333_p2, "a1_fu_333_p2");
    sc_trace(mVcdFile, a1_reg_486, "a1_reg_486");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, tmp_250_i_i_reg_494, "tmp_250_i_i_reg_494");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, tmp_1_i_fu_363_p2, "tmp_1_i_fu_363_p2");
    sc_trace(mVcdFile, tmp_1_i_reg_504, "tmp_1_i_reg_504");
    sc_trace(mVcdFile, i_reg_121, "i_reg_121");
    sc_trace(mVcdFile, j_reg_132, "j_reg_132");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, tmp_56_fu_155_p3, "tmp_56_fu_155_p3");
    sc_trace(mVcdFile, tmp_34_cast_fu_179_p1, "tmp_34_cast_fu_179_p1");
    sc_trace(mVcdFile, tmp_57_fu_183_p2, "tmp_57_fu_183_p2");
    sc_trace(mVcdFile, t_fu_193_p1, "t_fu_193_p1");
    sc_trace(mVcdFile, tmp_58_fu_201_p4, "tmp_58_fu_201_p4");
    sc_trace(mVcdFile, tmp_i_i_fu_211_p3, "tmp_i_i_fu_211_p3");
    sc_trace(mVcdFile, tmp_i_i_cast_fu_219_p1, "tmp_i_i_cast_fu_219_p1");
    sc_trace(mVcdFile, tmp4_fu_223_p2, "tmp4_fu_223_p2");
    sc_trace(mVcdFile, tmp4_cast_fu_229_p1, "tmp4_cast_fu_229_p1");
    sc_trace(mVcdFile, t_cast_fu_197_p1, "t_cast_fu_197_p1");
    sc_trace(mVcdFile, t_8_fu_233_p2, "t_8_fu_233_p2");
    sc_trace(mVcdFile, tmp_59_fu_239_p3, "tmp_59_fu_239_p3");
    sc_trace(mVcdFile, tmp_248_i_i_cast_cas_fu_247_p3, "tmp_248_i_i_cast_cas_fu_247_p3");
    sc_trace(mVcdFile, t_1_i_i_fu_264_p2, "t_1_i_i_fu_264_p2");
    sc_trace(mVcdFile, t_11_cast_fu_261_p1, "t_11_cast_fu_261_p1");
    sc_trace(mVcdFile, a_assign_4_fu_269_p2, "a_assign_4_fu_269_p2");
    sc_trace(mVcdFile, tmp_60_fu_281_p4, "tmp_60_fu_281_p4");
    sc_trace(mVcdFile, u_fu_275_p2, "u_fu_275_p2");
    sc_trace(mVcdFile, tmp_61_fu_295_p3, "tmp_61_fu_295_p3");
    sc_trace(mVcdFile, tmp5_fu_303_p2, "tmp5_fu_303_p2");
    sc_trace(mVcdFile, tmp5_cast_fu_309_p1, "tmp5_cast_fu_309_p1");
    sc_trace(mVcdFile, tmp_249_i_i_cast_fu_291_p1, "tmp_249_i_i_cast_fu_291_p1");
    sc_trace(mVcdFile, tmp_29_fu_313_p4, "tmp_29_fu_313_p4");
    sc_trace(mVcdFile, tmp_30_fu_323_p1, "tmp_30_fu_323_p1");
    sc_trace(mVcdFile, a_assign_5_fu_327_p2, "a_assign_5_fu_327_p2");
    sc_trace(mVcdFile, tmp_251_i_i_fu_352_p2, "tmp_251_i_i_fu_352_p2");
    sc_trace(mVcdFile, tmp_250_i_i_cast_fu_349_p1, "tmp_250_i_i_cast_fu_349_p1");
    sc_trace(mVcdFile, a0_fu_357_p2, "a0_fu_357_p2");
    sc_trace(mVcdFile, a_assign_7_cast_fu_372_p1, "a_assign_7_cast_fu_372_p1");
    sc_trace(mVcdFile, tmp_2_i_fu_375_p2, "tmp_2_i_fu_375_p2");
    sc_trace(mVcdFile, tmp_3_i_fu_380_p2, "tmp_3_i_fu_380_p2");
    sc_trace(mVcdFile, tmp_4_i_fu_386_p3, "tmp_4_i_fu_386_p3");
    sc_trace(mVcdFile, tmp_5_i_fu_398_p2, "tmp_5_i_fu_398_p2");
    sc_trace(mVcdFile, tmp_6_i_fu_403_p2, "tmp_6_i_fu_403_p2");
    sc_trace(mVcdFile, tmp_7_i_fu_409_p3, "tmp_7_i_fu_409_p3");
    sc_trace(mVcdFile, sel_tmp1_fu_421_p2, "sel_tmp1_fu_421_p2");
    sc_trace(mVcdFile, tmp_4_i_cast_fu_394_p1, "tmp_4_i_cast_fu_394_p1");
    sc_trace(mVcdFile, tmp_7_i_cast_fu_417_p1, "tmp_7_i_cast_fu_417_p1");
    sc_trace(mVcdFile, sel_tmp2_fu_426_p3, "sel_tmp2_fu_426_p3");
    sc_trace(mVcdFile, a_assign_7_cast6_fu_369_p1, "a_assign_7_cast6_fu_369_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

polyveck_use_hint::~polyveck_use_hint() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void polyveck_use_hint::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(tmp_s_fu_167_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        i_reg_121 = i_14_reg_446.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_121 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(tmp_fu_143_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        j_reg_132 = ap_const_lv9_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        j_reg_132 = j_6_reg_459.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        a1_reg_486 = a1_fu_333_p2.read();
        tmp_250_i_i_reg_494 = a_assign_5_fu_327_p2.read().range(13, 4);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_14_reg_446 = i_14_fu_149_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_6_reg_459 = j_6_fu_173_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        t_9_reg_480 = t_9_fu_255_p2.read();
        u_vec_coeffs_load_reg_475 = u_vec_coeffs_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        tmp_1_i_reg_504 = tmp_1_i_fu_363_p2.read();
    }
    if ((esl_seteq<1,1,1>(tmp_fu_143_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        tmp_63_cast_reg_451 = tmp_63_cast_fu_163_p1.read();
    }
    if ((esl_seteq<1,1,1>(tmp_s_fu_167_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        tmp_64_cast_reg_464 = tmp_64_cast_fu_188_p1.read();
    }
}

void polyveck_use_hint::thread_a0_fu_357_p2() {
    a0_fu_357_p2 = (!tmp_251_i_i_fu_352_p2.read().is_01() || !tmp_250_i_i_cast_fu_349_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(tmp_251_i_i_fu_352_p2.read()) - sc_biguint<24>(tmp_250_i_i_cast_fu_349_p1.read()));
}

void polyveck_use_hint::thread_a1_fu_333_p2() {
    a1_fu_333_p2 = (!tmp_29_fu_313_p4.read().is_01() || !tmp_30_fu_323_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_29_fu_313_p4.read()) + sc_biguint<4>(tmp_30_fu_323_p1.read()));
}

void polyveck_use_hint::thread_a_assign_4_fu_269_p2() {
    a_assign_4_fu_269_p2 = (!t_1_i_i_fu_264_p2.read().is_01() || !t_11_cast_fu_261_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t_1_i_i_fu_264_p2.read()) - sc_bigint<32>(t_11_cast_fu_261_p1.read()));
}

void polyveck_use_hint::thread_a_assign_5_fu_327_p2() {
    a_assign_5_fu_327_p2 = (!tmp5_cast_fu_309_p1.read().is_01() || !tmp_249_i_i_cast_fu_291_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp5_cast_fu_309_p1.read()) + sc_biguint<14>(tmp_249_i_i_cast_fu_291_p1.read()));
}

void polyveck_use_hint::thread_a_assign_7_cast6_fu_369_p1() {
    a_assign_7_cast6_fu_369_p1 = esl_zext<6,4>(a1_reg_486.read());
}

void polyveck_use_hint::thread_a_assign_7_cast_fu_372_p1() {
    a_assign_7_cast_fu_372_p1 = esl_zext<5,4>(a1_reg_486.read());
}

void polyveck_use_hint::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void polyveck_use_hint::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void polyveck_use_hint::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void polyveck_use_hint::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void polyveck_use_hint::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void polyveck_use_hint::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void polyveck_use_hint::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void polyveck_use_hint::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(tmp_fu_143_p2.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void polyveck_use_hint::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void polyveck_use_hint::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(tmp_fu_143_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void polyveck_use_hint::thread_h_vec_coeffs_address0() {
    h_vec_coeffs_address0 =  (sc_lv<11>) (tmp_64_cast_reg_464.read());
}

void polyveck_use_hint::thread_h_vec_coeffs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        h_vec_coeffs_ce0 = ap_const_logic_1;
    } else {
        h_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void polyveck_use_hint::thread_i_14_fu_149_p2() {
    i_14_fu_149_p2 = (!i_reg_121.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_reg_121.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void polyveck_use_hint::thread_j_6_fu_173_p2() {
    j_6_fu_173_p2 = (!j_reg_132.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(j_reg_132.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void polyveck_use_hint::thread_sel_tmp1_fu_421_p2() {
    sel_tmp1_fu_421_p2 = (tmp_1_i_reg_504.read() & h_vec_coeffs_q0.read());
}

void polyveck_use_hint::thread_sel_tmp2_fu_426_p3() {
    sel_tmp2_fu_426_p3 = (!sel_tmp1_fu_421_p2.read()[0].is_01())? sc_lv<6>(): ((sel_tmp1_fu_421_p2.read()[0].to_bool())? tmp_4_i_cast_fu_394_p1.read(): tmp_7_i_cast_fu_417_p1.read());
}

void polyveck_use_hint::thread_t_11_cast_fu_261_p1() {
    t_11_cast_fu_261_p1 = esl_sext<32,24>(t_9_reg_480.read());
}

void polyveck_use_hint::thread_t_1_i_i_fu_264_p2() {
    t_1_i_i_fu_264_p2 = (!ap_const_lv32_3FEFF.is_01() || !u_vec_coeffs_load_reg_475.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_3FEFF) + sc_biguint<32>(u_vec_coeffs_load_reg_475.read()));
}

void polyveck_use_hint::thread_t_8_fu_233_p2() {
    t_8_fu_233_p2 = (!tmp4_cast_fu_229_p1.read().is_01() || !t_cast_fu_197_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp4_cast_fu_229_p1.read()) + sc_biguint<24>(t_cast_fu_197_p1.read()));
}

void polyveck_use_hint::thread_t_9_fu_255_p2() {
    t_9_fu_255_p2 = (!tmp_248_i_i_cast_cas_fu_247_p3.read().is_01() || !t_8_fu_233_p2.read().is_01())? sc_lv<24>(): (sc_biguint<24>(tmp_248_i_i_cast_cas_fu_247_p3.read()) + sc_biguint<24>(t_8_fu_233_p2.read()));
}

void polyveck_use_hint::thread_t_cast_fu_197_p1() {
    t_cast_fu_197_p1 = esl_zext<24,19>(t_fu_193_p1.read());
}

void polyveck_use_hint::thread_t_fu_193_p1() {
    t_fu_193_p1 = u_vec_coeffs_q0.read().range(19-1, 0);
}

void polyveck_use_hint::thread_tmp4_cast_fu_229_p1() {
    tmp4_cast_fu_229_p1 = esl_sext<24,23>(tmp4_fu_223_p2.read());
}

void polyveck_use_hint::thread_tmp4_fu_223_p2() {
    tmp4_fu_223_p2 = (!ap_const_lv23_7C00FF.is_01() || !tmp_i_i_cast_fu_219_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(ap_const_lv23_7C00FF) + sc_biguint<23>(tmp_i_i_cast_fu_219_p1.read()));
}

void polyveck_use_hint::thread_tmp5_cast_fu_309_p1() {
    tmp5_cast_fu_309_p1 = esl_zext<14,1>(tmp5_fu_303_p2.read());
}

void polyveck_use_hint::thread_tmp5_fu_303_p2() {
    tmp5_fu_303_p2 = (tmp_61_fu_295_p3.read() ^ ap_const_lv1_1);
}

void polyveck_use_hint::thread_tmp_1_i_fu_363_p2() {
    tmp_1_i_fu_363_p2 = (!a0_fu_357_p2.read().is_01() || !ap_const_lv24_7FE001.is_01())? sc_lv<1>(): (sc_biguint<24>(a0_fu_357_p2.read()) > sc_biguint<24>(ap_const_lv24_7FE001));
}

void polyveck_use_hint::thread_tmp_248_i_i_cast_cas_fu_247_p3() {
    tmp_248_i_i_cast_cas_fu_247_p3 = (!tmp_59_fu_239_p3.read()[0].is_01())? sc_lv<24>(): ((tmp_59_fu_239_p3.read()[0].to_bool())? ap_const_lv24_7FE00: ap_const_lv24_0);
}

void polyveck_use_hint::thread_tmp_249_i_i_cast_fu_291_p1() {
    tmp_249_i_i_cast_fu_291_p1 = esl_zext<14,13>(tmp_60_fu_281_p4.read());
}

void polyveck_use_hint::thread_tmp_250_i_i_cast_fu_349_p1() {
    tmp_250_i_i_cast_fu_349_p1 = esl_zext<24,10>(tmp_250_i_i_reg_494.read());
}

void polyveck_use_hint::thread_tmp_251_i_i_fu_352_p2() {
    tmp_251_i_i_fu_352_p2 = (!ap_const_lv24_7BE102.is_01() || !t_9_reg_480.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_7BE102) + sc_bigint<24>(t_9_reg_480.read()));
}

void polyveck_use_hint::thread_tmp_29_fu_313_p4() {
    tmp_29_fu_313_p4 = a_assign_4_fu_269_p2.read().range(22, 19);
}

void polyveck_use_hint::thread_tmp_2_i_fu_375_p2() {
    tmp_2_i_fu_375_p2 = (!a1_reg_486.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(a1_reg_486.read() == ap_const_lv4_F);
}

void polyveck_use_hint::thread_tmp_30_fu_323_p1() {
    tmp_30_fu_323_p1 = esl_zext<4,1>(tmp5_fu_303_p2.read());
}

void polyveck_use_hint::thread_tmp_34_cast_fu_179_p1() {
    tmp_34_cast_fu_179_p1 = esl_zext<12,9>(j_reg_132.read());
}

void polyveck_use_hint::thread_tmp_3_i_fu_380_p2() {
    tmp_3_i_fu_380_p2 = (!ap_const_lv5_1.is_01() || !a_assign_7_cast_fu_372_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(a_assign_7_cast_fu_372_p1.read()));
}

void polyveck_use_hint::thread_tmp_4_i_cast_fu_394_p1() {
    tmp_4_i_cast_fu_394_p1 = esl_zext<6,5>(tmp_4_i_fu_386_p3.read());
}

void polyveck_use_hint::thread_tmp_4_i_fu_386_p3() {
    tmp_4_i_fu_386_p3 = (!tmp_2_i_fu_375_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_2_i_fu_375_p2.read()[0].to_bool())? ap_const_lv5_0: tmp_3_i_fu_380_p2.read());
}

void polyveck_use_hint::thread_tmp_56_fu_155_p3() {
    tmp_56_fu_155_p3 = esl_concat<3,8>(i_reg_121.read(), ap_const_lv8_0);
}

void polyveck_use_hint::thread_tmp_57_fu_183_p2() {
    tmp_57_fu_183_p2 = (!tmp_34_cast_fu_179_p1.read().is_01() || !tmp_63_cast_reg_451.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_34_cast_fu_179_p1.read()) + sc_biguint<12>(tmp_63_cast_reg_451.read()));
}

void polyveck_use_hint::thread_tmp_58_fu_201_p4() {
    tmp_58_fu_201_p4 = u_vec_coeffs_q0.read().range(31, 19);
}

void polyveck_use_hint::thread_tmp_59_fu_239_p3() {
    tmp_59_fu_239_p3 = t_8_fu_233_p2.read().range(23, 23);
}

void polyveck_use_hint::thread_tmp_5_i_fu_398_p2() {
    tmp_5_i_fu_398_p2 = (!a1_reg_486.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(a1_reg_486.read() == ap_const_lv4_0);
}

void polyveck_use_hint::thread_tmp_60_fu_281_p4() {
    tmp_60_fu_281_p4 = a_assign_4_fu_269_p2.read().range(31, 19);
}

void polyveck_use_hint::thread_tmp_61_fu_295_p3() {
    tmp_61_fu_295_p3 = u_fu_275_p2.read().range(31, 31);
}

void polyveck_use_hint::thread_tmp_63_cast_fu_163_p1() {
    tmp_63_cast_fu_163_p1 = esl_zext<12,11>(tmp_56_fu_155_p3.read());
}

void polyveck_use_hint::thread_tmp_64_cast_fu_188_p1() {
    tmp_64_cast_fu_188_p1 = esl_zext<64,12>(tmp_57_fu_183_p2.read());
}

void polyveck_use_hint::thread_tmp_6_i_fu_403_p2() {
    tmp_6_i_fu_403_p2 = (!ap_const_lv5_1F.is_01() || !a_assign_7_cast_fu_372_p1.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1F) + sc_biguint<5>(a_assign_7_cast_fu_372_p1.read()));
}

void polyveck_use_hint::thread_tmp_7_i_cast_fu_417_p1() {
    tmp_7_i_cast_fu_417_p1 = esl_sext<6,5>(tmp_7_i_fu_409_p3.read());
}

void polyveck_use_hint::thread_tmp_7_i_fu_409_p3() {
    tmp_7_i_fu_409_p3 = (!tmp_5_i_fu_398_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_5_i_fu_398_p2.read()[0].to_bool())? ap_const_lv5_F: tmp_6_i_fu_403_p2.read());
}

void polyveck_use_hint::thread_tmp_fu_143_p2() {
    tmp_fu_143_p2 = (!i_reg_121.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_121.read() == ap_const_lv3_5);
}

void polyveck_use_hint::thread_tmp_i_i_cast_fu_219_p1() {
    tmp_i_i_cast_fu_219_p1 = esl_zext<23,22>(tmp_i_i_fu_211_p3.read());
}

void polyveck_use_hint::thread_tmp_i_i_fu_211_p3() {
    tmp_i_i_fu_211_p3 = esl_concat<13,9>(tmp_58_fu_201_p4.read(), ap_const_lv9_0);
}

void polyveck_use_hint::thread_tmp_s_fu_167_p2() {
    tmp_s_fu_167_p2 = (!j_reg_132.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_132.read() == ap_const_lv9_100);
}

void polyveck_use_hint::thread_u_fu_275_p2() {
    u_fu_275_p2 = (!ap_const_lv32_FFFFFFFF.is_01() || !a_assign_4_fu_269_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFFF) + sc_biguint<32>(a_assign_4_fu_269_p2.read()));
}

void polyveck_use_hint::thread_u_vec_coeffs_address0() {
    u_vec_coeffs_address0 =  (sc_lv<11>) (tmp_64_cast_fu_188_p1.read());
}

void polyveck_use_hint::thread_u_vec_coeffs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        u_vec_coeffs_ce0 = ap_const_logic_1;
    } else {
        u_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void polyveck_use_hint::thread_w_vec_coeffs_address0() {
    w_vec_coeffs_address0 =  (sc_lv<11>) (tmp_64_cast_reg_464.read());
}

void polyveck_use_hint::thread_w_vec_coeffs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        w_vec_coeffs_ce0 = ap_const_logic_1;
    } else {
        w_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void polyveck_use_hint::thread_w_vec_coeffs_d0() {
    w_vec_coeffs_d0 = (!h_vec_coeffs_q0.read()[0].is_01())? sc_lv<6>(): ((h_vec_coeffs_q0.read()[0].to_bool())? sel_tmp2_fu_426_p3.read(): a_assign_7_cast6_fu_369_p1.read());
}

void polyveck_use_hint::thread_w_vec_coeffs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        w_vec_coeffs_we0 = ap_const_logic_1;
    } else {
        w_vec_coeffs_we0 = ap_const_logic_0;
    }
}

void polyveck_use_hint::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(tmp_fu_143_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(tmp_s_fu_167_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm = "XXXXXXX";
            break;
    }
}

}

