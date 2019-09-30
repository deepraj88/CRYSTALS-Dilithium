############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_allocation -limit 1 -type function "shake256_squeezeblocks" shake256_squeezeblocks
set_directive_inline "shake256_squeezeblocks"
set_directive_allocation -limit 1 -type function "shake256_absorb" shake256_absorb
set_directive_inline "shake256_absorb"
set_directive_allocation -limit 1 -type function "shake128_absorb" shake128_absorb
set_directive_inline "shake128_absorb"
set_directive_allocation -limit 1 -type function "keccak_absorb" keccak_absorb
set_directive_inline "keccak_absorb"
set_directive_allocation -limit 1 -type function "keccak_squeezeblocks" keccak_squeezeblocks
set_directive_inline "keccak_squeezeblocks"
set_directive_inline "store64"
set_directive_inline "load64"
set_directive_pipeline "poly_shiftl/poly_shiftl_label23"
set_directive_pipeline "poly_uniform/poly_uniform_label24"
set_directive_pipeline "rej_eta/rej_eta_label25"
set_directive_pipeline "rej_gamma1m1/rej_gamma1m1_label26"
set_directive_pipeline "polyeta_pack/polyeta_pack_label27"
set_directive_pipeline "polyeta_unpack/polyeta_unpack_label28"
set_directive_pipeline "polyt1_pack/polyt1_pack_label29"
set_directive_pipeline "polyt0_pack/polyt0_pack_label30"
set_directive_pipeline "polyt0_unpack/polyt0_unpack_label31"
set_directive_pipeline "polyz_pack/polyz_pack_label32"
set_directive_pipeline "polyw1_pack/polyw1_pack_label33"
