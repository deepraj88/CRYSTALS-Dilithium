#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c"
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
#pragma line 2 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c" 2
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/api.h" 1
#pragma line 11 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/api.h"
#pragma empty_line
#pragma line 11 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/api.h"
int crypto_sign_keypair(unsigned char *pk, unsigned char *sk);
#pragma empty_line
int crypto_sign(unsigned char sm[3400 + 2701U],
                unsigned long long smlen[1],
                const unsigned char m[3400],
                unsigned long long mlen,
                const unsigned char sk[3504U]);
#pragma empty_line
#pragma empty_line
int crypto_sign_open(unsigned char m[3400],
                     unsigned long long mlen[1],
                     const unsigned char sm[3400 + 2701U],
                     unsigned long long smlen,
                     const unsigned char pk[1472U]);
#pragma line 3 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c" 2
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/params.h" 1
#pragma line 4 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c" 2
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
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
#pragma line 6 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.h" 2
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
#pragma line 7 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.h" 2
#pragma empty_line
void expand_mat(polyvecl mat[5U], const unsigned char rho[32U]);
void challenge(poly *c, const unsigned char mu[48U],
               const polyveck *w1);
#pragma empty_line
int crypto_sign_keypair(unsigned char *pk, unsigned char *sk);
#pragma empty_line
int crypto_sign(unsigned char sm[3400 + 2701U],
                unsigned long long smlen[1],
                const unsigned char m[3400],
                unsigned long long mlen,
                const unsigned char sk[3504U]);
#pragma empty_line
#pragma empty_line
int crypto_sign_open(unsigned char m[3400],
                     unsigned long long mlen[1],
                     const unsigned char sm[3400 + 2701U],
                     unsigned long long smlen,
                     const unsigned char pk[1472U]);
