// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "polyveck_freeze.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic polyveck_freeze::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic polyveck_freeze::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> polyveck_freeze::ap_ST_fsm_state1 = "1";
const sc_lv<5> polyveck_freeze::ap_ST_fsm_state2 = "10";
const sc_lv<5> polyveck_freeze::ap_ST_fsm_state3 = "100";
const sc_lv<5> polyveck_freeze::ap_ST_fsm_state4 = "1000";
const sc_lv<5> polyveck_freeze::ap_ST_fsm_state5 = "10000";
const sc_lv<32> polyveck_freeze::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> polyveck_freeze::ap_const_lv32_1 = "1";
const sc_lv<1> polyveck_freeze::ap_const_lv1_0 = "0";
const sc_lv<32> polyveck_freeze::ap_const_lv32_2 = "10";
const sc_lv<32> polyveck_freeze::ap_const_lv32_3 = "11";
const sc_lv<3> polyveck_freeze::ap_const_lv3_0 = "000";
const sc_lv<1> polyveck_freeze::ap_const_lv1_1 = "1";
const sc_lv<9> polyveck_freeze::ap_const_lv9_0 = "000000000";
const sc_lv<32> polyveck_freeze::ap_const_lv32_4 = "100";
const sc_lv<3> polyveck_freeze::ap_const_lv3_5 = "101";
const sc_lv<3> polyveck_freeze::ap_const_lv3_1 = "1";
const sc_lv<8> polyveck_freeze::ap_const_lv8_0 = "00000000";
const sc_lv<9> polyveck_freeze::ap_const_lv9_100 = "100000000";
const sc_lv<9> polyveck_freeze::ap_const_lv9_1 = "1";
const sc_lv<32> polyveck_freeze::ap_const_lv32_17 = "10111";
const sc_lv<32> polyveck_freeze::ap_const_lv32_1F = "11111";
const sc_lv<32> polyveck_freeze::ap_const_lv32_A = "1010";
const sc_lv<22> polyveck_freeze::ap_const_lv22_1FFF = "1111111111111";
const sc_lv<10> polyveck_freeze::ap_const_lv10_3FE = "1111111110";
const sc_lv<32> polyveck_freeze::ap_const_lv32_7FE001 = "11111111110000000000001";
const bool polyveck_freeze::ap_const_boolean_1 = true;

