# ==============================================================
# File generated on Mon Sep 30 12:51:43 EDT 2019
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../../newtest_sign.c -cflags { -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas}
add_files sign.c
add_files rounding.c
add_files rng.c
add_files reduce.c
add_files polyvec.c
add_files poly.c
add_files packing.c
add_files ntt.c
add_files fips202.c
add_files aes.c
set_part xc7a200tfbg676-2
create_clock -name default -period 10
set_directive_allocation keccak_absorb keccak_absorb -limit 1 -type function
set_directive_inline keccak_absorb 
set_directive_allocation keccak_squeezeblocks keccak_squeezeblocks -limit 1 -type function
set_directive_inline keccak_squeezeblocks 
set_directive_allocation shake256 shake256 -limit 1 -type function
set_directive_inline shake256 
set_directive_unroll ntt/ntt_label2 -factor 128
set_directive_unroll invntt_frominvmont/invntt_frominvmont_label5 -factor 128
set_directive_unroll poly_freeze/poly_freeze_label6 -factor 128
set_directive_pipeline poly_freeze/poly_freeze_label6 
set_directive_unroll poly_add/poly_add_label21 -factor 128
set_directive_pipeline poly_add/poly_add_label21 
set_directive_unroll rej_eta/rej_eta_label25 -factor 128
set_directive_unroll polyvecl_pointwise_acc_invmontgomery/polyvecl_pointwise_acc_invmontgomery_label16 -factor 128
set_directive_unroll polyvecl_pointwise_acc_invmontgomery/polyvecl_pointwise_acc_invmontgomery_label17 -factor 128
