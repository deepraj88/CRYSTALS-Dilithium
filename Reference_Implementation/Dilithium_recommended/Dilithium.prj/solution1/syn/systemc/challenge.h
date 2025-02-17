// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _challenge_HH_
#define _challenge_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "keccak_absorb_2.h"
#include "keccak_squeezeblocks_2.h"
#include "challenge_inbuf.h"
#include "challenge_outbuf.h"
#include "challenge_state.h"

namespace ap_rtl {

struct challenge : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<8> > c_coeffs_address0;
    sc_out< sc_logic > c_coeffs_ce0;
    sc_out< sc_logic > c_coeffs_we0;
    sc_out< sc_lv<23> > c_coeffs_d0;
    sc_in< sc_lv<23> > c_coeffs_q0;
    sc_out< sc_lv<7> > mu_address0;
    sc_out< sc_logic > mu_ce0;
    sc_in< sc_lv<8> > mu_q0;
    sc_out< sc_lv<11> > w1_vec_coeffs_address0;
    sc_out< sc_logic > w1_vec_coeffs_ce0;
    sc_in< sc_lv<32> > w1_vec_coeffs_q0;
    sc_out< sc_lv<11> > w1_vec_coeffs_address1;
    sc_out< sc_logic > w1_vec_coeffs_ce1;
    sc_in< sc_lv<32> > w1_vec_coeffs_q1;


    // Module declarations
    challenge(sc_module_name name);
    SC_HAS_PROCESS(challenge);

    ~challenge();

    sc_trace_file* mVcdFile;