polyveck_freeze::polyveck_freeze(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_assign_11_cast_fu_151_p1);
    sensitive << ( tmp_579_fu_141_p4 );

    SC_METHOD(thread_a_assign_s_fu_189_p2);
    sensitive << ( tmp12_fu_181_p3 );
    sensitive << ( tmp_42_i_i_i_cast_fu_171_p1 );

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

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_83_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_83_p2 );

    SC_METHOD(thread_i_23_fu_89_p2);
    sensitive << ( i_reg_61 );

    SC_METHOD(thread_i_24_fu_113_p2);
    sensitive << ( i_i_reg_72 );

    SC_METHOD(thread_t_cast_fu_137_p1);
    sensitive << ( t_fu_133_p1 );

    SC_METHOD(thread_t_fu_133_p1);
    sensitive << ( v_vec_coeffs_q0 );

    SC_METHOD(thread_tmp12_fu_181_p3);
    sensitive << ( tmp_580_fu_175_p2 );

    SC_METHOD(thread_tmp_42_i_i_i_cast_fu_171_p1);
    sensitive << ( tmp_42_i_i_i_fu_165_p2 );

    SC_METHOD(thread_tmp_42_i_i_i_fu_165_p2);
    sensitive << ( t_cast_fu_137_p1 );
    sensitive << ( a_assign_11_cast_fu_151_p1 );

    SC_METHOD(thread_tmp_578_fu_123_p2);
    sensitive << ( tmp_579_cast_reg_224 );
    sensitive << ( tmp_i_cast_fu_119_p1 );

    SC_METHOD(thread_tmp_579_cast_fu_103_p1);
    sensitive << ( tmp_s_fu_95_p3 );

    SC_METHOD(thread_tmp_579_fu_141_p4);
    sensitive << ( v_vec_coeffs_q0 );

    SC_METHOD(thread_tmp_580_cast_fu_128_p1);
    sensitive << ( tmp_578_fu_123_p2 );

    SC_METHOD(thread_tmp_580_fu_175_p2);
    sensitive << ( tmp_i_i_i_fu_155_p4 );

    SC_METHOD(thread_tmp_581_fu_195_p3);
    sensitive << ( a_assign_s_reg_242 );

    SC_METHOD(thread_tmp_fu_83_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_61 );

    SC_METHOD(thread_tmp_i_cast_fu_119_p1);
    sensitive << ( i_i_reg_72 );

    SC_METHOD(thread_tmp_i_fu_107_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( i_i_reg_72 );

    SC_METHOD(thread_tmp_i_i_cast_cast_fu_202_p3);
    sensitive << ( tmp_581_fu_195_p3 );

    SC_METHOD(thread_tmp_i_i_i_fu_155_p4);
    sensitive << ( v_vec_coeffs_q0 );

    SC_METHOD(thread_tmp_s_fu_95_p3);
    sensitive << ( i_reg_61 );

    SC_METHOD(thread_v_vec_coeffs_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( v_vec_coeffs_addr_reg_237 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_580_cast_fu_128_p1 );

    SC_METHOD(thread_v_vec_coeffs_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_v_vec_coeffs_d0);
    sensitive << ( a_assign_s_reg_242 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_i_i_cast_cast_fu_202_p3 );

    SC_METHOD(thread_v_vec_coeffs_we0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_83_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_i_fu_107_p2 );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "polyveck_freeze_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, v_vec_coeffs_address0, "(port)v_vec_coeffs_address0");
    sc_trace(mVcdFile, v_vec_coeffs_ce0, "(port)v_vec_coeffs_ce0");
    sc_trace(mVcdFile, v_vec_coeffs_we0, "(port)v_vec_coeffs_we0");
    sc_trace(mVcdFile, v_vec_coeffs_d0, "(port)v_vec_coeffs_d0");
    sc_trace(mVcdFile, v_vec_coeffs_q0, "(port)v_vec_coeffs_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_23_fu_89_p2, "i_23_fu_89_p2");
    sc_trace(mVcdFile, i_23_reg_219, "i_23_reg_219");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, tmp_579_cast_fu_103_p1, "tmp_579_cast_fu_103_p1");
    sc_trace(mVcdFile, tmp_579_cast_reg_224, "tmp_579_cast_reg_224");
    sc_trace(mVcdFile, tmp_fu_83_p2, "tmp_fu_83_p2");
    sc_trace(mVcdFile, i_24_fu_113_p2, "i_24_fu_113_p2");
    sc_trace(mVcdFile, i_24_reg_232, "i_24_reg_232");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, v_vec_coeffs_addr_reg_237, "v_vec_coeffs_addr_reg_237");
    sc_trace(mVcdFile, tmp_i_fu_107_p2, "tmp_i_fu_107_p2");
    sc_trace(mVcdFile, a_assign_s_fu_189_p2, "a_assign_s_fu_189_p2");
    sc_trace(mVcdFile, a_assign_s_reg_242, "a_assign_s_reg_242");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, i_reg_61, "i_reg_61");
    sc_trace(mVcdFile, i_i_reg_72, "i_i_reg_72");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, tmp_580_cast_fu_128_p1, "tmp_580_cast_fu_128_p1");
    sc_trace(mVcdFile, tmp_s_fu_95_p3, "tmp_s_fu_95_p3");
    sc_trace(mVcdFile, tmp_i_cast_fu_119_p1, "tmp_i_cast_fu_119_p1");
    sc_trace(mVcdFile, tmp_578_fu_123_p2, "tmp_578_fu_123_p2");
    sc_trace(mVcdFile, t_fu_133_p1, "t_fu_133_p1");
    sc_trace(mVcdFile, tmp_579_fu_141_p4, "tmp_579_fu_141_p4");
    sc_trace(mVcdFile, t_cast_fu_137_p1, "t_cast_fu_137_p1");
    sc_trace(mVcdFile, a_assign_11_cast_fu_151_p1, "a_assign_11_cast_fu_151_p1");
    sc_trace(mVcdFile, tmp_42_i_i_i_fu_165_p2, "tmp_42_i_i_i_fu_165_p2");
    sc_trace(mVcdFile, tmp_i_i_i_fu_155_p4, "tmp_i_i_i_fu_155_p4");
    sc_trace(mVcdFile, tmp_580_fu_175_p2, "tmp_580_fu_175_p2");
    sc_trace(mVcdFile, tmp12_fu_181_p3, "tmp12_fu_181_p3");
    sc_trace(mVcdFile, tmp_42_i_i_i_cast_fu_171_p1, "tmp_42_i_i_i_cast_fu_171_p1");
    sc_trace(mVcdFile, tmp_581_fu_195_p3, "tmp_581_fu_195_p3");
    sc_trace(mVcdFile, tmp_i_i_cast_cast_fu_202_p3, "tmp_i_i_cast_cast_fu_202_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

polyveck_freeze::~polyveck_freeze() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void polyveck_freeze::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_i_reg_72 = i_24_reg_232.read();
    } else if ((esl_seteq<1,1,1>(tmp_fu_83_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        i_i_reg_72 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(tmp_i_fu_107_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        i_reg_61 = i_23_reg_219.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_61 = ap_const_lv3_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        a_assign_s_reg_242 = a_assign_s_fu_189_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_23_reg_219 = i_23_fu_89_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        i_24_reg_232 = i_24_fu_113_p2.read();
    }
    if ((esl_seteq<1,1,1>(tmp_fu_83_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        tmp_579_cast_reg_224 = tmp_579_cast_fu_103_p1.read();
    }
    if ((esl_seteq<1,1,1>(tmp_i_fu_107_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        v_vec_coeffs_addr_reg_237 =  (sc_lv<11>) (tmp_580_cast_fu_128_p1.read());
    }
}

void polyveck_freeze::thread_a_assign_11_cast_fu_151_p1() {
    a_assign_11_cast_fu_151_p1 = esl_zext<24,9>(tmp_579_fu_141_p4.read());
}

void polyveck_freeze::thread_a_assign_s_fu_189_p2() {
    a_assign_s_fu_189_p2 = (!tmp12_fu_181_p3.read().is_01() || !tmp_42_i_i_i_cast_fu_171_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp12_fu_181_p3.read()) + sc_bigint<32>(tmp_42_i_i_i_cast_fu_171_p1.read()));
}

void polyveck_freeze::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void polyveck_freeze::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void polyveck_freeze::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void polyveck_freeze::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void polyveck_freeze::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void polyveck_freeze::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(tmp_fu_83_p2.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void polyveck_freeze::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void polyveck_freeze::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(tmp_fu_83_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void polyveck_freeze::thread_i_23_fu_89_p2() {
    i_23_fu_89_p2 = (!i_reg_61.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_reg_61.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void polyveck_freeze::thread_i_24_fu_113_p2() {
    i_24_fu_113_p2 = (!i_i_reg_72.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_i_reg_72.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void polyveck_freeze::thread_t_cast_fu_137_p1() {
    t_cast_fu_137_p1 = esl_zext<24,23>(t_fu_133_p1.read());
}

void polyveck_freeze::thread_t_fu_133_p1() {
    t_fu_133_p1 = v_vec_coeffs_q0.read().range(23-1, 0);
}

void polyveck_freeze::thread_tmp12_fu_181_p3() {
    tmp12_fu_181_p3 = esl_concat<10,22>(ap_const_lv10_3FE, tmp_580_fu_175_p2.read());
}

void polyveck_freeze::thread_tmp_42_i_i_i_cast_fu_171_p1() {
    tmp_42_i_i_i_cast_fu_171_p1 = esl_sext<32,24>(tmp_42_i_i_i_fu_165_p2.read());
}

void polyveck_freeze::thread_tmp_42_i_i_i_fu_165_p2() {
    tmp_42_i_i_i_fu_165_p2 = (!t_cast_fu_137_p1.read().is_01() || !a_assign_11_cast_fu_151_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(t_cast_fu_137_p1.read()) - sc_biguint<24>(a_assign_11_cast_fu_151_p1.read()));
}

void polyveck_freeze::thread_tmp_578_fu_123_p2() {
    tmp_578_fu_123_p2 = (!tmp_i_cast_fu_119_p1.read().is_01() || !tmp_579_cast_reg_224.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_i_cast_fu_119_p1.read()) + sc_biguint<12>(tmp_579_cast_reg_224.read()));
}

void polyveck_freeze::thread_tmp_579_cast_fu_103_p1() {
    tmp_579_cast_fu_103_p1 = esl_zext<12,11>(tmp_s_fu_95_p3.read());
}

void polyveck_freeze::thread_tmp_579_fu_141_p4() {
    tmp_579_fu_141_p4 = v_vec_coeffs_q0.read().range(31, 23);
}

void polyveck_freeze::thread_tmp_580_cast_fu_128_p1() {
    tmp_580_cast_fu_128_p1 = esl_zext<64,12>(tmp_578_fu_123_p2.read());
}

void polyveck_freeze::thread_tmp_580_fu_175_p2() {
    tmp_580_fu_175_p2 = (tmp_i_i_i_fu_155_p4.read() | ap_const_lv22_1FFF);
}

void polyveck_freeze::thread_tmp_581_fu_195_p3() {
    tmp_581_fu_195_p3 = a_assign_s_reg_242.read().range(31, 31);
}

void polyveck_freeze::thread_tmp_fu_83_p2() {
    tmp_fu_83_p2 = (!i_reg_61.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_61.read() == ap_const_lv3_5);
}

void polyveck_freeze::thread_tmp_i_cast_fu_119_p1() {
    tmp_i_cast_fu_119_p1 = esl_zext<12,9>(i_i_reg_72.read());
}

void polyveck_freeze::thread_tmp_i_fu_107_p2() {
    tmp_i_fu_107_p2 = (!i_i_reg_72.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(i_i_reg_72.read() == ap_const_lv9_100);
}

void polyveck_freeze::thread_tmp_i_i_cast_cast_fu_202_p3() {
    tmp_i_i_cast_cast_fu_202_p3 = (!tmp_581_fu_195_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_581_fu_195_p3.read()[0].to_bool())? ap_const_lv32_7FE001: ap_const_lv32_0);
}

void polyveck_freeze::thread_tmp_i_i_i_fu_155_p4() {
    tmp_i_i_i_fu_155_p4 = v_vec_coeffs_q0.read().range(31, 10);
}

void polyveck_freeze::thread_tmp_s_fu_95_p3() {
    tmp_s_fu_95_p3 = esl_concat<3,8>(i_reg_61.read(), ap_const_lv8_0);
}

void polyveck_freeze::thread_v_vec_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        v_vec_coeffs_address0 = v_vec_coeffs_addr_reg_237.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        v_vec_coeffs_address0 =  (sc_lv<11>) (tmp_580_cast_fu_128_p1.read());
    } else {
        v_vec_coeffs_address0 = "XXXXXXXXXXX";
    }
}

void polyveck_freeze::thread_v_vec_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        v_vec_coeffs_ce0 = ap_const_logic_1;
    } else {
        v_vec_coeffs_ce0 = ap_const_logic_0;
    }
}

void polyveck_freeze::thread_v_vec_coeffs_d0() {
    v_vec_coeffs_d0 = (!a_assign_s_reg_242.read().is_01() || !tmp_i_i_cast_cast_fu_202_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(a_assign_s_reg_242.read()) + sc_biguint<32>(tmp_i_i_cast_cast_fu_202_p3.read()));
}

void polyveck_freeze::thread_v_vec_coeffs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        v_vec_coeffs_we0 = ap_const_logic_1;
    } else {
        v_vec_coeffs_we0 = ap_const_logic_0;
    }
}

void polyveck_freeze::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(tmp_fu_83_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(tmp_i_fu_107_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}

