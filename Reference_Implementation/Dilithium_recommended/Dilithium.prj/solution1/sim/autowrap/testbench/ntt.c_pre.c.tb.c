// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/ntt.c"
#1 "<built-in>"
#1 "<command-line>"
#1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/ntt.c"
#1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/params.h" 1
#2 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/ntt.c" 2
#1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.h" 1



#1 "/opt/Xilinx2018/Vivado/2018.2/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/include/stdint.h" 1 3 4
#9 "/opt/Xilinx2018/Vivado/2018.2/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/include/stdint.h" 3 4
#1 "/usr/include/stdint.h" 1 3 4
#26 "/usr/include/stdint.h" 3 4
#1 "/usr/include/features.h" 1 3 4
#361 "/usr/include/features.h" 3 4
#1 "/usr/include/sys/cdefs.h" 1 3 4
#373 "/usr/include/sys/cdefs.h" 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#374 "/usr/include/sys/cdefs.h" 2 3 4
#362 "/usr/include/features.h" 2 3 4
#385 "/usr/include/features.h" 3 4
#1 "/usr/include/gnu/stubs.h" 1 3 4



#1 "/usr/include/bits/wordsize.h" 1 3 4
#5 "/usr/include/gnu/stubs.h" 2 3 4




#1 "/usr/include/gnu/stubs-64.h" 1 3 4
#10 "/usr/include/gnu/stubs.h" 2 3 4
#386 "/usr/include/features.h" 2 3 4
#27 "/usr/include/stdint.h" 2 3 4
#1 "/usr/include/bits/wchar.h" 1 3 4
#28 "/usr/include/stdint.h" 2 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#29 "/usr/include/stdint.h" 2 3 4
#37 "/usr/include/stdint.h" 3 4

#37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
#66 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
#91 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
#104 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#120 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
#135 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
#10 "/opt/Xilinx2018/Vivado/2018.2/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/include/stdint.h" 2 3 4
#5 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.h" 2






#10 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/reduce.h"
uint32_t montgomery_reduce(uint64_t a);


uint32_t reduce32(uint32_t a);


uint32_t freeze(uint32_t a);
#3 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/ntt.c" 2
#1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/ntt.h" 1





void ntt(uint32_t *p);
void invntt_frominvmont(uint32_t *p);
#4 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/ntt.c" 2
#1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/poly.h" 1





#1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/fips202.h" 1
#9 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/fips202.h"
void shake128_absorb(uint64_t *s,
                     const unsigned char *input,
                     unsigned long long inlen);

void shake128_squeezeblocks(unsigned char *output,
                            unsigned long nblocks,
                            uint64_t *s);

void shake256_absorb(uint64_t *s,
                     const unsigned char *input,
                     unsigned long long inlen);

void shake256_squeezeblocks(unsigned char *output,
                            unsigned long nblocks,
                            uint64_t *s);

void shake128(unsigned char *output,
              unsigned long long outlen,
              const unsigned char *input,
              unsigned long long inlen);

void shake256(unsigned char *output,
              unsigned long long outlen,
              const unsigned char *input,
              unsigned long long inlen);
#7 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/poly.h" 2

typedef struct {
  uint32_t coeffs[256U];
} poly __attribute__((aligned(32)));

void poly_copy(poly *b, const poly *a);
void poly_freeze(poly *a);

void poly_add(poly *c, const poly *a, const poly *b);
void poly_sub(poly *c, const poly *a, const poly *b);
void poly_neg(poly *a);
void poly_shiftl(poly *a, unsigned int k);

void poly_ntt(poly *a);
void poly_invntt_montgomery(poly *a);
void poly_pointwise_invmontgomery(poly *c, const poly *a, const poly *b);

int poly_chknorm(const poly *a, uint32_t B);
void poly_uniform(poly *a, unsigned char *buf);
void poly_uniform_eta(poly *a,
                      const unsigned char seed[32U],
                      unsigned char nonce);
void poly_uniform_gamma1m1(poly *a,
                           const unsigned char seed[32U + 48U],
                           uint16_t nonce);

void polyeta_pack(unsigned char *r, const poly *a);
void polyeta_unpack(poly *r, const unsigned char *a);