    challenge_inbuf* inbuf_U;
    challenge_outbuf* outbuf_U;
    challenge_state* state_U;
    keccak_absorb_2* grp_keccak_absorb_2_fu_345;
    keccak_squeezeblocks_2* grp_keccak_squeezeblocks_2_fu_353;
    sc_signal< sc_lv<19> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > i_107_fu_367_p2;
    sc_signal< sc_lv<6> > i_107_reg_657;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > tmp_fu_361_p2;
    sc_signal< sc_lv<3> > i_108_fu_397_p2;
    sc_signal< sc_lv<3> > i_108_reg_670;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<11> > p_sum1_cast_fu_417_p1;
    sc_signal< sc_lv<11> > p_sum1_cast_reg_675;
    sc_signal< sc_lv<1> > tmp_209_fu_391_p2;
    sc_signal< sc_lv<8> > i_21_fu_427_p2;
    sc_signal< sc_lv<8> > i_21_reg_683;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > tmp_i_fu_421_p2;
    sc_signal< sc_lv<11> > sum_i_fu_481_p2;
    sc_signal< sc_lv<11> > sum_i_reg_698;
    sc_signal< sc_lv<4> > i_109_fu_519_p2;
    sc_signal< sc_lv<4> > i_109_reg_706;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<1> > tmp_212_fu_513_p2;
    sc_signal< sc_lv<64> > signs_1_fu_556_p2;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<9> > i_110_fu_568_p2;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<1> > tmp_220_fu_585_p2;
    sc_signal< sc_lv<1> > tmp_220_reg_732;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<32> > pos_5_fu_591_p2;
    sc_signal< sc_lv<32> > pos_5_reg_736;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<8> > c_coeffs_addr_1_reg_750;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<1> > tmp_222_fu_606_p2;
    sc_signal< sc_lv<1> > tmp_226_fu_623_p2;
    sc_signal< sc_lv<1> > tmp_226_reg_755;
    sc_signal< sc_lv<64> > mask_2_fu_629_p2;
    sc_signal< sc_lv<64> > mask_2_reg_760;
    sc_signal< sc_lv<9> > i_111_fu_640_p2;
    sc_signal< sc_lv<9> > i_111_reg_765;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<10> > inbuf_address0;
    sc_signal< sc_logic > inbuf_ce0;
    sc_signal< sc_logic > inbuf_we0;
    sc_signal< sc_lv<8> > inbuf_d0;
    sc_signal< sc_lv<8> > inbuf_q0;
    sc_signal< sc_lv<8> > outbuf_address0;
    sc_signal< sc_logic > outbuf_ce0;
    sc_signal< sc_logic > outbuf_we0;
    sc_signal< sc_lv<8> > outbuf_q0;
    sc_signal< sc_lv<5> > state_address0;
    sc_signal< sc_logic > state_ce0;
    sc_signal< sc_logic > state_we0;
    sc_signal< sc_lv<64> > state_d0;
    sc_signal< sc_lv<64> > state_q0;
    sc_signal< sc_lv<5> > state_address1;
    sc_signal< sc_logic > state_ce1;
    sc_signal< sc_logic > state_we1;
    sc_signal< sc_lv<64> > state_d1;
    sc_signal< sc_lv<64> > state_q1;
    sc_signal< sc_logic > grp_keccak_absorb_2_fu_345_ap_start;
    sc_signal< sc_logic > grp_keccak_absorb_2_fu_345_ap_done;
    sc_signal< sc_logic > grp_keccak_absorb_2_fu_345_ap_idle;
    sc_signal< sc_logic > grp_keccak_absorb_2_fu_345_ap_ready;
    sc_signal< sc_lv<5> > grp_keccak_absorb_2_fu_345_s_address0;
    sc_signal< sc_logic > grp_keccak_absorb_2_fu_345_s_ce0;
    sc_signal< sc_logic > grp_keccak_absorb_2_fu_345_s_we0;
    sc_signal< sc_lv<64> > grp_keccak_absorb_2_fu_345_s_d0;
    sc_signal< sc_lv<5> > grp_keccak_absorb_2_fu_345_s_address1;
    sc_signal< sc_logic > grp_keccak_absorb_2_fu_345_s_ce1;
    sc_signal< sc_logic > grp_keccak_absorb_2_fu_345_s_we1;
    sc_signal< sc_lv<64> > grp_keccak_absorb_2_fu_345_s_d1;
    sc_signal< sc_lv<10> > grp_keccak_absorb_2_fu_345_m_address0;
    sc_signal< sc_logic > grp_keccak_absorb_2_fu_345_m_ce0;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_2_fu_353_ap_start;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_2_fu_353_ap_done;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_2_fu_353_ap_idle;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_2_fu_353_ap_ready;
    sc_signal< sc_lv<8> > grp_keccak_squeezeblocks_2_fu_353_h_address0;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_2_fu_353_h_ce0;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_2_fu_353_h_we0;
    sc_signal< sc_lv<8> > grp_keccak_squeezeblocks_2_fu_353_h_d0;
    sc_signal< sc_lv<5> > grp_keccak_squeezeblocks_2_fu_353_s_address0;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_2_fu_353_s_ce0;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_2_fu_353_s_we0;
    sc_signal< sc_lv<64> > grp_keccak_squeezeblocks_2_fu_353_s_d0;
    sc_signal< sc_lv<5> > grp_keccak_squeezeblocks_2_fu_353_s_address1;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_2_fu_353_s_ce1;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_2_fu_353_s_we1;
    sc_signal< sc_lv<64> > grp_keccak_squeezeblocks_2_fu_353_s_d1;
    sc_signal< sc_lv<6> > i_reg_216;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<3> > i_1_reg_228;
    sc_signal< sc_lv<8> > i_i_reg_240;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<4> > i_2_reg_251;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<64> > signs_reg_263;
    sc_signal< sc_lv<9> > i_3_reg_275;
    sc_signal< sc_lv<1> > tmp_218_fu_562_p2;
    sc_signal< sc_lv<9> > i_4_reg_286;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<32> > pos_reg_298;
    sc_signal< sc_lv<64> > mask_reg_310;
    sc_signal< sc_lv<32> > pos_1_reg_322;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<1> > exitcond_fu_579_p2;
    sc_signal< sc_lv<32> > pos_2_reg_333;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< bool > ap_block_state15_on_subcall_done;
    sc_signal< sc_logic > grp_keccak_absorb_2_fu_345_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_2_fu_353_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > sum_cast_fu_381_p1;
    sc_signal< sc_lv<64> > tmp_s_fu_386_p1;
    sc_signal< sc_lv<64> > tmp_239_fu_453_p1;
    sc_signal< sc_lv<64> > tmp_241_fu_472_p1;
    sc_signal< sc_lv<64> > sum_i_cast_fu_509_p1;
    sc_signal< sc_lv<64> > tmp_213_fu_525_p1;
    sc_signal< sc_lv<64> > tmp_219_fu_574_p1;
    sc_signal< sc_lv<64> > tmp_221_fu_597_p1;
    sc_signal< sc_lv<64> > tmp_223_fu_612_p1;
    sc_signal< sc_lv<64> > tmp_224_fu_635_p1;
    sc_signal< sc_lv<8> > tmp_78_i_fu_502_p2;
    sc_signal< sc_lv<23> > tmp_318_cast_cast_ca_fu_646_p3;
    sc_signal< sc_lv<7> > sum1_fu_373_p3;
    sc_signal< sc_lv<10> > tmp_210_fu_403_p3;
    sc_signal< sc_lv<10> > p_sum1_fu_411_p2;
    sc_signal< sc_lv<7> > tmp_235_fu_433_p1;
    sc_signal< sc_lv<11> > tmp_238_fu_443_p4;
    sc_signal< sc_lv<8> > tmp_236_fu_437_p2;
    sc_signal< sc_lv<8> > tmp_76_i_fu_458_p2;
    sc_signal< sc_lv<11> > tmp_240_fu_464_p3;
    sc_signal< sc_lv<11> > tmp_79_i_cast_fu_477_p1;
    sc_signal< sc_lv<4> > tmp_242_fu_490_p1;
    sc_signal< sc_lv<8> > tmp_11_i_fu_494_p3;
    sc_signal< sc_lv<8> > tmp_237_fu_486_p1;
    sc_signal< sc_lv<3> > tmp_234_fu_534_p1;
    sc_signal< sc_lv<6> > tmp_215_fu_538_p3;
    sc_signal< sc_lv<64> > tmp_214_fu_530_p1;
    sc_signal< sc_lv<64> > tmp_216_fu_546_p1;
    sc_signal< sc_lv<64> > tmp_217_fu_550_p2;
    sc_signal< sc_lv<9> > b_cast_fu_602_p1;
    sc_signal< sc_lv<64> > tmp_225_fu_617_p2;
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
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<9> ap_const_lv9_C4;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_E;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<6> ap_const_lv6_30;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<10> ap_const_lv10_30;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<9> ap_const_lv9_100;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<32> ap_const_lv32_87;
    static const sc_lv<23> ap_const_lv23_7FE000;
    static const sc_lv<23> ap_const_lv23_1;
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
    void thread_ap_block_state15_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_b_cast_fu_602_p1();
    void thread_c_coeffs_address0();
    void thread_c_coeffs_ce0();
    void thread_c_coeffs_d0();
    void thread_c_coeffs_we0();
    void thread_exitcond_fu_579_p2();
    void thread_grp_keccak_absorb_2_fu_345_ap_start();
    void thread_grp_keccak_squeezeblocks_2_fu_353_ap_start();
    void thread_i_107_fu_367_p2();
    void thread_i_108_fu_397_p2();
    void thread_i_109_fu_519_p2();
    void thread_i_110_fu_568_p2();
    void thread_i_111_fu_640_p2();
    void thread_i_21_fu_427_p2();
    void thread_inbuf_address0();
    void thread_inbuf_ce0();
    void thread_inbuf_d0();
    void thread_inbuf_we0();
    void thread_mask_2_fu_629_p2();
    void thread_mu_address0();
    void thread_mu_ce0();
    void thread_outbuf_address0();
    void thread_outbuf_ce0();
    void thread_outbuf_we0();
    void thread_p_sum1_cast_fu_417_p1();
    void thread_p_sum1_fu_411_p2();
    void thread_pos_5_fu_591_p2();
    void thread_signs_1_fu_556_p2();
    void thread_state_address0();
    void thread_state_address1();
    void thread_state_ce0();
    void thread_state_ce1();
    void thread_state_d0();
    void thread_state_d1();
    void thread_state_we0();
    void thread_state_we1();
    void thread_sum1_fu_373_p3();
    void thread_sum_cast_fu_381_p1();
    void thread_sum_i_cast_fu_509_p1();
    void thread_sum_i_fu_481_p2();
    void thread_tmp_11_i_fu_494_p3();
    void thread_tmp_209_fu_391_p2();
    void thread_tmp_210_fu_403_p3();
    void thread_tmp_212_fu_513_p2();
    void thread_tmp_213_fu_525_p1();
    void thread_tmp_214_fu_530_p1();
    void thread_tmp_215_fu_538_p3();
    void thread_tmp_216_fu_546_p1();
    void thread_tmp_217_fu_550_p2();
    void thread_tmp_218_fu_562_p2();
    void thread_tmp_219_fu_574_p1();
    void thread_tmp_220_fu_585_p2();
    void thread_tmp_221_fu_597_p1();
    void thread_tmp_222_fu_606_p2();
    void thread_tmp_223_fu_612_p1();
    void thread_tmp_224_fu_635_p1();
    void thread_tmp_225_fu_617_p2();
    void thread_tmp_226_fu_623_p2();
    void thread_tmp_234_fu_534_p1();
    void thread_tmp_235_fu_433_p1();
    void thread_tmp_236_fu_437_p2();
    void thread_tmp_237_fu_486_p1();
    void thread_tmp_238_fu_443_p4();
    void thread_tmp_239_fu_453_p1();
    void thread_tmp_240_fu_464_p3();
    void thread_tmp_241_fu_472_p1();
    void thread_tmp_242_fu_490_p1();
    void thread_tmp_318_cast_cast_ca_fu_646_p3();
    void thread_tmp_76_i_fu_458_p2();
    void thread_tmp_78_i_fu_502_p2();
    void thread_tmp_79_i_cast_fu_477_p1();
    void thread_tmp_fu_361_p2();
    void thread_tmp_i_fu_421_p2();
    void thread_tmp_s_fu_386_p1();
    void thread_w1_vec_coeffs_address0();
    void thread_w1_vec_coeffs_address1();
    void thread_w1_vec_coeffs_ce0();
    void thread_w1_vec_coeffs_ce1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
