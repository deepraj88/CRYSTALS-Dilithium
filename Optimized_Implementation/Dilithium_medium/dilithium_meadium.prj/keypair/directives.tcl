############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_allocation -limit 1 -type function "keccak_absorb" keccak_absorb
set_directive_inline "keccak_absorb"
set_directive_allocation -limit 1 -type function "keccak_squeezeblocks" keccak_squeezeblocks
set_directive_inline "keccak_squeezeblocks"
set_directive_unroll -factor 128 "ntt/ntt_label3"
set_directive_unroll -factor 128 "invntt_frominvmont/invntt_frominvmont_label3"
set_directive_unroll -factor 128 "polyvecl_pointwise_acc_invmontgomery/polyvecl_pointwise_acc_invmontgomery_label17"
set_directive_unroll -factor 128 "polyvecl_pointwise_acc_invmontgomery/polyvecl_pointwise_acc_invmontgomery_label18"
set_directive_unroll -factor 128 "poly_freeze/poly_freeze_label4"
set_directive_unroll -factor 128 "poly_add/poly_add_label22"
set_directive_unroll -factor 128 "rej_eta/rej_eta_label26"
set_directive_pipeline "poly_freeze/poly_freeze_label4"
set_directive_pipeline "poly_add/poly_add_label22"
