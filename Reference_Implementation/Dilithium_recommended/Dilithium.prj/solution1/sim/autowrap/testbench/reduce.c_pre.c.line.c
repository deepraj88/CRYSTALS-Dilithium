#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.c"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.c"
#pragma line 1 "/opt/Xilinx2018/Vivado/2018.2/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/include/stdint.h" 1 3 4
#pragma line 9 "/opt/Xilinx2018/Vivado/2018.2/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/include/stdint.h" 3 4
#pragma line 1 "/usr/include/stdint.h" 1 3 4
#pragma line 26 "/usr/include/stdint.h" 3 4
#pragma line 1 "/usr/include/features.h" 1 3 4
#pragma line 361 "/usr/include/features.h" 3 4
#pragma line 1 "/usr/include/sys/cdefs.h" 1 3 4
#pragma line 373 "/usr/include/sys/cdefs.h" 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 374 "/usr/include/sys/cdefs.h" 2 3 4
#pragma line 362 "/usr/include/features.h" 2 3 4
#pragma line 385 "/usr/include/features.h" 3 4
#pragma line 1 "/usr/include/gnu/stubs.h" 1 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 5 "/usr/include/gnu/stubs.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/gnu/stubs-64.h" 1 3 4
#pragma line 10 "/usr/include/gnu/stubs.h" 2 3 4
#pragma line 386 "/usr/include/features.h" 2 3 4
#pragma line 27 "/usr/include/stdint.h" 2 3 4
#pragma line 1 "/usr/include/bits/wchar.h" 1 3 4
#pragma line 28 "/usr/include/stdint.h" 2 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 29 "/usr/include/stdint.h" 2 3 4
#pragma line 37 "/usr/include/stdint.h" 3 4
#pragma empty_line
#pragma line 37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
#pragma empty_line
typedef long int int64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
#pragma empty_line
typedef unsigned int uint32_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned long int uint64_t;
#pragma line 66 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;
#pragma empty_line
typedef long int int_least64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
#pragma empty_line
typedef unsigned long int uint_least64_t;
#pragma line 91 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;
#pragma empty_line
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
#pragma line 104 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;
#pragma empty_line
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#pragma line 120 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;
#pragma empty_line
#pragma empty_line
typedef unsigned long int uintptr_t;
#pragma line 135 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
#pragma line 10 "/opt/Xilinx2018/Vivado/2018.2/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/include/stdint.h" 2 3 4
#pragma line 2 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.c" 2
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/params.h" 1
#pragma line 3 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.c" 2
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.h" 1
#pragma line 10 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.h"
#pragma empty_line
#pragma line 10 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.h"
uint32_t montgomery_reduce(uint64_t a);
#pragma empty_line
#pragma empty_line
uint32_t reduce32(uint32_t a);
#pragma empty_line
#pragma empty_line
uint32_t freeze(uint32_t a);
#pragma line 4 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.c" 2
#pragma line 15 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.c"
uint32_t montgomery_reduce(uint64_t a) {
  const uint64_t qinv = 4236238847U;
  uint64_t t;
#pragma empty_line
  t = a * qinv;
  t &= (1UL << 32) - 1;
  t *= 8380417U;
  t = a + t;
  return t >> 32;
}
#pragma line 36 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.c"
uint32_t reduce32(uint32_t a) {
  uint32_t t;
#pragma empty_line
  t = a & 0x7FFFFF;
  a >>= 23;
  t += ((a << 13) - a);
  return t;
}
#pragma line 55 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.c"
uint32_t freeze(uint32_t a) {
  a = reduce32(a);
  a -= 8380417U;
  a += ((int32_t)a >> 31) & 8380417U;
  return a;
}
