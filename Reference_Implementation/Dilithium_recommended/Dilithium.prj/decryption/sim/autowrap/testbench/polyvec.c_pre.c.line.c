#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
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
#pragma line 2 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c" 2
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/params.h" 1
#pragma line 3 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c" 2
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
#pragma line 4 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c" 2
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/rounding.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
uint32_t power2round(const uint32_t a, uint32_t *a0);
uint32_t decompose(uint32_t a, uint32_t *a0);
unsigned int make_hint(const uint32_t a, const uint32_t b);
uint32_t use_hint(const uint32_t a, const unsigned int hint);
#pragma line 5 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c" 2
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/poly.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/fips202.h" 1
#pragma line 9 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/fips202.h"
void shake128_absorb(uint64_t *s,
                     const unsigned char *input,
                     unsigned long long inlen);
#pragma empty_line
void shake128_squeezeblocks(unsigned char *output,
                            unsigned long nblocks,
                            uint64_t *s);
#pragma empty_line
void shake256_absorb(uint64_t *s,
                     const unsigned char *input,
                     unsigned long long inlen);
#pragma empty_line
void shake256_squeezeblocks(unsigned char *output,
                            unsigned long nblocks,
                            uint64_t *s);
#pragma empty_line
void shake128(unsigned char *output,
              unsigned long long outlen,
              const unsigned char *input,
              unsigned long long inlen);
#pragma empty_line
void shake256(unsigned char *output,
              unsigned long long outlen,
              const unsigned char *input,
              unsigned long long inlen);
#pragma line 7 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/poly.h" 2
#pragma empty_line
typedef struct {
  uint32_t coeffs[256U];
} poly __attribute__((aligned(32)));
#pragma empty_line
void poly_copy(poly *b, const poly *a);
void poly_freeze(poly *a);
#pragma empty_line
void poly_add(poly *c, const poly *a, const poly *b);
void poly_sub(poly *c, const poly *a, const poly *b);
void poly_neg(poly *a);
void poly_shiftl(poly *a, unsigned int k);
#pragma empty_line
void poly_ntt(poly *a);
void poly_invntt_montgomery(poly *a);
void poly_pointwise_invmontgomery(poly *c, const poly *a, const poly *b);
#pragma empty_line
int poly_chknorm(const poly *a, uint32_t B);
void poly_uniform(poly *a, unsigned char *buf);
void poly_uniform_eta(poly *a,
                      const unsigned char seed[32U],
                      unsigned char nonce);
void poly_uniform_gamma1m1(poly *a,
                           const unsigned char seed[32U + 48U],
                           uint16_t nonce);
#pragma empty_line
void polyeta_pack(unsigned char *r, const poly *a);
void polyeta_unpack(poly *r, const unsigned char *a);
#pragma empty_line
void polyt1_pack(unsigned char *r, const poly *a);
void polyt1_unpack(poly *r, const unsigned char *a);
#pragma empty_line
void polyt0_pack(unsigned char *r, const poly *a);
void polyt0_unpack(poly *r, const unsigned char *a);
#pragma empty_line
void polyz_pack(unsigned char *r, const poly *a);
void polyz_unpack(poly *r, const unsigned char *a);
#pragma empty_line
void polyw1_pack(unsigned char *r, const poly *a);
#pragma line 6 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c" 2
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.h" 1
#pragma line 9 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.h"
typedef struct {
  poly vec[4U];
} polyvecl;
#pragma empty_line
void polyvecl_freeze(polyvecl *v);
#pragma empty_line
void polyvecl_add(polyvecl *w, const polyvecl *u, const polyvecl *v);
#pragma empty_line
void polyvecl_ntt(polyvecl *v);
void polyvecl_pointwise_acc_invmontgomery(poly *w,
                                          const polyvecl *u,
                                          const polyvecl *v);
#pragma empty_line
int polyvecl_chknorm(const polyvecl *v, uint32_t B);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct {
  poly vec[5U];
} polyveck;
#pragma empty_line
void polyveck_freeze(polyveck *v);
#pragma empty_line
void polyveck_add(polyveck *w, const polyveck *u, const polyveck *v);
void polyveck_sub(polyveck *w, const polyveck *u, const polyveck *v);
void polyveck_neg(polyveck *v);
void polyveck_shiftl(polyveck *v, unsigned int k);
#pragma empty_line
void polyveck_ntt(polyveck *v);
void polyveck_invntt_montgomery(polyveck *v);
#pragma empty_line
int polyveck_chknorm(const polyveck *v, uint32_t B);
#pragma empty_line
void polyveck_power2round(polyveck *v1, polyveck *v0, const polyveck *v);
void polyveck_decompose(polyveck *v1, polyveck *v0, const polyveck *v);
unsigned int polyveck_make_hint(polyveck *h,
                                const polyveck *u,
                                const polyveck *v);
