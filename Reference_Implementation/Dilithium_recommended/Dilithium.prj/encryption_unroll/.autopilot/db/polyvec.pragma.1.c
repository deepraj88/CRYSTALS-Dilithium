# 1 "polyvec.c"
# 1 "polyvec.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 149 "<built-in>" 3
# 1 "<command line>" 1





# 1 "/opt/Xilinx2018/Vivado/2018.2/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
# 300 "/opt/Xilinx2018/Vivado/2018.2/common/technology/autopilot/etc/autopilot_ssdm_op.h"
    void _ssdm_op_IfRead() __attribute__ ((nothrow));
    void _ssdm_op_IfWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite() __attribute__ ((nothrow));


    void _ssdm_StreamRead() __attribute__ ((nothrow));
    void _ssdm_StreamWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite() __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead() __attribute__ ((nothrow));

    void _ssdm_op_Wait() __attribute__ ((nothrow));
    void _ssdm_op_Poll() __attribute__ ((nothrow));

    void _ssdm_op_Return() __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef() __attribute__ ((nothrow));
    void _ssdm_op_SpecPort() __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection() __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel() __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive() __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst() __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap() __attribute__ ((nothrow));

    void _ssdm_op_SpecReset() __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform() __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain() __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain() __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount() __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface() __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline() __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline() __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency() __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel() __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol() __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence() __attribute__ ((nothrow));

    void _ssdm_op_SpecResource() __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit() __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue() __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore() __attribute__ ((nothrow));

    void _ssdm_op_SpecExt() __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize() __attribute__ ((nothrow));

    void _ssdm_RegionBegin() __attribute__ ((nothrow));
    void _ssdm_RegionEnd() __attribute__ ((nothrow));

    void _ssdm_Unroll() __attribute__ ((nothrow));
    void _ssdm_UnrollRegion() __attribute__ ((nothrow));

    void _ssdm_InlineAll() __attribute__ ((nothrow));
    void _ssdm_InlineLoop() __attribute__ ((nothrow));
    void _ssdm_Inline() __attribute__ ((nothrow));
    void _ssdm_InlineSelf() __attribute__ ((nothrow));
    void _ssdm_InlineRegion() __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap() __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition() __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape() __attribute__ ((nothrow));

    void _ssdm_SpecStream() __attribute__ ((nothrow));

    void _ssdm_SpecExpr() __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance() __attribute__ ((nothrow));

    void _ssdm_SpecDependence() __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge() __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten() __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind() __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation() __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer() __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract() __attribute__ ((nothrow));
    void _ssdm_SpecConstant() __attribute__ ((nothrow));

    void _ssdm_DataPack() __attribute__ ((nothrow));
    void _ssdm_SpecDataPack() __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap() __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense() __attribute__ ((nothrow));
# 7 "<command line>" 2
# 1 "<built-in>" 2
# 1 "polyvec.c" 2
# 1 "/opt/apps/glibc/2.14/include/stdint.h" 1
# 26 "/opt/apps/glibc/2.14/include/stdint.h"
# 1 "/opt/apps/glibc/2.14/include/features.h" 1
# 358 "/opt/apps/glibc/2.14/include/features.h"
# 1 "/opt/apps/glibc/2.14/include/sys/cdefs.h" 1
# 353 "/opt/apps/glibc/2.14/include/sys/cdefs.h"
# 1 "/opt/apps/glibc/2.14/include/bits/wordsize.h" 1
# 354 "/opt/apps/glibc/2.14/include/sys/cdefs.h" 2
# 359 "/opt/apps/glibc/2.14/include/features.h" 2
# 382 "/opt/apps/glibc/2.14/include/features.h"
# 1 "/opt/apps/glibc/2.14/include/gnu/stubs.h" 1



# 1 "/opt/apps/glibc/2.14/include/bits/wordsize.h" 1
# 5 "/opt/apps/glibc/2.14/include/gnu/stubs.h" 2




