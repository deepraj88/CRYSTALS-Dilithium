// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _polyveck_freeze_HH_
#define _polyveck_freeze_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct polyveck_freeze : public sc_module {
    // Port declarations 11
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<11> > v_vec_coeffs_address0;
    sc_out< sc_logic > v_vec_coeffs_ce0;
    sc_out< sc_logic > v_vec_coeffs_we0;
    sc_out< sc_lv<32> > v_vec_coeffs_d0;
    sc_in< sc_lv<32> > v_vec_coeffs_q0;


    // Module declarations
    polyveck_freeze(sc_module_name name);
    SC_HAS_PROCESS(polyveck_freeze);

    ~polyveck_freeze();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > i_15_fu_89_p2;
    sc_signal< sc_lv<3> > i_15_reg_219;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<12> > tmp_68_cast_fu_103_p1;
    sc_signal< sc_lv<12> > tmp_68_cast_reg_224;
    sc_signal< sc_lv<1> > tmp_fu_83_p2;
    sc_signal< sc_lv<9> > i_16_fu_113_p2;
    sc_signal< sc_lv<9> > i_16_reg_232;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<11> > v_vec_coeffs_addr_reg_237;
    sc_signal< sc_lv<1> > tmp_i_fu_107_p2;
    sc_signal< sc_lv<32> > a_assign_9_fu_189_p2;
    sc_signal< sc_lv<32> > a_assign_9_reg_242;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<3> > i_reg_61;
    sc_signal< sc_lv<9> > i_i_reg_72;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > tmp_69_cast_fu_128_p1;
    sc_signal< sc_lv<11> > tmp_s_fu_95_p3;
    sc_signal< sc_lv<12> > tmp_i_cast_fu_119_p1;
    sc_signal< sc_lv<12> > tmp_61_fu_123_p2;
    sc_signal< sc_lv<23> > t_fu_133_p1;
    sc_signal< sc_lv<9> > tmp_62_fu_141_p4;
    sc_signal< sc_lv<24> > t_cast_fu_137_p1;
    sc_signal< sc_lv<24> > a_assign_8_cast_fu_151_p1;
    sc_signal< sc_lv<24> > tmp_41_i_i_i_fu_165_p2;
    sc_signal< sc_lv<22> > tmp_i_i_i_fu_155_p4;
    sc_signal< sc_lv<22> > tmp_63_fu_175_p2;
    sc_signal< sc_lv<32> > tmp12_fu_181_p3;
    sc_signal< sc_lv<32> > tmp_41_i_i_i_cast_fu_171_p1;
    sc_signal< sc_lv<1> > tmp_64_fu_195_p3;
    sc_signal< sc_lv<32> > tmp_i_i_cast_cast_fu_202_p3;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<9> ap_const_lv9_100;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<22> ap_const_lv22_1FFF;
    static const sc_lv<10> ap_const_lv10_3FE;
    static const sc_lv<32> ap_const_lv32_7FE001;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_assign_8_cast_fu_151_p1();
    void thread_a_assign_9_fu_189_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_i_15_fu_89_p2();
    void thread_i_16_fu_113_p2();
    void thread_t_cast_fu_137_p1();
    void thread_t_fu_133_p1();
    void thread_tmp12_fu_181_p3();
    void thread_tmp_41_i_i_i_cast_fu_171_p1();
    void thread_tmp_41_i_i_i_fu_165_p2();
    void thread_tmp_61_fu_123_p2();
    void thread_tmp_62_fu_141_p4();
    void thread_tmp_63_fu_175_p2();
    void thread_tmp_64_fu_195_p3();
    void thread_tmp_68_cast_fu_103_p1();
    void thread_tmp_69_cast_fu_128_p1();
    void thread_tmp_fu_83_p2();
    void thread_tmp_i_cast_fu_119_p1();
    void thread_tmp_i_fu_107_p2();
    void thread_tmp_i_i_cast_cast_fu_202_p3();
    void thread_tmp_i_i_i_fu_155_p4();
    void thread_tmp_s_fu_95_p3();
    void thread_v_vec_coeffs_address0();
    void thread_v_vec_coeffs_ce0();
    void thread_v_vec_coeffs_d0();
    void thread_v_vec_coeffs_we0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
