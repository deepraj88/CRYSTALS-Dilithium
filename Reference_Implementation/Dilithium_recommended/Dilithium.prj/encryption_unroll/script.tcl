############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Dilithium.prj
set_top crypto_sign
add_files api.h
add_files fips202.c
add_files fips202.h
add_files ntt.c
add_files ntt.h
add_files packing.c
add_files packing.h
add_files params.h
add_files poly.c
add_files poly.h
add_files polyvec.c
add_files polyvec.h
add_files reduce.c
add_files reduce.h
add_files rng.c
add_files rng.h
add_files rounding.c
add_files rounding.h
add_files sign.c
add_files sign.h
add_files -tb aes.c -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb aes.h -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb newtest_sign.c -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
open_solution "encryption_unroll"
set_part {xc7a200tfbg676-2}
create_clock -period 10 -name default
source "./Dilithium.prj/encryption_unroll/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
