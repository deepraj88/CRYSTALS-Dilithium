############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project dilithium_rec.prj
set_top crypto_sign_keypair
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
add_files -tb newtest_sign.c -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
open_solution "keypair"
set_part {xc7a200tfbg676-2}
create_clock -period 10 -name default
source "./dilithium_rec.prj/keypair/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
