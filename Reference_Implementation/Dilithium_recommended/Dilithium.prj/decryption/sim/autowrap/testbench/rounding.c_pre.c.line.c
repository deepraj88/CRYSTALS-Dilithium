#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/rounding.c"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/rounding.c"
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
#pragma line 2 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/rounding.c" 2
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/params.h" 1
#pragma line 3 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/rounding.c" 2
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
#pragma line 4 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/rounding.c" 2
#pragma line 16 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/rounding.c"
uint32_t power2round(uint32_t a, uint32_t *a0) {
  int32_t t;
#pragma empty_line
  t = a & ((1 << 14U) - 1);
  t -= (1 << (14U -1)) + 1;
  t += (t >> 31) & (1 << 14U);
  t -= (1 << (14U -1)) - 1;
  *a0 = 8380417U + t;
  a = (a - t) >> 14U;
  return a;
}
#pragma line 41 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/rounding.c"
uint32_t decompose(uint32_t a, uint32_t *a0) {
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int32_t t, u;
#pragma empty_line
  t = a & 0x7FFFF;
  t += (a >> 19) << 9;
  t -= (2U*(((8380417U - 1U)/16U)/2U))/2 + 1;
  t += (t >> 31) & (2U*(((8380417U - 1U)/16U)/2U));
  t -= (2U*(((8380417U - 1U)/16U)/2U))/2 - 1;
  a -= t;
#pragma empty_line
#pragma empty_line
  u = a - 1;
  u >>= 31;
  a = (a >> 19) + 1;
  a -= u & 1;
#pragma empty_line
#pragma empty_line
  *a0 = 8380417U + t - (a >> 4);
  a &= 0xF;
  return a;
}
#pragma line 77 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/rounding.c"
unsigned int make_hint(const uint32_t a, const uint32_t b) {
  uint32_t t;
  return decompose(a, &t) != decompose(freeze(a + b), &t);
}
#pragma line 92 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/rounding.c"
uint32_t use_hint(const uint32_t a, const unsigned int hint) {
  uint32_t a0, a1;
#pragma empty_line
  a1 = decompose(a, &a0);
  if(hint == 0)
    return a1;
  else if(a0 > 8380417U)
    return (a1 == (8380417U - 1)/(2U*(((8380417U - 1U)/16U)/2U)) - 1) ? 0 : a1 + 1;
  else
    return (a1 == 0) ? (8380417U - 1)/(2U*(((8380417U - 1U)/16U)/2U)) - 1 : a1 - 1;
#pragma line 111 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/rounding.c"
}