void polyt1_pack(unsigned char *r, const poly *a);
void polyt1_unpack(poly *r, const unsigned char *a);

void polyt0_pack(unsigned char *r, const poly *a);
void polyt0_unpack(poly *r, const unsigned char *a);

void polyz_pack(unsigned char *r, const poly *a);
void polyz_unpack(poly *r, const unsigned char *a);

void polyw1_pack(unsigned char *r, const poly *a);
#5 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/ntt.c" 2


static const uint32_t zetas[256U] = {0, 25847, 5771523, 7861508, 237124, 7602457, 7504169, 466468, 1826347, 2353451, 8021166, 6288512, 3119733, 5495562, 3111497, 2680103, 2725464, 1024112, 7300517, 3585928, 7830929, 7260833, 2619752, 6271868, 6262231, 4520680, 6980856, 5102745, 1757237, 8360995, 4010497, 280005, 2706023, 95776, 3077325, 3530437, 6718724, 4788269, 5842901, 3915439, 4519302, 5336701, 3574422, 5512770, 3539968, 8079950, 2348700, 7841118, 6681150, 6736599, 3505694, 4558682, 3507263, 6239768, 6779997, 3699596, 811944, 531354, 954230, 3881043, 3900724, 5823537, 2071892, 5582638, 4450022, 6851714, 4702672, 5339162, 6927966, 3475950, 2176455, 6795196, 7122806, 1939314, 4296819, 7380215, 5190273, 5223087, 4747489, 126922, 3412210, 7396998, 2147896, 2715295, 5412772, 4686924, 7969390, 5903370, 7709315, 7151892, 8357436, 7072248, 7998430, 1349076, 1852771, 6949987, 5037034, 264944, 508951, 3097992, 44288, 7280319, 904516, 3958618, 4656075, 8371839, 1653064, 5130689, 2389356, 8169440, 759969, 7063561, 189548, 4827145, 3159746, 6529015, 5971092, 8202977, 1315589, 1341330, 1285669, 6795489, 7567685, 6940675, 5361315, 4499357, 4751448, 3839961, 2091667, 3407706, 2316500, 3817976, 5037939, 2244091, 5933984, 4817955, 266997, 2434439, 7144689, 3513181, 4860065, 4621053, 7183191, 5187039, 900702, 1859098, 909542, 819034, 495491, 6767243, 8337157, 7857917, 7725090, 5257975, 2031748, 3207046, 4823422, 7855319, 7611795, 4784579, 342297, 286988, 5942594, 4108315, 3437287, 5038140, 1735879, 203044, 2842341, 2691481, 5790267, 1265009, 4055324, 1247620, 2486353, 1595974, 4613401, 1250494, 2635921, 4832145, 5386378, 1869119, 1903435, 7329447, 7047359, 1237275, 5062207, 6950192, 7929317, 1312455, 3306115, 6417775, 7100756, 1917081, 5834105, 7005614, 1500165, 777191, 2235880, 3406031, 7838005, 5548557, 6709241, 6533464, 5796124, 4656147, 594136, 4603424, 6366809, 2432395, 2454455, 8215696, 1957272, 3369112, 185531, 7173032, 5196991, 162844, 1616392, 3014001, 810149, 1652634, 4686184, 6581310, 5341501, 3523897, 3866901, 269760, 2213111, 7404533, 1717735, 472078, 7953734, 1723600, 6577327, 1910376, 6712985, 7276084, 8119771, 4546524, 5441381, 6144432, 7959518, 6094090, 183443, 7403526, 1612842, 4834730, 7826001, 3919660, 8332111, 7018208, 3937738, 1400424, 7534263, 1976782};


