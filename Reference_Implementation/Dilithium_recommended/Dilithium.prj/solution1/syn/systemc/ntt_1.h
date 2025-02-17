// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _ntt_1_HH_
#define _ntt_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "ntt_1_zetas.h"

namespace ap_rtl {

struct ntt_1 : public sc_module {
    // Port declarations 12
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > p_address0;
    sc_out< sc_logic > p_ce0;
    sc_out< sc_logic > p_we0;
    sc_out< sc_lv<32> > p_d0;
    sc_in< sc_lv<32> > p_q0;
    sc_in< sc_lv<3> > p_offset;


    // Module declarations
    ntt_1(sc_module_name name);
    SC_HAS_PROCESS(ntt_1);

    ~ntt_1();

    sc_trace_file* mVcdFile;

    ntt_1_zetas* zetas_U;
    sc_signal< sc_lv<13> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > zetas_address0;
    sc_signal< sc_logic > zetas_ce0;
    sc_signal< sc_lv<23> > zetas_q0;
    sc_signal< sc_lv<12> > tmp_99_cast_fu_136_p1;
    sc_signal< sc_lv<12> > tmp_99_cast_reg_370;
    sc_signal< sc_lv<31> > len_cast_cast7_fu_145_p1;
    sc_signal< sc_lv<31> > len_cast_cast7_reg_376;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<30> > tmp_107_fu_155_p1;
    sc_signal< sc_lv<30> > tmp_107_reg_385;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_fu_169_p2;
    sc_signal< sc_lv<29> > len_1_fu_193_p1;
    sc_signal< sc_lv<32> > k_4_fu_197_p2;
    sc_signal< sc_lv<32> > k_4_reg_409;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<30> > tmp_109_fu_207_p1;
    sc_signal< sc_lv<30> > tmp_109_reg_414;
    sc_signal< sc_lv<31> > start_cast_fu_224_p1;
    sc_signal< sc_lv<31> > start_cast_reg_419;
    sc_signal< sc_lv<55> > tmp_136_cast_fu_228_p1;
    sc_signal< sc_lv<55> > tmp_136_cast_reg_424;
    sc_signal< sc_lv<10> > p_addr11_reg_432;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > tmp_75_fu_232_p2;
    sc_signal< sc_lv<10> > p_addr_reg_437;
    sc_signal< sc_lv<30> > j_5_fu_275_p2;
    sc_signal< sc_lv<30> > j_5_reg_442;
    sc_signal< sc_lv<31> > tmp_82_fu_281_p2;
    sc_signal< sc_lv<32> > p_load_reg_452;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<55> > a_assign_fu_292_p2;
    sc_signal< sc_lv<55> > a_assign_reg_457;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > tmp_114_fu_297_p1;
    sc_signal< sc_lv<32> > tmp_114_reg_462;
    sc_signal< sc_lv<32> > t_fu_301_p2;
    sc_signal< sc_lv<32> > t_reg_467;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<55> > t_22_fu_309_p2;
    sc_signal< sc_lv<55> > t_22_reg_472;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<24> > tmp_94_reg_477;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<29> > len_reg_95;
    sc_signal< sc_lv<31> > j_reg_107;
    sc_signal< sc_lv<1> > tmp_fu_149_p2;
    sc_signal< sc_lv<30> > j5_reg_119;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<64> > tmp_72_fu_178_p1;
    sc_signal< sc_lv<64> > tmp_101_cast_fu_256_p1;
    sc_signal< sc_lv<64> > tmp_103_cast_fu_270_p1;
    sc_signal< sc_lv<32> > k_fu_52;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<32> > tmp_80_fu_346_p2;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<32> > tmp_81_fu_356_p2;
    sc_signal< sc_lv<11> > tmp_s_fu_128_p3;
    sc_signal< sc_lv<23> > tmp_108_fu_159_p4;
    sc_signal< sc_lv<28> > tmp_110_fu_183_p4;
    sc_signal< sc_lv<31> > tmp_73_fu_202_p2;
    sc_signal< sc_lv<1> > tmp_74_fu_211_p2;
    sc_signal< sc_lv<30> > start_fu_217_p3;
    sc_signal< sc_lv<12> > tmp_112_fu_241_p1;
    sc_signal< sc_lv<12> > tmp_111_fu_237_p1;
    sc_signal< sc_lv<12> > tmp_113_fu_245_p2;
    sc_signal< sc_lv<12> > tmp_93_fu_251_p2;
    sc_signal< sc_lv<12> > tmp_115_fu_261_p1;
    sc_signal< sc_lv<12> > tmp_95_fu_265_p2;
    sc_signal< sc_lv<23> > a_assign_fu_292_p0;
    sc_signal< sc_lv<32> > a_assign_fu_292_p1;
    sc_signal< sc_lv<32> > t_22_fu_309_p1;
    sc_signal< sc_lv<56> > a_assign_cast1_fu_315_p1;
    sc_signal< sc_lv<56> > t_31_cast_fu_318_p1;
    sc_signal< sc_lv<56> > t_23_fu_321_p2;
    sc_signal< sc_lv<24> > tmp_79_fu_337_p2;
    sc_signal< sc_lv<32> > tmp_143_cast_fu_342_p1;
    sc_signal< sc_lv<32> > t_24_fu_353_p1;
    sc_signal< sc_lv<13> > ap_NS_fsm;
    sc_signal< sc_lv<55> > a_assign_fu_292_p10;
    sc_signal< sc_lv<55> > t_22_fu_309_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<13> ap_ST_fsm_state1;
    static const sc_lv<13> ap_ST_fsm_state2;
    static const sc_lv<13> ap_ST_fsm_state3;
    static const sc_lv<13> ap_ST_fsm_state4;
    static const sc_lv<13> ap_ST_fsm_state5;
    static const sc_lv<13> ap_ST_fsm_state6;
    static const sc_lv<13> ap_ST_fsm_state7;
    static const sc_lv<13> ap_ST_fsm_state8;
    static const sc_lv<13> ap_ST_fsm_state9;
    static const sc_lv<13> ap_ST_fsm_state10;
    static const sc_lv<13> ap_ST_fsm_state11;
    static const sc_lv<13> ap_ST_fsm_state12;
    static const sc_lv<13> ap_ST_fsm_state13;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<29> ap_const_lv29_80;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<29> ap_const_lv29_0;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<30> ap_const_lv30_1;
    static const sc_lv<32> ap_const_lv32_FC7FDFFF;
    static const sc_lv<55> ap_const_lv55_7FE001;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<24> ap_const_lv24_FFC002;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_assign_cast1_fu_315_p1();
    void thread_a_assign_fu_292_p0();
    void thread_a_assign_fu_292_p1();
    void thread_a_assign_fu_292_p10();
    void thread_a_assign_fu_292_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
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
    void thread_icmp_fu_169_p2();
    void thread_j_5_fu_275_p2();
    void thread_k_4_fu_197_p2();
    void thread_len_1_fu_193_p1();
    void thread_len_cast_cast7_fu_145_p1();
    void thread_p_address0();
    void thread_p_ce0();
    void thread_p_d0();
    void thread_p_we0();
    void thread_start_cast_fu_224_p1();
    void thread_start_fu_217_p3();
    void thread_t_22_fu_309_p1();
    void thread_t_22_fu_309_p10();
    void thread_t_22_fu_309_p2();
    void thread_t_23_fu_321_p2();
    void thread_t_24_fu_353_p1();
    void thread_t_31_cast_fu_318_p1();
    void thread_t_fu_301_p2();
    void thread_tmp_101_cast_fu_256_p1();
    void thread_tmp_103_cast_fu_270_p1();
    void thread_tmp_107_fu_155_p1();
    void thread_tmp_108_fu_159_p4();
    void thread_tmp_109_fu_207_p1();
    void thread_tmp_110_fu_183_p4();
    void thread_tmp_111_fu_237_p1();
    void thread_tmp_112_fu_241_p1();
    void thread_tmp_113_fu_245_p2();
    void thread_tmp_114_fu_297_p1();
    void thread_tmp_115_fu_261_p1();
    void thread_tmp_136_cast_fu_228_p1();
    void thread_tmp_143_cast_fu_342_p1();
    void thread_tmp_72_fu_178_p1();
    void thread_tmp_73_fu_202_p2();
    void thread_tmp_74_fu_211_p2();
    void thread_tmp_75_fu_232_p2();
    void thread_tmp_79_fu_337_p2();
    void thread_tmp_80_fu_346_p2();
    void thread_tmp_81_fu_356_p2();
    void thread_tmp_82_fu_281_p2();
    void thread_tmp_93_fu_251_p2();
    void thread_tmp_95_fu_265_p2();
    void thread_tmp_99_cast_fu_136_p1();
    void thread_tmp_fu_149_p2();
    void thread_tmp_s_fu_128_p3();
    void thread_zetas_address0();
    void thread_zetas_ce0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