# 1 "/opt/apps/glibc/2.14/include/gnu/stubs-64.h" 1
# 10 "/opt/apps/glibc/2.14/include/gnu/stubs.h" 2
# 383 "/opt/apps/glibc/2.14/include/features.h" 2
# 27 "/opt/apps/glibc/2.14/include/stdint.h" 2
# 1 "/opt/apps/glibc/2.14/include/bits/wchar.h" 1
# 28 "/opt/apps/glibc/2.14/include/stdint.h" 2
# 1 "/opt/apps/glibc/2.14/include/bits/wordsize.h" 1
# 29 "/opt/apps/glibc/2.14/include/stdint.h" 2








typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 66 "/opt/apps/glibc/2.14/include/stdint.h"
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 91 "/opt/apps/glibc/2.14/include/stdint.h"
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 104 "/opt/apps/glibc/2.14/include/stdint.h"
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 120 "/opt/apps/glibc/2.14/include/stdint.h"
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 135 "/opt/apps/glibc/2.14/include/stdint.h"
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 2 "polyvec.c" 2
# 1 "./params.h" 1
# 3 "polyvec.c" 2
# 1 "./reduce.h" 1
# 10 "./reduce.h"
uint32_t montgomery_reduce(uint64_t a);


uint32_t reduce32(uint32_t a);


uint32_t freeze(uint32_t a);
# 4 "polyvec.c" 2
# 1 "./rounding.h" 1





uint32_t power2round(const uint32_t a, uint32_t *a0);
uint32_t decompose(uint32_t a, uint32_t *a0);
unsigned int make_hint(const uint32_t a, const uint32_t b);
uint32_t use_hint(const uint32_t a, const unsigned int hint);
# 5 "polyvec.c" 2
# 1 "./poly.h" 1





# 1 "./fips202.h" 1








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
# 7 "./poly.h" 2

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
# 6 "polyvec.c" 2
# 1 "./polyvec.h" 1








typedef struct {
  poly vec[4U];
} polyvecl;

void polyvecl_freeze(polyvecl *v);

void polyvecl_add(polyvecl *w, const polyvecl *u, const polyvecl *v);

void polyvecl_ntt(polyvecl *v);
void polyvecl_pointwise_acc_invmontgomery(poly *w,
                                          const polyvecl *u,
                                          const polyvecl *v);

int polyvecl_chknorm(const polyvecl *v, uint32_t B);




typedef struct {
  poly vec[5U];
} polyveck;

void polyveck_freeze(polyveck *v);

void polyveck_add(polyveck *w, const polyveck *u, const polyveck *v);
void polyveck_sub(polyveck *w, const polyveck *u, const polyveck *v);
void polyveck_neg(polyveck *v);
void polyveck_shiftl(polyveck *v, unsigned int k);

void polyveck_ntt(polyveck *v);
void polyveck_invntt_montgomery(polyveck *v);

int polyveck_chknorm(const polyveck *v, uint32_t B);

void polyveck_power2round(polyveck *v1, polyveck *v0, const polyveck *v);
void polyveck_decompose(polyveck *v1, polyveck *v0, const polyveck *v);
unsigned int polyveck_make_hint(polyveck *h,
                                const polyveck *u,
                                const polyveck *v);