static const uint32_t zetas_inv[256U] = {6403635, 846154, 6979993, 4442679, 1362209, 48306, 4460757, 554416, 3545687, 6767575, 976891, 8196974, 2286327, 420899, 2235985, 2939036, 3833893, 260646, 1104333, 1667432, 6470041, 1803090, 6656817, 426683, 7908339, 6662682, 975884, 6167306, 8110657, 4513516, 4856520, 3038916, 1799107, 3694233, 6727783, 7570268, 5366416, 6764025, 8217573, 3183426, 1207385, 8194886, 5011305, 6423145, 164721, 5925962, 5948022, 2013608, 3776993, 7786281, 3724270, 2584293, 1846953, 1671176, 2831860, 542412, 4974386, 6144537, 7603226, 6880252, 1374803, 2546312, 6463336, 1279661, 1962642, 5074302, 7067962, 451100, 1430225, 3318210, 7143142, 1333058, 1050970, 6476982, 6511298, 2994039, 3548272, 5744496, 7129923, 3767016, 6784443, 5894064, 7132797, 4325093, 7115408, 2590150, 5688936, 5538076, 8177373, 6644538, 3342277, 4943130, 4272102, 2437823, 8093429, 8038120, 3595838, 768622, 525098, 3556995, 5173371, 6348669, 3122442, 655327, 522500, 43260, 1613174, 7884926, 7561383, 7470875, 6521319, 7479715, 3193378, 1197226, 3759364, 3520352, 4867236, 1235728, 5945978, 8113420, 3562462, 2446433, 6136326, 3342478, 4562441, 6063917, 4972711, 6288750, 4540456, 3628969, 3881060, 3019102, 1439742, 812732, 1584928, 7094748, 7039087, 7064828, 177440, 2409325, 1851402, 5220671, 3553272, 8190869, 1316856, 7620448, 210977, 5991061, 3249728, 6727353, 8578, 3724342, 4421799, 7475901, 1100098, 8336129, 5282425, 7871466, 8115473, 3343383, 1430430, 6527646, 7031341, 381987, 1308169, 22981, 1228525, 671102, 2477047, 411027, 3693493, 2967645, 5665122, 6232521, 983419, 4968207, 8253495, 3632928, 3157330, 3190144, 1000202, 4083598, 6441103, 1257611, 1585221, 6203962, 4904467, 1452451, 3041255, 3677745, 1528703, 3930395, 2797779, 6308525, 2556880, 4479693, 4499374, 7426187, 7849063, 7568473, 4680821, 1600420, 2140649, 4873154, 3821735, 4874723, 1643818, 1699267, 539299, 6031717, 300467, 4840449, 2867647, 4805995, 3043716, 3861115, 4464978, 2537516, 3592148, 1661693, 4849980, 5303092, 8284641, 5674394, 8100412, 4369920, 19422, 6623180, 3277672, 1399561, 3859737, 2118186, 2108549, 5760665, 1119584, 549488, 4794489, 1079900, 7356305, 5654953, 5700314, 5268920, 2884855, 5260684, 2091905, 359251, 6026966, 6554070, 7913949, 876248, 777960, 8143293, 518909, 2608894, 8354570};
#22 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/ntt.c"
void ntt(uint32_t *p) {
  unsigned int len, start, j, k;
  uint32_t zeta, t;

  k = 1;
  for(len = 128; len > 0; len >>= 1) {
    for(start = 0; start < 256U; start = j + len) {
      zeta = zetas[k++];
      for(j = start; j < start + len; ++j) {
        t = montgomery_reduce((uint64_t)zeta * p[j + len]);
        p[j + len] = p[j] + 2*8380417U - t;
        p[j] = p[j] + t;
      }
    }
  }
}
#48 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/ntt.c"
void invntt_frominvmont(uint32_t *p) {
  unsigned int start, len, j, k;
  uint32_t t, zeta;
  const uint32_t f = (((uint64_t)4193792U*4193792U % 8380417U) * (8380417U -1) % 8380417U) * ((8380417U -1) >> 8) % 8380417U;

  k = 0;
  for(len = 1; len < 256U; len <<= 1) {
    for(start = 0; start < 256U; start = j + len) {
      zeta = zetas_inv[k++];
      for(j = start; j < start + len; ++j) {
        t = p[j];
        p[j] = t + p[j + len];
        p[j + len] = t + 256*8380417U - p[j + len];
        p[j + len] = montgomery_reduce((uint64_t)zeta * p[j + len]);
      }
    }
  }

  for(j = 0; j < 256U; ++j) {
    p[j] = montgomery_reduce((uint64_t)f * p[j]);
  }
}