#pragma line 5 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c" 2
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/randombytes.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/unistd.h" 1 3 4
#pragma line 28 "/usr/include/unistd.h" 3 4
#pragma empty_line
#pragma line 203 "/usr/include/unistd.h" 3 4
#pragma line 1 "/usr/include/bits/posix_opt.h" 1 3 4
#pragma line 204 "/usr/include/unistd.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/environments.h" 1 3 4
#pragma line 23 "/usr/include/bits/environments.h" 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 24 "/usr/include/bits/environments.h" 2 3 4
#pragma line 208 "/usr/include/unistd.h" 2 3 4
#pragma line 218 "/usr/include/unistd.h" 3 4
#pragma line 1 "/usr/include/bits/types.h" 1 3 4
#pragma line 28 "/usr/include/bits/types.h" 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 29 "/usr/include/bits/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 31 "/usr/include/bits/types.h" 3 4
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
#pragma empty_line
#pragma empty_line
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#pragma empty_line
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#pragma line 131 "/usr/include/bits/types.h" 3 4
#pragma line 1 "/usr/include/bits/typesizes.h" 1 3 4
#pragma line 132 "/usr/include/bits/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
#pragma empty_line
typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;
#pragma empty_line
#pragma empty_line
typedef int __clockid_t;
#pragma empty_line
#pragma empty_line
typedef void * __timer_t;
#pragma empty_line
#pragma empty_line
typedef long int __blksize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
#pragma empty_line
#pragma empty_line
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
#pragma empty_line
#pragma empty_line
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
#pragma empty_line
typedef long int __ssize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
#pragma empty_line
#pragma empty_line
typedef long int __intptr_t;
#pragma empty_line
#pragma empty_line
typedef unsigned int __socklen_t;
#pragma line 219 "/usr/include/unistd.h" 2 3 4
#pragma empty_line
#pragma empty_line
typedef __ssize_t ssize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx2018/Vivado/2018.2/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/include/stddef.h" 1 3 4
#pragma line 216 "/opt/Xilinx2018/Vivado/2018.2/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
#pragma line 228 "/usr/include/unistd.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __gid_t gid_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __uid_t uid_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __off_t off_t;
#pragma line 256 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __pid_t pid_t;
#pragma line 275 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
#pragma line 288 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
#pragma line 305 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;
#pragma line 331 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
#pragma line 350 "/usr/include/unistd.h" 3 4
extern int close (int __fd);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
#pragma line 373 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) ;
#pragma line 414 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__)) ;
#pragma line 429 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__));
#pragma line 441 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int usleep (__useconds_t __useconds);
#pragma line 466 "/usr/include/unistd.h" 3 4
extern int pause (void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int chdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int fchdir (int __fd) __attribute__ ((__nothrow__)) ;
#pragma line 508 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__)) ;
#pragma line 522 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int dup (int __fd) __attribute__ ((__nothrow__)) ;
#pragma empty_line
#pragma empty_line
extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__));
#pragma line 540 "/usr/include/unistd.h" 3 4
extern char **__environ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int execv (__const char *__path, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int execle (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int execl (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int execvp (__const char *__file, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int execlp (__const char *__file, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma line 595 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__)) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void _exit (int __status) __attribute__ ((__noreturn__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/confname.h" 1 3 4
#pragma line 26 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,
#pragma empty_line
    _PC_MAX_CANON,
#pragma empty_line
    _PC_MAX_INPUT,
#pragma empty_line
    _PC_NAME_MAX,
#pragma empty_line
    _PC_PATH_MAX,
#pragma empty_line
    _PC_PIPE_BUF,
#pragma empty_line
    _PC_CHOWN_RESTRICTED,
#pragma empty_line
    _PC_NO_TRUNC,
#pragma empty_line
    _PC_VDISABLE,
#pragma empty_line
    _PC_SYNC_IO,
#pragma empty_line
    _PC_ASYNC_IO,
#pragma empty_line
    _PC_PRIO_IO,
#pragma empty_line
    _PC_SOCK_MAXBUF,
#pragma empty_line
    _PC_FILESIZEBITS,
#pragma empty_line
    _PC_REC_INCR_XFER_SIZE,
#pragma empty_line
    _PC_REC_MAX_XFER_SIZE,
#pragma empty_line
    _PC_REC_MIN_XFER_SIZE,
#pragma empty_line
    _PC_REC_XFER_ALIGN,
#pragma empty_line
    _PC_ALLOC_SIZE_MIN,
#pragma empty_line
    _PC_SYMLINK_MAX,
#pragma empty_line
    _PC_2_SYMLINKS
#pragma empty_line
  };
#pragma empty_line
#pragma empty_line
enum
  {
    _SC_ARG_MAX,
#pragma empty_line
    _SC_CHILD_MAX,
#pragma empty_line
    _SC_CLK_TCK,
#pragma empty_line
    _SC_NGROUPS_MAX,
#pragma empty_line
    _SC_OPEN_MAX,
#pragma empty_line
    _SC_STREAM_MAX,
#pragma empty_line
    _SC_TZNAME_MAX,
#pragma empty_line
    _SC_JOB_CONTROL,
#pragma empty_line
    _SC_SAVED_IDS,
#pragma empty_line
    _SC_REALTIME_SIGNALS,
#pragma empty_line
    _SC_PRIORITY_SCHEDULING,
#pragma empty_line
    _SC_TIMERS,
#pragma empty_line
    _SC_ASYNCHRONOUS_IO,
#pragma empty_line
    _SC_PRIORITIZED_IO,
#pragma empty_line
    _SC_SYNCHRONIZED_IO,
#pragma empty_line
    _SC_FSYNC,
#pragma empty_line
    _SC_MAPPED_FILES,
#pragma empty_line
    _SC_MEMLOCK,
#pragma empty_line
    _SC_MEMLOCK_RANGE,
#pragma empty_line
    _SC_MEMORY_PROTECTION,
#pragma empty_line
    _SC_MESSAGE_PASSING,
#pragma empty_line
    _SC_SEMAPHORES,
#pragma empty_line
    _SC_SHARED_MEMORY_OBJECTS,
#pragma empty_line
    _SC_AIO_LISTIO_MAX,
#pragma empty_line
    _SC_AIO_MAX,
#pragma empty_line
    _SC_AIO_PRIO_DELTA_MAX,
#pragma empty_line
    _SC_DELAYTIMER_MAX,
#pragma empty_line
    _SC_MQ_OPEN_MAX,
#pragma empty_line
    _SC_MQ_PRIO_MAX,
#pragma empty_line
    _SC_VERSION,
#pragma empty_line
    _SC_PAGESIZE,
#pragma empty_line
#pragma empty_line
    _SC_RTSIG_MAX,
#pragma empty_line
    _SC_SEM_NSEMS_MAX,
#pragma empty_line
    _SC_SEM_VALUE_MAX,
#pragma empty_line
    _SC_SIGQUEUE_MAX,
#pragma empty_line
    _SC_TIMER_MAX,
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    _SC_BC_BASE_MAX,
#pragma empty_line
    _SC_BC_DIM_MAX,
#pragma empty_line
    _SC_BC_SCALE_MAX,
#pragma empty_line
    _SC_BC_STRING_MAX,
#pragma empty_line
    _SC_COLL_WEIGHTS_MAX,
#pragma empty_line
    _SC_EQUIV_CLASS_MAX,
#pragma empty_line
    _SC_EXPR_NEST_MAX,
#pragma empty_line
    _SC_LINE_MAX,
#pragma empty_line
    _SC_RE_DUP_MAX,
#pragma empty_line
    _SC_CHARCLASS_NAME_MAX,
#pragma empty_line
#pragma empty_line
    _SC_2_VERSION,
#pragma empty_line
    _SC_2_C_BIND,
#pragma empty_line
    _SC_2_C_DEV,
#pragma empty_line
    _SC_2_FORT_DEV,
#pragma empty_line
    _SC_2_FORT_RUN,
#pragma empty_line
    _SC_2_SW_DEV,
#pragma empty_line
    _SC_2_LOCALEDEF,
#pragma empty_line
#pragma empty_line
    _SC_PII,
#pragma empty_line
    _SC_PII_XTI,
#pragma empty_line
    _SC_PII_SOCKET,
#pragma empty_line
    _SC_PII_INTERNET,
#pragma empty_line
    _SC_PII_OSI,
#pragma empty_line
    _SC_POLL,
#pragma empty_line
    _SC_SELECT,
#pragma empty_line
    _SC_UIO_MAXIOV,
#pragma empty_line
    _SC_IOV_MAX = _SC_UIO_MAXIOV,
#pragma empty_line
    _SC_PII_INTERNET_STREAM,
#pragma empty_line
    _SC_PII_INTERNET_DGRAM,
#pragma empty_line
    _SC_PII_OSI_COTS,
#pragma empty_line
    _SC_PII_OSI_CLTS,
#pragma empty_line
    _SC_PII_OSI_M,
#pragma empty_line
    _SC_T_IOV_MAX,
#pragma empty_line
#pragma empty_line
#pragma empty_line
    _SC_THREADS,
#pragma empty_line
    _SC_THREAD_SAFE_FUNCTIONS,
#pragma empty_line
    _SC_GETGR_R_SIZE_MAX,
#pragma empty_line
    _SC_GETPW_R_SIZE_MAX,
#pragma empty_line
    _SC_LOGIN_NAME_MAX,
#pragma empty_line
    _SC_TTY_NAME_MAX,
#pragma empty_line
    _SC_THREAD_DESTRUCTOR_ITERATIONS,
#pragma empty_line
    _SC_THREAD_KEYS_MAX,
#pragma empty_line
    _SC_THREAD_STACK_MIN,
#pragma empty_line
    _SC_THREAD_THREADS_MAX,
#pragma empty_line
    _SC_THREAD_ATTR_STACKADDR,
#pragma empty_line
    _SC_THREAD_ATTR_STACKSIZE,
#pragma empty_line
    _SC_THREAD_PRIORITY_SCHEDULING,
#pragma empty_line
    _SC_THREAD_PRIO_INHERIT,
#pragma empty_line
    _SC_THREAD_PRIO_PROTECT,
#pragma empty_line
    _SC_THREAD_PROCESS_SHARED,
#pragma empty_line
#pragma empty_line
    _SC_NPROCESSORS_CONF,
#pragma empty_line
    _SC_NPROCESSORS_ONLN,
#pragma empty_line
    _SC_PHYS_PAGES,
#pragma empty_line
    _SC_AVPHYS_PAGES,
#pragma empty_line
    _SC_ATEXIT_MAX,
#pragma empty_line
    _SC_PASS_MAX,
#pragma empty_line
#pragma empty_line
    _SC_XOPEN_VERSION,
#pragma empty_line
    _SC_XOPEN_XCU_VERSION,
#pragma empty_line
    _SC_XOPEN_UNIX,
#pragma empty_line
    _SC_XOPEN_CRYPT,
#pragma empty_line
    _SC_XOPEN_ENH_I18N,
#pragma empty_line
    _SC_XOPEN_SHM,
#pragma empty_line
#pragma empty_line
    _SC_2_CHAR_TERM,
#pragma empty_line
    _SC_2_C_VERSION,
#pragma empty_line
    _SC_2_UPE,
#pragma empty_line
#pragma empty_line
    _SC_XOPEN_XPG2,
#pragma empty_line
    _SC_XOPEN_XPG3,
#pragma empty_line
    _SC_XOPEN_XPG4,
#pragma empty_line
#pragma empty_line
    _SC_CHAR_BIT,
#pragma empty_line
    _SC_CHAR_MAX,
#pragma empty_line
    _SC_CHAR_MIN,
#pragma empty_line
    _SC_INT_MAX,
#pragma empty_line
    _SC_INT_MIN,
#pragma empty_line
    _SC_LONG_BIT,
#pragma empty_line
    _SC_WORD_BIT,
#pragma empty_line
    _SC_MB_LEN_MAX,
#pragma empty_line
    _SC_NZERO,
#pragma empty_line
    _SC_SSIZE_MAX,
#pragma empty_line
    _SC_SCHAR_MAX,
#pragma empty_line
    _SC_SCHAR_MIN,
#pragma empty_line
    _SC_SHRT_MAX,
#pragma empty_line
    _SC_SHRT_MIN,
#pragma empty_line
    _SC_UCHAR_MAX,
#pragma empty_line
    _SC_UINT_MAX,
#pragma empty_line
    _SC_ULONG_MAX,
#pragma empty_line
    _SC_USHRT_MAX,
#pragma empty_line
#pragma empty_line
    _SC_NL_ARGMAX,
#pragma empty_line
    _SC_NL_LANGMAX,
#pragma empty_line
    _SC_NL_MSGMAX,
#pragma empty_line
    _SC_NL_NMAX,
#pragma empty_line
    _SC_NL_SETMAX,
#pragma empty_line
    _SC_NL_TEXTMAX,
#pragma empty_line
#pragma empty_line
    _SC_XBS5_ILP32_OFF32,
#pragma empty_line
    _SC_XBS5_ILP32_OFFBIG,
#pragma empty_line
    _SC_XBS5_LP64_OFF64,
#pragma empty_line
    _SC_XBS5_LPBIG_OFFBIG,
#pragma empty_line
#pragma empty_line
    _SC_XOPEN_LEGACY,
#pragma empty_line
    _SC_XOPEN_REALTIME,
#pragma empty_line
    _SC_XOPEN_REALTIME_THREADS,
#pragma empty_line
#pragma empty_line
    _SC_ADVISORY_INFO,
#pragma empty_line
    _SC_BARRIERS,
#pragma empty_line
    _SC_BASE,
#pragma empty_line
    _SC_C_LANG_SUPPORT,
#pragma empty_line
    _SC_C_LANG_SUPPORT_R,
#pragma empty_line
    _SC_CLOCK_SELECTION,
#pragma empty_line
    _SC_CPUTIME,
#pragma empty_line
    _SC_THREAD_CPUTIME,
#pragma empty_line
    _SC_DEVICE_IO,
#pragma empty_line
    _SC_DEVICE_SPECIFIC,
#pragma empty_line
    _SC_DEVICE_SPECIFIC_R,
#pragma empty_line
    _SC_FD_MGMT,
#pragma empty_line
    _SC_FIFO,
#pragma empty_line
    _SC_PIPE,
#pragma empty_line
    _SC_FILE_ATTRIBUTES,
#pragma empty_line
    _SC_FILE_LOCKING,
#pragma empty_line
    _SC_FILE_SYSTEM,
#pragma empty_line
    _SC_MONOTONIC_CLOCK,
#pragma empty_line
    _SC_MULTI_PROCESS,
#pragma empty_line
    _SC_SINGLE_PROCESS,
#pragma empty_line
    _SC_NETWORKING,
#pragma empty_line
    _SC_READER_WRITER_LOCKS,
#pragma empty_line
    _SC_SPIN_LOCKS,
#pragma empty_line
    _SC_REGEXP,
#pragma empty_line
    _SC_REGEX_VERSION,
#pragma empty_line
    _SC_SHELL,
#pragma empty_line
    _SC_SIGNALS,
#pragma empty_line
    _SC_SPAWN,
#pragma empty_line
    _SC_SPORADIC_SERVER,
#pragma empty_line
    _SC_THREAD_SPORADIC_SERVER,
#pragma empty_line
    _SC_SYSTEM_DATABASE,
#pragma empty_line
    _SC_SYSTEM_DATABASE_R,
#pragma empty_line
    _SC_TIMEOUTS,
#pragma empty_line
    _SC_TYPED_MEMORY_OBJECTS,
#pragma empty_line
    _SC_USER_GROUPS,
#pragma empty_line
    _SC_USER_GROUPS_R,
#pragma empty_line
    _SC_2_PBS,
#pragma empty_line
    _SC_2_PBS_ACCOUNTING,
#pragma empty_line
    _SC_2_PBS_LOCATE,
#pragma empty_line
    _SC_2_PBS_MESSAGE,
#pragma empty_line
    _SC_2_PBS_TRACK,
#pragma empty_line
    _SC_SYMLOOP_MAX,
#pragma empty_line
    _SC_STREAMS,
#pragma empty_line
    _SC_2_PBS_CHECKPOINT,
#pragma empty_line
#pragma empty_line
    _SC_V6_ILP32_OFF32,
#pragma empty_line
    _SC_V6_ILP32_OFFBIG,
#pragma empty_line
    _SC_V6_LP64_OFF64,
#pragma empty_line
    _SC_V6_LPBIG_OFFBIG,
#pragma empty_line
#pragma empty_line
    _SC_HOST_NAME_MAX,
#pragma empty_line
    _SC_TRACE,
#pragma empty_line
    _SC_TRACE_EVENT_FILTER,
#pragma empty_line
    _SC_TRACE_INHERIT,
#pragma empty_line
    _SC_TRACE_LOG,
#pragma empty_line
#pragma empty_line
    _SC_LEVEL1_ICACHE_SIZE,
#pragma empty_line
    _SC_LEVEL1_ICACHE_ASSOC,
#pragma empty_line
    _SC_LEVEL1_ICACHE_LINESIZE,
#pragma empty_line
    _SC_LEVEL1_DCACHE_SIZE,
#pragma empty_line
    _SC_LEVEL1_DCACHE_ASSOC,
#pragma empty_line
    _SC_LEVEL1_DCACHE_LINESIZE,
#pragma empty_line
    _SC_LEVEL2_CACHE_SIZE,
#pragma empty_line
    _SC_LEVEL2_CACHE_ASSOC,
#pragma empty_line
    _SC_LEVEL2_CACHE_LINESIZE,
#pragma empty_line
    _SC_LEVEL3_CACHE_SIZE,
#pragma empty_line
    _SC_LEVEL3_CACHE_ASSOC,
#pragma empty_line
    _SC_LEVEL3_CACHE_LINESIZE,
#pragma empty_line
    _SC_LEVEL4_CACHE_SIZE,
#pragma empty_line
    _SC_LEVEL4_CACHE_ASSOC,
#pragma empty_line
    _SC_LEVEL4_CACHE_LINESIZE,
#pragma empty_line
#pragma empty_line
#pragma empty_line
    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,
#pragma empty_line
    _SC_RAW_SOCKETS,
#pragma empty_line
#pragma empty_line
    _SC_V7_ILP32_OFF32,
#pragma empty_line
    _SC_V7_ILP32_OFFBIG,
#pragma empty_line
    _SC_V7_LP64_OFF64,
#pragma empty_line
    _SC_V7_LPBIG_OFFBIG,
#pragma empty_line
#pragma empty_line
    _SC_SS_REPL_MAX,
#pragma empty_line
#pragma empty_line
    _SC_TRACE_EVENT_NAME_MAX,
#pragma empty_line
    _SC_TRACE_NAME_MAX,
#pragma empty_line
    _SC_TRACE_SYS_MAX,
#pragma empty_line
    _SC_TRACE_USER_EVENT_MAX,
#pragma empty_line
#pragma empty_line
    _SC_XOPEN_STREAMS,
#pragma empty_line
#pragma empty_line
    _SC_THREAD_ROBUST_PRIO_INHERIT,
#pragma empty_line
    _SC_THREAD_ROBUST_PRIO_PROTECT
#pragma empty_line
  };
#pragma empty_line
#pragma empty_line
enum
  {
    _CS_PATH,
#pragma empty_line
#pragma empty_line
    _CS_V6_WIDTH_RESTRICTED_ENVS,
#pragma empty_line
#pragma empty_line
#pragma empty_line
    _CS_GNU_LIBC_VERSION,
#pragma empty_line
    _CS_GNU_LIBPTHREAD_VERSION,
#pragma empty_line
#pragma empty_line
    _CS_V5_WIDTH_RESTRICTED_ENVS,
#pragma empty_line
#pragma empty_line
#pragma empty_line
    _CS_V7_WIDTH_RESTRICTED_ENVS,
#pragma empty_line
#pragma empty_line
#pragma empty_line
    _CS_LFS_CFLAGS = 1000,
#pragma empty_line
    _CS_LFS_LDFLAGS,
#pragma empty_line
    _CS_LFS_LIBS,
#pragma empty_line
    _CS_LFS_LINTFLAGS,
#pragma empty_line
    _CS_LFS64_CFLAGS,
#pragma empty_line
    _CS_LFS64_LDFLAGS,
#pragma empty_line
    _CS_LFS64_LIBS,
#pragma empty_line
    _CS_LFS64_LINTFLAGS,
#pragma empty_line
#pragma empty_line
    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
#pragma empty_line
    _CS_XBS5_ILP32_OFF32_LDFLAGS,
#pragma empty_line
    _CS_XBS5_ILP32_OFF32_LIBS,
#pragma empty_line
    _CS_XBS5_ILP32_OFF32_LINTFLAGS,
#pragma empty_line
    _CS_XBS5_ILP32_OFFBIG_CFLAGS,
#pragma empty_line
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,
#pragma empty_line
    _CS_XBS5_ILP32_OFFBIG_LIBS,
#pragma empty_line
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
#pragma empty_line
    _CS_XBS5_LP64_OFF64_CFLAGS,
#pragma empty_line
    _CS_XBS5_LP64_OFF64_LDFLAGS,
#pragma empty_line
    _CS_XBS5_LP64_OFF64_LIBS,
#pragma empty_line
    _CS_XBS5_LP64_OFF64_LINTFLAGS,
#pragma empty_line
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,
#pragma empty_line
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
#pragma empty_line
    _CS_XBS5_LPBIG_OFFBIG_LIBS,
#pragma empty_line
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,
#pragma empty_line
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFF32_LIBS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,
#pragma empty_line
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
#pragma empty_line
    _CS_POSIX_V6_LP64_OFF64_CFLAGS,
#pragma empty_line
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V6_LP64_OFF64_LIBS,
#pragma empty_line
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
#pragma empty_line
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
#pragma empty_line
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
#pragma empty_line
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,
#pragma empty_line
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFF32_LIBS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,
#pragma empty_line
    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,
#pragma empty_line
    _CS_POSIX_V7_LP64_OFF64_CFLAGS,
#pragma empty_line
    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V7_LP64_OFF64_LIBS,
#pragma empty_line
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
#pragma empty_line
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
#pragma empty_line
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
#pragma empty_line
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
#pragma empty_line
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,
#pragma empty_line
#pragma empty_line
    _CS_V6_ENV,
#pragma empty_line
    _CS_V7_ENV
#pragma empty_line
  };
#pragma line 607 "/usr/include/unistd.h" 2 3 4
#pragma empty_line
#pragma empty_line
extern long int pathconf (__const char *__path, int __name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
extern long int sysconf (int __name) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __pid_t getpid (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
extern __pid_t getppid (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __pid_t getpgrp (void) __attribute__ ((__nothrow__));
#pragma line 643 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__));
#pragma empty_line
extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
#pragma line 669 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__));
#pragma line 686 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uid_t getuid (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
extern __uid_t geteuid (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
extern __gid_t getgid (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
extern __gid_t getegid (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__)) ;
#pragma line 719 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__));
#pragma line 775 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __pid_t vfork (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *ttyname (int __fd) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int isatty (int __fd) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ttyslot (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int link (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int symlink (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;
#pragma empty_line
#pragma empty_line
extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int unlink (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int unlinkat (int __fd, __const char *__name, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int rmdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *getlogin (void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int setlogin (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
#pragma line 890 "/usr/include/unistd.h" 3 4
#pragma line 1 "/usr/include/getopt.h" 1 3 4
#pragma line 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
#pragma line 73 "/usr/include/getopt.h" 3 4
extern int optind;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int opterr;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int optopt;
#pragma line 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__));
#pragma line 891 "/usr/include/unistd.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int sethostname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int sethostid (long int __id) __attribute__ ((__nothrow__)) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int vhangup (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
extern int revoke (__const char *__file) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int acct (__const char *__name) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *getusershell (void) __attribute__ ((__nothrow__));
extern void endusershell (void) __attribute__ ((__nothrow__));
extern void setusershell (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__)) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int chroot (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
#pragma line 976 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int gethostid (void);
#pragma empty_line
#pragma empty_line
extern void sync (void) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int getpagesize (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int getdtablesize (void) __attribute__ ((__nothrow__));
#pragma line 1007 "/usr/include/unistd.h" 3 4
extern int truncate (__const char *__file, __off_t __length)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
#pragma line 1026 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__)) ;
#pragma line 1047 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__)) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__));
#pragma line 1068 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__));
#pragma line 1091 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
#pragma line 1122 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
#pragma line 1151 "/usr/include/unistd.h" 3 4
extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
#pragma line 1160 "/usr/include/unistd.h" 3 4
#pragma empty_line
#pragma line 7 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/randombytes.h" 2
#pragma empty_line
#pragma empty_line
#pragma line 8 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/randombytes.h"
void randombytes(unsigned char *x, size_t xlen);
#pragma line 6 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c" 2
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/packing.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
void pack_pk(unsigned char pk[(32U + 5U*((256U*(23U - 14U))/8))],
             const unsigned char rho[32U], const polyveck *t1);
void pack_sk(unsigned char pk[(32U + 5U*((256U*(23U - 14U))/8))],
             const unsigned char rho[32U],
             const unsigned char key[32U],
             const unsigned char tr[48U],
             const polyvecl *s1,
             const polyveck *s2,
             const polyveck *t0);
void pack_sig(unsigned char sig[(4U*((256U*(23U - 3))/8) + (96U + 5U) + (256U/8 + 8))],
              const polyvecl *z, const polyveck *h, const poly *c);
#pragma empty_line
void unpack_pk(unsigned char rho[32U], polyveck *t1,
               const unsigned char sk[(2*32U + (4U + 5U)*((256U*4U)/8) + 48U + 5U*((256U*14U)/8))]);
void unpack_sk(unsigned char rho[32U],
               unsigned char key[32U],
               unsigned char tr[48U],
               polyvecl *s1,
               polyveck *s2,
               polyveck *t0,
               const unsigned char sk[(2*32U + (4U + 5U)*((256U*4U)/8) + 48U + 5U*((256U*14U)/8))]);
void unpack_sig(polyvecl *z, polyveck *h, poly *c,
                const unsigned char sig[(4U*((256U*(23U - 3))/8) + (96U + 5U) + (256U/8 + 8))]);
#pragma line 10 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c" 2
#pragma line 21 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c"
void expand_mat(polyvecl mat[5U], const unsigned char rho[32U]) {
  unsigned int i, j, pos, ctr;
  unsigned char inbuf[32U + 1];
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  unsigned char outbuf[5*168];
  uint32_t val;
#pragma empty_line
  for(i = 0; i < 32U; ++i)
    inbuf[i] = rho[i];
#pragma empty_line
  for(i = 0; i < 5U; ++i) {
    for(j = 0; j < 4U; ++j) {
      ctr = pos = 0;
      inbuf[32U] = i + (j << 4);
#pragma empty_line
      shake128(outbuf, sizeof(outbuf), inbuf, 32U + 1);
#pragma empty_line
      while(ctr < 256U) {
        val = outbuf[pos++];
        val |= (uint32_t)outbuf[pos++] << 8;
        val |= (uint32_t)outbuf[pos++] << 16;
        val &= 0x7FFFFF;
#pragma empty_line
#pragma empty_line
        if(val < 8380417U)
          mat[i].vec[j].coeffs[ctr++] = val;
      }
    }
  }
}
#pragma line 66 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c"
void challenge(poly *c,
               const unsigned char mu[48U],
               const polyveck *w1)
{
  unsigned int i, b, pos;
  unsigned char inbuf[48U + 5U*((256U*4)/8)];
  unsigned char outbuf[136];
  uint64_t state[25], signs, mask;
#pragma empty_line
  for(i = 0; i < 48U; ++i)
    inbuf[i] = mu[i];
  for(i = 0; i < 5U; ++i)
    polyw1_pack(inbuf + 48U + i*((256U*4)/8), w1->vec+i);
#pragma empty_line
  shake256_absorb(state, inbuf, sizeof(inbuf));
  shake256_squeezeblocks(outbuf, 1, state);
#pragma empty_line
  signs = 0;
  for(i = 0; i < 8; ++i)
    signs |= (uint64_t)outbuf[i] << 8*i;
#pragma empty_line
  pos = 8;
  mask = 1;
#pragma empty_line
  for(i = 0; i < 256U; ++i)
    c->coeffs[i] = 0;
#pragma empty_line
  for(i = 196; i < 256; ++i) {
    do {
      if(pos >= 136) {
        shake256_squeezeblocks(outbuf, 1, state);
        pos = 0;
      }
#pragma empty_line
      b = outbuf[pos++];
    } while(b > i);
#pragma empty_line
    c->coeffs[i] = c->coeffs[b];
    c->coeffs[b] = (signs & mask) ? 8380417U - 1 : 1;
    mask <<= 1;
  }
}
#pragma line 121 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c"
int crypto_sign_keypair(unsigned char *pk, unsigned char *sk) {
  unsigned int i;
  unsigned char seedbuf[3*32U];
  unsigned char tr[48U];
  unsigned char *rho, *rhoprime, *key;
  uint16_t nonce = 0;
  polyvecl mat[5U];
  polyvecl s1, s1hat;
  polyveck s2, t, t1, t0;
#pragma empty_line
#pragma empty_line
  randombytes(seedbuf, 32U);
  shake256(seedbuf, 3*32U, seedbuf, 32U);
  rho = seedbuf;
  rhoprime = rho + 32U;
  key = rho + 2*32U;
#pragma empty_line
#pragma empty_line
  expand_mat(mat, rho);
#pragma empty_line
#pragma empty_line
  for(i = 0; i < 4U; ++i)
    poly_uniform_eta(&s1.vec[i], rhoprime, nonce++);
  for(i = 0; i < 5U; ++i)
    poly_uniform_eta(&s2.vec[i], rhoprime, nonce++);
#pragma empty_line
#pragma empty_line
  s1hat = s1;
  polyvecl_ntt(&s1hat);
  for(i = 0; i < 5U; ++i) {
    polyvecl_pointwise_acc_invmontgomery(&t.vec[i], mat+i, &s1hat);
    poly_invntt_montgomery(t.vec+i);
  }
#pragma empty_line
#pragma empty_line
  polyveck_add(&t, &t, &s2);
#pragma empty_line
#pragma empty_line
  polyveck_freeze(&t);
  polyveck_power2round(&t1, &t0, &t);
  pack_pk(pk, rho, &t1);
#pragma empty_line
#pragma empty_line
  shake256(tr, 48U, pk, 1472U);
  pack_sk(sk, rho, key, tr, &s1, &s2, &t0);
#pragma empty_line
  return 0;
}
#pragma line 185 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c"
int crypto_sign(unsigned char sm[3400 + 2701U],
                unsigned long long smlen[1],
                const unsigned char m[3400],
                unsigned long long mlen,
                const unsigned char sk[3504U])
{
  unsigned long long i, j;
  unsigned int n;
  unsigned char seedbuf[2*32U + 48U];
  unsigned char *rho, *key, *mu, *tr;
  uint16_t nonce = 0;
  poly c, chat;
  polyvecl mat[5U], s1, y, yhat, z;
  polyveck s2, t0, w, w1;
  polyveck h, wcs2, wcs20, ct0, tmp;
#pragma empty_line
  rho = seedbuf;
  key = seedbuf + 32U;
  mu = seedbuf + 2*32U;
  tr = sm + 2701U - 48U;
  unpack_sk(rho, key, tr, &s1, &s2, &t0, sk);
#pragma empty_line
#pragma empty_line
  for(i = 0; i < mlen; ++i)
    sm[2701U + i] = m[i];
#pragma empty_line
#pragma empty_line
  shake256(mu, 48U, sm + 2701U - 48U, 48U + mlen);
#pragma empty_line
#pragma empty_line
  expand_mat(mat, rho);
  polyvecl_ntt(&s1);
  polyveck_ntt(&s2);
  polyveck_ntt(&t0);
#pragma empty_line
  rej:
#pragma empty_line
  for(i = 0; i < 4U; ++i)
    poly_uniform_gamma1m1(y.vec+i, key, nonce++);
#pragma empty_line
#pragma empty_line
  yhat = y;
  polyvecl_ntt(&yhat);
  for(i = 0; i < 5U; ++i) {
    polyvecl_pointwise_acc_invmontgomery(w.vec+i, mat+i, &yhat);
    poly_invntt_montgomery(w.vec+i);
  }
#pragma empty_line
#pragma empty_line
  polyveck_freeze(&w);
  polyveck_decompose(&w1, &tmp, &w);
  challenge(&c, mu, &w1);
#pragma empty_line
#pragma empty_line
  chat = c;
  poly_ntt(&chat);
  for(i = 0; i < 4U; ++i) {
    poly_pointwise_invmontgomery(z.vec+i, &chat, s1.vec+i);
    poly_invntt_montgomery(z.vec+i);
  }
  polyvecl_add(&z, &z, &y);
  polyvecl_freeze(&z);
  if(polyvecl_chknorm(&z, ((8380417U - 1U)/16U) - 275U))
    goto rej;
#pragma empty_line
#pragma empty_line
  for(i = 0; i < 5U; ++i) {
    poly_pointwise_invmontgomery(wcs2.vec+i, &chat, s2.vec+i);
    poly_invntt_montgomery(wcs2.vec+i);
  }
  polyveck_sub(&wcs2, &w, &wcs2);
  polyveck_freeze(&wcs2);
  polyveck_decompose(&tmp, &wcs20, &wcs2);
  polyveck_freeze(&wcs20);
  if(polyveck_chknorm(&wcs20, (((8380417U - 1U)/16U)/2U) - 275U))
    goto rej;
#pragma empty_line
  for(i = 0; i < 5U; ++i)
    for(j = 0; j < 256U; ++j)
      if(tmp.vec[i].coeffs[j] != w1.vec[i].coeffs[j])
        goto rej;
#pragma empty_line
#pragma empty_line
  for(i = 0; i < 5U; ++i) {
    poly_pointwise_invmontgomery(ct0.vec+i, &chat, t0.vec+i);
    poly_invntt_montgomery(ct0.vec+i);
  }
#pragma empty_line
  polyveck_freeze(&ct0);
  if(polyveck_chknorm(&ct0, (((8380417U - 1U)/16U)/2U) - 275U))
    goto rej;
#pragma empty_line
  polyveck_add(&tmp, &wcs2, &ct0);
  polyveck_neg(&ct0);
  polyveck_freeze(&tmp);
  n = polyveck_make_hint(&h, &tmp, &ct0);
  if(n > 96U)
    goto rej;
#pragma empty_line
#pragma empty_line
  pack_sig(sm, &z, &h, &c);
#pragma empty_line
  *smlen = mlen + 2701U;
  return 0;
}
#pragma line 306 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c"
int crypto_sign_open(unsigned char m[3400],
                     unsigned long long mlen[1],
                     const unsigned char sm[3400 + 2701U],
                     unsigned long long smlen,
                     const unsigned char pk[1472U])
{
  unsigned long long i;
  unsigned char rho[32U];
  unsigned char mu[48U];
  poly c, chat, cp;
  polyvecl mat[5U], z;
  polyveck t1, w1, h, tmp1, tmp2;
#pragma empty_line
  if(smlen < 2701U){
   *mlen = (unsigned long long) -1;
     for(i = 0; i < smlen; ++i)
       m[i] = 0;
#pragma empty_line
     return -1;
  }
#pragma empty_line
#pragma empty_line
  *mlen = smlen - 2701U;
#pragma empty_line
  unpack_pk(rho, &t1, pk);
  unpack_sig(&z, &h, &c, sm);
  if(polyvecl_chknorm(&z, ((8380417U - 1U)/16U) - 275U)){
   *mlen = (unsigned long long) -1;
     for(i = 0; i < smlen; ++i)
       m[i] = 0;
#pragma empty_line
     return -1;
  }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  for(i = 0; i < 1472U; ++i)
    m[2701U - 1472U + i] = pk[i];
#pragma empty_line
  if(sm != m)
    for(i = 0; i < *mlen; ++i)
      m[2701U + i] = sm[2701U + i];
#pragma empty_line
  shake256(m + 2701U - 48U, 48U,
           m + 2701U - 1472U, 1472U);
  shake256(mu, 48U, m + 2701U - 48U, 48U + *mlen);
#pragma empty_line
  expand_mat(mat, rho);
#pragma empty_line
#pragma empty_line
  polyvecl_ntt(&z);
  for(i = 0; i < 5U ; ++i)
    polyvecl_pointwise_acc_invmontgomery(tmp1.vec+i, mat+i, &z);
#pragma empty_line
  chat = c;
  poly_ntt(&chat);
  polyveck_shiftl(&t1, 14U);
  polyveck_ntt(&t1);
  for(i = 0; i < 5U; ++i)
    poly_pointwise_invmontgomery(tmp2.vec+i, &chat, t1.vec+i);
#pragma empty_line
  polyveck_sub(&tmp1, &tmp1, &tmp2);
  polyveck_freeze(&tmp1);
  polyveck_invntt_montgomery(&tmp1);
#pragma empty_line
#pragma empty_line
  polyveck_freeze(&tmp1);
  polyveck_use_hint(&w1, &tmp1, &h);
#pragma line 388 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c"
  for(i = 0; i < *mlen; ++i)
    m[i] = sm[2701U + i];
#pragma empty_line
  return 0;
#pragma line 400 "/home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/sign.c"
}