void polyveck_use_hint(polyveck *w, const polyveck *v, const polyveck *h);
# 7 "polyvec.c" 2
# 20 "polyvec.c"
void polyvecl_freeze(polyvecl *v) {
  unsigned int i;

  for(i = 0; i < 4U; ++i)
    poly_freeze(v->vec+i);
}
# 37 "polyvec.c"
void polyvecl_add(polyvecl *w, const polyvecl *u, const polyvecl *v) {
  unsigned int i;

  for(i = 0; i < 4U; ++i)
    poly_add(w->vec+i, u->vec+i, v->vec+i);
}
# 51 "polyvec.c"
void polyvecl_ntt(polyvecl *v) {
  unsigned int i;

  for(i = 0; i < 4U; ++i)
    poly_ntt(v->vec+i);
}
# 68 "polyvec.c"
void polyvecl_pointwise_acc_invmontgomery(poly *w,
                                          const polyvecl *u,
                                          const polyvecl *v)
{
  unsigned int i;
  poly t;

  poly_pointwise_invmontgomery(w, u->vec+0, v->vec+0);

  polyvecl_pointwise_acc_invmontgomery_label0:for(i = 1; i < 4U; ++i) {
    poly_pointwise_invmontgomery(&t, u->vec+i, v->vec+i);
    poly_add(w, w, &t);
  }

  polyvecl_pointwise_acc_invmontgomery_label1:for(i = 0; i < 256U; ++i)
_ssdm_Unroll(0,0,0, "");
# 82 "polyvec.c"

    w->coeffs[i] = reduce32(w->coeffs[i]);
}
# 98 "polyvec.c"
int polyvecl_chknorm(const polyvecl *v, uint32_t bound) {
  unsigned int i;
  int ret = 0;

  for(i = 0; i < 4U; ++i)
    ret |= poly_chknorm(v->vec+i, bound);

  return ret;
}
# 120 "polyvec.c"
void polyveck_freeze(polyveck *v) {
  unsigned int i;

  for(i = 0; i < 5U; ++i)
    poly_freeze(v->vec+i);
}
# 137 "polyvec.c"
void polyveck_add(polyveck *w, const polyveck *u, const polyveck *v) {
  unsigned int i;

  for(i = 0; i < 5U; ++i)
    poly_add(w->vec+i, u->vec+i, v->vec+i);
}
# 156 "polyvec.c"
void polyveck_sub(polyveck *w, const polyveck *u, const polyveck *v) {
  unsigned int i;

  for(i = 0; i < 5U; ++i)
    poly_sub(w->vec+i, u->vec+i, v->vec+i);
}
# 171 "polyvec.c"
void polyveck_neg(polyveck *v) {
  unsigned int i;

  for(i = 0; i < 5U; ++i)
    poly_neg(v->vec+i);
}
# 186 "polyvec.c"
void polyveck_shiftl(polyveck *v, unsigned int k) {
  unsigned int i;

  for(i = 0; i < 5U; ++i)
    poly_shiftl(v->vec+i, k);
}
# 200 "polyvec.c"
void polyveck_ntt(polyveck *v) {
  unsigned int i;

  for(i = 0; i < 5U; ++i)
    poly_ntt(v->vec+i);
}
# 215 "polyvec.c"
void polyveck_invntt_montgomery(polyveck *v) {
  unsigned int i;

  for(i = 0; i < 5U; ++i)
    poly_invntt_montgomery(v->vec+i);
}
# 234 "polyvec.c"
int polyveck_chknorm(const polyveck *v, uint32_t bound) {
  unsigned int i;
  int ret = 0;

  for(i = 0; i < 5U; ++i)
    ret |= poly_chknorm(v->vec+i, bound);

  return ret;
}
# 257 "polyvec.c"
void polyveck_power2round(polyveck *v1, polyveck *v0, const polyveck *v) {
  unsigned int i, j;

  for(i = 0; i < 5U; ++i)
    for(j = 0; j < 256U; ++j)
      v1->vec[i].coeffs[j] = power2round(v->vec[i].coeffs[j],
                                         &v0->vec[i].coeffs[j]);
}
# 280 "polyvec.c"
void polyveck_decompose(polyveck *v1, polyveck *v0, const polyveck *v) {
  unsigned int i, j;

  for(i = 0; i < 5U; ++i)
    for(j = 0; j < 256U; ++j)
      v1->vec[i].coeffs[j] = decompose(v->vec[i].coeffs[j],
                                       &v0->vec[i].coeffs[j]);
}
# 302 "polyvec.c"
unsigned int polyveck_make_hint(polyveck *h,
                                const polyveck *u,
                                const polyveck *v)
{
  unsigned int i, j, s = 0;

  for(i = 0; i < 5U; ++i)
    for(j = 0; j < 256U; ++j) {
      h->vec[i].coeffs[j] = make_hint(u->vec[i].coeffs[j], v->vec[i].coeffs[j]);
      s += h->vec[i].coeffs[j];
    }

  return s;
}
# 327 "polyvec.c"
void polyveck_use_hint(polyveck *w, const polyveck *u, const polyveck *h) {
  unsigned int i, j;

  for(i = 0; i < 5U; ++i)
    for(j = 0; j < 256U; ++j)
      w->vec[i].coeffs[j] = use_hint(u->vec[i].coeffs[j], h->vec[i].coeffs[j]);
}
