# 1 "/home/kb150/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/Dilithium.prj/encryption_unroll/.autopilot/db/poly.pragma.1.c"
# 1 "/home/kb150/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/Dilithium.prj/encryption_unroll/.autopilot/db/poly.pragma.1.c" 1
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
# 1 "/home/kb150/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/Dilithium.prj/encryption_unroll/.autopilot/db/poly.pragma.1.c" 2
# 1 "poly.c"
# 1 "poly.c" 1
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
# 1 "poly.c" 2
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
# 2 "poly.c" 2
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
# 3 "poly.c" 2
# 1 "./params.h" 1
# 4 "poly.c" 2
# 1 "./reduce.h" 1
# 10 "./reduce.h"
uint32_t montgomery_reduce(uint64_t a);


uint32_t reduce32(uint32_t a);


uint32_t freeze(uint32_t a);
# 5 "poly.c" 2
# 1 "./ntt.h" 1





void ntt(uint32_t *p);
void invntt_frominvmont(uint32_t *p);
# 6 "poly.c" 2
# 1 "./poly.h" 1







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
# 7 "poly.c" 2
# 16 "poly.c"
void poly_freeze(poly *a) {
  unsigned int i;

  for(i = 0; i < 256U; ++i)
    a->coeffs[i] = freeze(a->coeffs[i]);
}
# 32 "poly.c"
void poly_add(poly *c, const poly *a, const poly *b) {
  unsigned int i;

  for(i = 0; i < 256U; ++i)
    c->coeffs[i] = a->coeffs[i] + b->coeffs[i];
}
# 50 "poly.c"
void poly_sub(poly *c, const poly *a, const poly *b) {
  unsigned int i;

  for(i = 0; i < 256U; ++i)
    c->coeffs[i] = a->coeffs[i] + 2*8380417U - b->coeffs[i];
}
# 65 "poly.c"
void poly_neg(poly *a) {
  unsigned int i;

  for(i = 0; i < 256U; ++i)
    a->coeffs[i] = 2*8380417U - a->coeffs[i];
}
# 80 "poly.c"
void poly_shiftl(poly *a, unsigned int k) {
  unsigned int i;

  for(i = 0; i < 256U; ++i)
    a->coeffs[i] <<= k;
}
# 94 "poly.c"
void poly_ntt(poly *a) {
  ntt(a->coeffs);
}
# 105 "poly.c"
void poly_invntt_montgomery(poly *a) {
  invntt_frominvmont(a->coeffs);
}
# 120 "poly.c"
void poly_pointwise_invmontgomery(poly *c, const poly *a, const poly *b) {
  unsigned int i;

  poly_pointwise_invmontgomery_label2:for(i = 0; i < 256U; ++i)
    c->coeffs[i] = montgomery_reduce((uint64_t)a->coeffs[i] * b->coeffs[i]);
}
# 138 "poly.c"
int poly_chknorm(const poly *a, uint32_t B) {
  unsigned int i;
  int32_t t;




  for(i = 0; i < 256U; ++i) {

    t = (8380417U -1)/2 - a->coeffs[i];
    t ^= (t >> 31);
    t = (8380417U -1)/2 - t;

    if((uint32_t)t >= B)
      return 1;
  }

  return 0;
}
# 168 "poly.c"
void poly_uniform(poly *a, unsigned char *buf) {
  unsigned int ctr, pos;
  uint32_t t;

  ctr = pos = 0;
  while(ctr < 256U) {
    t = buf[pos++];
    t |= (uint32_t)buf[pos++] << 8;
    t |= (uint32_t)buf[pos++] << 16;
    t &= 0x7FFFFF;

    if(t < 8380417U)
      a->coeffs[ctr++] = t;
  }
}
# 198 "poly.c"
static unsigned int rej_eta(uint32_t *a,
                            unsigned int len,
                            const unsigned char *buf,
                            unsigned int buflen)
{



  unsigned int ctr, pos;
  unsigned char t0, t1;

  ctr = pos = 0;
  while(ctr < len) {




    t0 = buf[pos] & 0x0F;
    t1 = buf[pos++] >> 4;


    if(t0 <= 2*5U)
      a[ctr++] = 8380417U + 5U - t0;
    if(t1 <= 2*5U && ctr < 256U)
      a[ctr++] = 8380417U + 5U - t1;

    if(pos >= buflen)
      break;
  }

  return ctr;
}
# 243 "poly.c"
void poly_uniform_eta(poly *a,
                      const unsigned char seed[32U],
                      unsigned char nonce)
{_ssdm_SpecArrayDimSize(seed, 32);
  unsigned int i, ctr;
  unsigned char inbuf[32U + 1];

  unsigned char outbuf[2*136];
  uint64_t state[25];

  for(i= 0; i < 32U; ++i)
    inbuf[i] = seed[i];
  inbuf[32U] = nonce;

  shake256_absorb(state, inbuf, 32U + 1);
  shake256_squeezeblocks(outbuf, 2, state);

  ctr = rej_eta(a->coeffs, 256U, outbuf, 2*136);
  if(ctr < 256U) {
    shake256_squeezeblocks(outbuf, 1, state);
    rej_eta(a->coeffs + ctr, 256U - ctr, outbuf, 136);
  }
}
# 282 "poly.c"
static unsigned int rej_gamma1m1(uint32_t *a,
                                 unsigned int len,
                                 const unsigned char *buf,
                                 unsigned int buflen)
{



  unsigned int ctr, pos;
  uint32_t t;

  ctr = pos = 0;
  while(ctr < len) {
    t = buf[pos];
    t |= (uint32_t)buf[pos + 1] << 8;
    t |= (uint32_t)buf[pos + 2] << 16;
    t &= 0xFFFFF;

    t = buf[pos + 2] >> 4;
    t |= (uint32_t)buf[pos + 3] << 4;
    t |= (uint32_t)buf[pos + 4] << 12;

    pos += 5;

    if(t <= 2*((8380417U - 1U)/16U) - 2)
      a[ctr++] = 8380417U + ((8380417U - 1U)/16U) - 1 - t;
    if(t <= 2*((8380417U - 1U)/16U) - 2 && ctr < len)
      a[ctr++] = 8380417U + ((8380417U - 1U)/16U) - 1 - t;

    if(pos > buflen - 5)
      break;
  }

  return ctr;
}
# 330 "poly.c"
void poly_uniform_gamma1m1(poly *a,
                           const unsigned char seed[32U + 48U],
                           uint16_t nonce)
{_ssdm_SpecArrayDimSize(seed, 80);
  unsigned int i, ctr;
  unsigned char inbuf[32U + 48U + 2];


  unsigned char outbuf[5*136];
  uint64_t state[25];

  for(i = 0; i < 32U + 48U; ++i)
    inbuf[i] = seed[i];
  inbuf[32U + 48U] = nonce & 0xFF;
  inbuf[32U + 48U + 1] = nonce >> 8;

  shake256_absorb(state, inbuf, 32U + 48U + 2);
  shake256_squeezeblocks(outbuf, 5, state);

  ctr = rej_gamma1m1(a->coeffs, 256U, outbuf, 5*136);
  if(ctr < 256U) {


    shake256_squeezeblocks(outbuf, 1, state);
    rej_gamma1m1(a->coeffs + ctr, 256U - ctr, outbuf, 136);
  }
}
# 368 "poly.c"
void polyeta_pack(unsigned char *r, const poly *a) {



  unsigned int i;
  unsigned char t[8];
# 398 "poly.c"
 for(i = 0; i < 256U/2; ++i) {
    t[0] = 8380417U + 5U - a->coeffs[2*i+0];
    t[1] = 8380417U + 5U - a->coeffs[2*i+1];
    r[i] = t[0] | (t[1] << 4);
  }

}
# 416 "poly.c"
void polyeta_unpack(poly *r, const unsigned char *a) {
  unsigned int i;
# 440 "poly.c"
 for(i = 0; i < 256U/2; ++i) {
    r->coeffs[2*i+0] = a[i] & 0x0F;
    r->coeffs[2*i+1] = a[i] >> 4;
    r->coeffs[2*i+0] = 8380417U + 5U - r->coeffs[2*i+0];
    r->coeffs[2*i+1] = 8380417U + 5U - r->coeffs[2*i+1];
  }

}
# 459 "poly.c"
void polyt1_pack(unsigned char *r, const poly *a) {



  unsigned int i;

  for(i = 0; i < 256U/8; ++i) {
    r[9*i+0] = a->coeffs[8*i+0] & 0xFF;
    r[9*i+1] = (a->coeffs[8*i+0] >> 8) | ((a->coeffs[8*i+1] & 0x7F) << 1);
    r[9*i+2] = (a->coeffs[8*i+1] >> 7) | ((a->coeffs[8*i+2] & 0x3F) << 2);
    r[9*i+3] = (a->coeffs[8*i+2] >> 6) | ((a->coeffs[8*i+3] & 0x1F) << 3);
    r[9*i+4] = (a->coeffs[8*i+3] >> 5) | ((a->coeffs[8*i+4] & 0x0F) << 4);
    r[9*i+5] = (a->coeffs[8*i+4] >> 4) | ((a->coeffs[8*i+5] & 0x07) << 5);
    r[9*i+6] = (a->coeffs[8*i+5] >> 3) | ((a->coeffs[8*i+6] & 0x03) << 6);
    r[9*i+7] = (a->coeffs[8*i+6] >> 2) | ((a->coeffs[8*i+7] & 0x01) << 7);
    r[9*i+8] = a->coeffs[8*i+7] >> 1;
  }
}
# 487 "poly.c"
void polyt1_unpack(poly *r, const unsigned char *a) {
  unsigned int i;

  for(i = 0; i < 256U/8; ++i) {
    r->coeffs[8*i+0] = a[9*i+0] | ((uint32_t)(a[9*i+1] & 0x01) << 8);
    r->coeffs[8*i+1] = (a[9*i+1] >> 1) | ((uint32_t)(a[9*i+2] & 0x03) << 7);
    r->coeffs[8*i+2] = (a[9*i+2] >> 2) | ((uint32_t)(a[9*i+3] & 0x07) << 6);
    r->coeffs[8*i+3] = (a[9*i+3] >> 3) | ((uint32_t)(a[9*i+4] & 0x0F) << 5);
    r->coeffs[8*i+4] = (a[9*i+4] >> 4) | ((uint32_t)(a[9*i+5] & 0x1F) << 4);
    r->coeffs[8*i+5] = (a[9*i+5] >> 5) | ((uint32_t)(a[9*i+6] & 0x3F) << 3);
    r->coeffs[8*i+6] = (a[9*i+6] >> 6) | ((uint32_t)(a[9*i+7] & 0x7F) << 2);
    r->coeffs[8*i+7] = (a[9*i+7] >> 7) | ((uint32_t)(a[9*i+8] & 0xFF) << 1);
  }
}
# 512 "poly.c"
void polyt0_pack(unsigned char *r, const poly *a) {
  unsigned int i;
  uint32_t t[4];

  for(i = 0; i < 256U/4; ++i) {
    t[0] = 8380417U + (1 << (14U -1)) - a->coeffs[4*i+0];
    t[1] = 8380417U + (1 << (14U -1)) - a->coeffs[4*i+1];
    t[2] = 8380417U + (1 << (14U -1)) - a->coeffs[4*i+2];
    t[3] = 8380417U + (1 << (14U -1)) - a->coeffs[4*i+3];

    r[7*i+0] = t[0];
    r[7*i+1] = t[0] >> 8;
    r[7*i+1] |= t[1] << 6;
    r[7*i+2] = t[1] >> 2;
    r[7*i+3] = t[1] >> 10;
    r[7*i+3] |= t[2] << 4;
    r[7*i+4] = t[2] >> 4;
    r[7*i+5] = t[2] >> 12;
    r[7*i+5] |= t[3] << 2;
    r[7*i+6] = t[3] >> 6;
  }
}
# 545 "poly.c"
void polyt0_unpack(poly *r, const unsigned char *a) {
  unsigned int i;

  for(i = 0; i < 256U/4; ++i) {
    r->coeffs[4*i+0] = a[7*i+0];
    r->coeffs[4*i+0] |= (uint32_t)(a[7*i+1] & 0x3F) << 8;

    r->coeffs[4*i+1] = a[7*i+1] >> 6;
    r->coeffs[4*i+1] |= (uint32_t)a[7*i+2] << 2;
    r->coeffs[4*i+1] |= (uint32_t)(a[7*i+3] & 0x0F) << 10;

    r->coeffs[4*i+2] = a[7*i+3] >> 4;
    r->coeffs[4*i+2] |= (uint32_t)a[7*i+4] << 4;
    r->coeffs[4*i+2] |= (uint32_t)(a[7*i+5] & 0x03) << 12;

    r->coeffs[4*i+3] = a[7*i+5] >> 2;
    r->coeffs[4*i+3] |= (uint32_t)a[7*i+6] << 6;

    r->coeffs[4*i+0] = 8380417U + (1 << (14U -1)) - r->coeffs[4*i+0];
    r->coeffs[4*i+1] = 8380417U + (1 << (14U -1)) - r->coeffs[4*i+1];
    r->coeffs[4*i+2] = 8380417U + (1 << (14U -1)) - r->coeffs[4*i+2];
    r->coeffs[4*i+3] = 8380417U + (1 << (14U -1)) - r->coeffs[4*i+3];
  }
}
# 581 "poly.c"
void polyz_pack(unsigned char *r, const poly *a) {



  unsigned int i;
  uint32_t t[2];

  for(i = 0; i < 256U/2; ++i) {

    t[0] = ((8380417U - 1U)/16U) - 1 - a->coeffs[2*i+0];
    t[0] += ((int32_t)t[0] >> 31) & 8380417U;
    t[1] = ((8380417U - 1U)/16U) - 1 - a->coeffs[2*i+1];
    t[1] += ((int32_t)t[1] >> 31) & 8380417U;

    r[5*i+0] = t[0];
    r[5*i+1] = t[0] >> 8;
    r[5*i+2] = t[0] >> 16;
    r[5*i+2] |= t[1] << 4;
    r[5*i+3] = t[1] >> 4;
    r[5*i+4] = t[1] >> 12;
  }
}
# 615 "poly.c"
void polyz_unpack(poly *r, const unsigned char *a) {
  unsigned int i;

  for(i = 0; i < 256U/2; ++i) {
    r->coeffs[2*i+0] = a[5*i+0];
    r->coeffs[2*i+0] |= (uint32_t)a[5*i+1] << 8;
    r->coeffs[2*i+0] |= (uint32_t)(a[5*i+2] & 0x0F) << 16;

    r->coeffs[2*i+1] = a[5*i+2] >> 4;
    r->coeffs[2*i+1] |= (uint32_t)a[5*i+3] << 4;
    r->coeffs[2*i+1] |= (uint32_t)a[5*i+4] << 12;

    r->coeffs[2*i+0] = ((8380417U - 1U)/16U) - 1 - r->coeffs[2*i+0];
    r->coeffs[2*i+0] += ((int32_t)r->coeffs[2*i+0] >> 31) & 8380417U;
    r->coeffs[2*i+1] = ((8380417U - 1U)/16U) - 1 - r->coeffs[2*i+1];
    r->coeffs[2*i+1] += ((int32_t)r->coeffs[2*i+1] >> 31) & 8380417U;
  }
}
# 644 "poly.c"
void polyw1_pack(unsigned char *r, const poly *a) {
  unsigned int i;

  for(i = 0; i < 256U/2; ++i)
    r[i] = a->coeffs[2*i+0] | (a->coeffs[2*i+1] << 4);
}