void polyveck_use_hint(polyveck *w, const polyveck *v, const polyveck *h);
#pragma line 7 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c" 2
#pragma line 20 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyvecl_freeze(polyvecl *v) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 4U; ++i)
    poly_freeze(v->vec+i);
}
#pragma line 37 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyvecl_add(polyvecl *w, const polyvecl *u, const polyvecl *v) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 4U; ++i)
    poly_add(w->vec+i, u->vec+i, v->vec+i);
}
#pragma line 51 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyvecl_ntt(polyvecl *v) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 4U; ++i)
    poly_ntt(v->vec+i);
}
#pragma line 68 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyvecl_pointwise_acc_invmontgomery(poly *w,
                                          const polyvecl *u,
                                          const polyvecl *v)
{
  unsigned int i;
  poly t;
#pragma empty_line
  poly_pointwise_invmontgomery(w, u->vec+0, v->vec+0);
#pragma empty_line
  polyvecl_pointwise_acc_invmontgomery_label0:for(i = 1; i < 4U; ++i) {
    poly_pointwise_invmontgomery(&t, u->vec+i, v->vec+i);
    poly_add(w, w, &t);
  }
#pragma empty_line
  polyvecl_pointwise_acc_invmontgomery_label1:for(i = 0; i < 256U; ++i)
    w->coeffs[i] = reduce32(w->coeffs[i]);
}
#pragma line 98 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
int polyvecl_chknorm(const polyvecl *v, uint32_t bound) {
  unsigned int i;
  int ret = 0;
#pragma empty_line
  for(i = 0; i < 4U; ++i)
    ret |= poly_chknorm(v->vec+i, bound);
#pragma empty_line
  return ret;
}
#pragma line 120 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyveck_freeze(polyveck *v) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    poly_freeze(v->vec+i);
}
#pragma line 137 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyveck_add(polyveck *w, const polyveck *u, const polyveck *v) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    poly_add(w->vec+i, u->vec+i, v->vec+i);
}
#pragma line 156 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyveck_sub(polyveck *w, const polyveck *u, const polyveck *v) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    poly_sub(w->vec+i, u->vec+i, v->vec+i);
}
#pragma line 171 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyveck_neg(polyveck *v) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    poly_neg(v->vec+i);
}
#pragma line 186 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyveck_shiftl(polyveck *v, unsigned int k) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    poly_shiftl(v->vec+i, k);
}
#pragma line 200 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyveck_ntt(polyveck *v) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    poly_ntt(v->vec+i);
}
#pragma line 215 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyveck_invntt_montgomery(polyveck *v) {
  unsigned int i;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    poly_invntt_montgomery(v->vec+i);
}
#pragma line 234 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
int polyveck_chknorm(const polyveck *v, uint32_t bound) {
  unsigned int i;
  int ret = 0;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    ret |= poly_chknorm(v->vec+i, bound);
#pragma empty_line
  return ret;
}
#pragma line 257 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyveck_power2round(polyveck *v1, polyveck *v0, const polyveck *v) {
  unsigned int i, j;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    for(j = 0; j < 256U; ++j)
      v1->vec[i].coeffs[j] = power2round(v->vec[i].coeffs[j],
                                         &v0->vec[i].coeffs[j]);
}
#pragma line 280 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyveck_decompose(polyveck *v1, polyveck *v0, const polyveck *v) {
  unsigned int i, j;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    for(j = 0; j < 256U; ++j)
      v1->vec[i].coeffs[j] = decompose(v->vec[i].coeffs[j],
                                       &v0->vec[i].coeffs[j]);
}
#pragma line 302 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
unsigned int polyveck_make_hint(polyveck *h,
                                const polyveck *u,
                                const polyveck *v)
{
  unsigned int i, j, s = 0;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    for(j = 0; j < 256U; ++j) {
      h->vec[i].coeffs[j] = make_hint(u->vec[i].coeffs[j], v->vec[i].coeffs[j]);
      s += h->vec[i].coeffs[j];
    }
#pragma empty_line
  return s;
}
#pragma line 327 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/polyvec.c"
void polyveck_use_hint(polyveck *w, const polyveck *u, const polyveck *h) {
  unsigned int i, j;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    for(j = 0; j < 256U; ++j)
      w->vec[i].coeffs[j] = use_hint(u->vec[i].coeffs[j], h->vec[i].coeffs[j]);
}
