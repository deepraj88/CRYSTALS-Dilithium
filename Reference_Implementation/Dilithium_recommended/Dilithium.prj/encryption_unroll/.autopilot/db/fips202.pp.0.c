# 1 "fips202.c"
# 1 "fips202.c" 1
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
# 1 "fips202.c" 2







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
# 9 "fips202.c" 2
# 1 "/opt/apps/glibc/2.14/include/stdlib.h" 1
# 33 "/opt/apps/glibc/2.14/include/stdlib.h"
# 1 "/opt/Xilinx2018/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3
# 31 "/opt/Xilinx2018/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;




typedef int wchar_t;
# 34 "/opt/apps/glibc/2.14/include/stdlib.h" 2








# 1 "/opt/apps/glibc/2.14/include/bits/waitflags.h" 1
# 43 "/opt/apps/glibc/2.14/include/stdlib.h" 2
# 1 "/opt/apps/glibc/2.14/include/bits/waitstatus.h" 1
# 65 "/opt/apps/glibc/2.14/include/bits/waitstatus.h"
# 1 "/opt/apps/glibc/2.14/include/endian.h" 1
# 37 "/opt/apps/glibc/2.14/include/endian.h"
# 1 "/opt/apps/glibc/2.14/include/bits/endian.h" 1
# 38 "/opt/apps/glibc/2.14/include/endian.h" 2
# 61 "/opt/apps/glibc/2.14/include/endian.h"
# 1 "/opt/apps/glibc/2.14/include/bits/byteswap.h" 1
# 28 "/opt/apps/glibc/2.14/include/bits/byteswap.h"
# 1 "/opt/apps/glibc/2.14/include/bits/wordsize.h" 1
# 29 "/opt/apps/glibc/2.14/include/bits/byteswap.h" 2
# 62 "/opt/apps/glibc/2.14/include/endian.h" 2
# 66 "/opt/apps/glibc/2.14/include/bits/waitstatus.h" 2

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 44 "/opt/apps/glibc/2.14/include/stdlib.h" 2
# 68 "/opt/apps/glibc/2.14/include/stdlib.h"
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 98 "/opt/apps/glibc/2.14/include/stdlib.h"
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 140 "/opt/apps/glibc/2.14/include/stdlib.h"
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 311 "/opt/apps/glibc/2.14/include/stdlib.h"
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





# 1 "/opt/apps/glibc/2.14/include/sys/types.h" 1
# 30 "/opt/apps/glibc/2.14/include/sys/types.h"
# 1 "/opt/apps/glibc/2.14/include/bits/types.h" 1
# 28 "/opt/apps/glibc/2.14/include/bits/types.h"
# 1 "/opt/apps/glibc/2.14/include/bits/wordsize.h" 1
# 29 "/opt/apps/glibc/2.14/include/bits/types.h" 2


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 131 "/opt/apps/glibc/2.14/include/bits/types.h"
# 1 "/opt/apps/glibc/2.14/include/bits/typesizes.h" 1
# 132 "/opt/apps/glibc/2.14/include/bits/types.h" 2


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

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 31 "/opt/apps/glibc/2.14/include/sys/types.h" 2



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 61 "/opt/apps/glibc/2.14/include/sys/types.h"
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 99 "/opt/apps/glibc/2.14/include/sys/types.h"
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/opt/apps/glibc/2.14/include/sys/types.h"
# 1 "/opt/apps/glibc/2.14/include/time.h" 1
# 60 "/opt/apps/glibc/2.14/include/time.h"
typedef __clock_t clock_t;
# 76 "/opt/apps/glibc/2.14/include/time.h"
typedef __time_t time_t;
# 92 "/opt/apps/glibc/2.14/include/time.h"
typedef __clockid_t clockid_t;
# 104 "/opt/apps/glibc/2.14/include/time.h"
typedef __timer_t timer_t;
# 134 "/opt/apps/glibc/2.14/include/sys/types.h" 2
# 147 "/opt/apps/glibc/2.14/include/sys/types.h"
# 1 "/opt/Xilinx2018/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3
# 148 "/opt/apps/glibc/2.14/include/sys/types.h" 2



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 201 "/opt/apps/glibc/2.14/include/sys/types.h"
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 220 "/opt/apps/glibc/2.14/include/sys/types.h"
# 1 "/opt/apps/glibc/2.14/include/sys/select.h" 1
# 31 "/opt/apps/glibc/2.14/include/sys/select.h"
# 1 "/opt/apps/glibc/2.14/include/bits/select.h" 1
# 23 "/opt/apps/glibc/2.14/include/bits/select.h"
# 1 "/opt/apps/glibc/2.14/include/bits/wordsize.h" 1
# 24 "/opt/apps/glibc/2.14/include/bits/select.h" 2
# 32 "/opt/apps/glibc/2.14/include/sys/select.h" 2


# 1 "/opt/apps/glibc/2.14/include/bits/sigset.h" 1
# 24 "/opt/apps/glibc/2.14/include/bits/sigset.h"
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/opt/apps/glibc/2.14/include/sys/select.h" 2



typedef __sigset_t sigset_t;






# 1 "/opt/apps/glibc/2.14/include/time.h" 1
# 120 "/opt/apps/glibc/2.14/include/time.h"
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/opt/apps/glibc/2.14/include/sys/select.h" 2

# 1 "/opt/apps/glibc/2.14/include/bits/time.h" 1
# 31 "/opt/apps/glibc/2.14/include/bits/time.h"
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/opt/apps/glibc/2.14/include/sys/select.h" 2


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/opt/apps/glibc/2.14/include/sys/select.h"
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 109 "/opt/apps/glibc/2.14/include/sys/select.h"
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/opt/apps/glibc/2.14/include/sys/select.h"
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 221 "/opt/apps/glibc/2.14/include/sys/types.h" 2


# 1 "/opt/apps/glibc/2.14/include/sys/sysmacros.h" 1
# 32 "/opt/apps/glibc/2.14/include/sys/sysmacros.h"
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__));
# 224 "/opt/apps/glibc/2.14/include/sys/types.h" 2





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 271 "/opt/apps/glibc/2.14/include/sys/types.h"
# 1 "/opt/apps/glibc/2.14/include/bits/pthreadtypes.h" 1
# 23 "/opt/apps/glibc/2.14/include/bits/pthreadtypes.h"
# 1 "/opt/apps/glibc/2.14/include/bits/wordsize.h" 1
# 24 "/opt/apps/glibc/2.14/include/bits/pthreadtypes.h" 2
# 50 "/opt/apps/glibc/2.14/include/bits/pthreadtypes.h"
typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 76 "/opt/apps/glibc/2.14/include/bits/pthreadtypes.h"
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 101 "/opt/apps/glibc/2.14/include/bits/pthreadtypes.h"
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
# 187 "/opt/apps/glibc/2.14/include/bits/pthreadtypes.h"
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 272 "/opt/apps/glibc/2.14/include/sys/types.h" 2
# 321 "/opt/apps/glibc/2.14/include/stdlib.h" 2






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 471 "/opt/apps/glibc/2.14/include/stdlib.h"
extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;
# 485 "/opt/apps/glibc/2.14/include/stdlib.h"
extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));




# 1 "/opt/apps/glibc/2.14/include/alloca.h" 1
# 25 "/opt/apps/glibc/2.14/include/alloca.h"
# 1 "/opt/Xilinx2018/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3
# 26 "/opt/apps/glibc/2.14/include/alloca.h" 2







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));
# 498 "/opt/apps/glibc/2.14/include/stdlib.h" 2





extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 536 "/opt/apps/glibc/2.14/include/stdlib.h"
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 560 "/opt/apps/glibc/2.14/include/stdlib.h"
extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 606 "/opt/apps/glibc/2.14/include/stdlib.h"
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 620 "/opt/apps/glibc/2.14/include/stdlib.h"
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/opt/apps/glibc/2.14/include/stdlib.h"
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 663 "/opt/apps/glibc/2.14/include/stdlib.h"
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 717 "/opt/apps/glibc/2.14/include/stdlib.h"
extern int system (__const char *__command) ;
# 734 "/opt/apps/glibc/2.14/include/stdlib.h"
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);
# 755 "/opt/apps/glibc/2.14/include/stdlib.h"
extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 771 "/opt/apps/glibc/2.14/include/stdlib.h"
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
# 808 "/opt/apps/glibc/2.14/include/stdlib.h"
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));
# 885 "/opt/apps/glibc/2.14/include/stdlib.h"
extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 896 "/opt/apps/glibc/2.14/include/stdlib.h"
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 948 "/opt/apps/glibc/2.14/include/stdlib.h"
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 10 "fips202.c" 2
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
# 11 "fips202.c" 2
# 24 "fips202.c"
static uint64_t load64(const unsigned char *x) {
  unsigned int i;
  uint64_t r = 0;

  for (i = 0; i < 8; ++i)
    r |= (uint64_t)x[i] << 8*i;

  return r;
}
# 42 "fips202.c"
static void store64(unsigned char *x, uint64_t u) {
  unsigned int i;

  for(i = 0; i < 8; ++i)
    x[i] = u >> 8*i;
}


static const uint64_t KeccakF_RoundConstants[24] = {
  (uint64_t)0x0000000000000001ULL,
  (uint64_t)0x0000000000008082ULL,
  (uint64_t)0x800000000000808aULL,
  (uint64_t)0x8000000080008000ULL,
  (uint64_t)0x000000000000808bULL,
  (uint64_t)0x0000000080000001ULL,
  (uint64_t)0x8000000080008081ULL,
  (uint64_t)0x8000000000008009ULL,
  (uint64_t)0x000000000000008aULL,
  (uint64_t)0x0000000000000088ULL,
  (uint64_t)0x0000000080008009ULL,
  (uint64_t)0x000000008000000aULL,
  (uint64_t)0x000000008000808bULL,
  (uint64_t)0x800000000000008bULL,
  (uint64_t)0x8000000000008089ULL,
  (uint64_t)0x8000000000008003ULL,
  (uint64_t)0x8000000000008002ULL,
  (uint64_t)0x8000000000000080ULL,
  (uint64_t)0x000000000000800aULL,
  (uint64_t)0x800000008000000aULL,
  (uint64_t)0x8000000080008081ULL,
  (uint64_t)0x8000000000008080ULL,
  (uint64_t)0x0000000080000001ULL,
  (uint64_t)0x8000000080008008ULL
};
# 84 "fips202.c"
void KeccakF1600_StatePermute(uint64_t *state)
{
        int round;

        uint64_t Aba, Abe, Abi, Abo, Abu;
        uint64_t Aga, Age, Agi, Ago, Agu;
        uint64_t Aka, Ake, Aki, Ako, Aku;
        uint64_t Ama, Ame, Ami, Amo, Amu;
        uint64_t Asa, Ase, Asi, Aso, Asu;
        uint64_t BCa, BCe, BCi, BCo, BCu;
        uint64_t Da, De, Di, Do, Du;
        uint64_t Eba, Ebe, Ebi, Ebo, Ebu;
        uint64_t Ega, Ege, Egi, Ego, Egu;
        uint64_t Eka, Eke, Eki, Eko, Eku;
        uint64_t Ema, Eme, Emi, Emo, Emu;
        uint64_t Esa, Ese, Esi, Eso, Esu;


        Aba = state[ 0];
        Abe = state[ 1];
        Abi = state[ 2];
        Abo = state[ 3];
        Abu = state[ 4];
        Aga = state[ 5];
        Age = state[ 6];
        Agi = state[ 7];
        Ago = state[ 8];
        Agu = state[ 9];
        Aka = state[10];
        Ake = state[11];
        Aki = state[12];
        Ako = state[13];
        Aku = state[14];
        Ama = state[15];
        Ame = state[16];
        Ami = state[17];
        Amo = state[18];
        Amu = state[19];
        Asa = state[20];
        Ase = state[21];
        Asi = state[22];
        Aso = state[23];
        Asu = state[24];

        for( round = 0; round < 24; round += 2 )
        {

            BCa = Aba^Aga^Aka^Ama^Asa;
            BCe = Abe^Age^Ake^Ame^Ase;
            BCi = Abi^Agi^Aki^Ami^Asi;
            BCo = Abo^Ago^Ako^Amo^Aso;
            BCu = Abu^Agu^Aku^Amu^Asu;


            Da = BCu^((BCe << 1) ^ (BCe >> (64 -1)));
            De = BCa^((BCi << 1) ^ (BCi >> (64 -1)));
            Di = BCe^((BCo << 1) ^ (BCo >> (64 -1)));
            Do = BCi^((BCu << 1) ^ (BCu >> (64 -1)));
            Du = BCo^((BCa << 1) ^ (BCa >> (64 -1)));

            Aba ^= Da;
            BCa = Aba;
            Age ^= De;
            BCe = ((Age << 44) ^ (Age >> (64 -44)));
            Aki ^= Di;
            BCi = ((Aki << 43) ^ (Aki >> (64 -43)));
            Amo ^= Do;
            BCo = ((Amo << 21) ^ (Amo >> (64 -21)));
            Asu ^= Du;
            BCu = ((Asu << 14) ^ (Asu >> (64 -14)));
            Eba = BCa ^((~BCe)& BCi );
            Eba ^= (uint64_t)KeccakF_RoundConstants[round];
            Ebe = BCe ^((~BCi)& BCo );
            Ebi = BCi ^((~BCo)& BCu );
            Ebo = BCo ^((~BCu)& BCa );
            Ebu = BCu ^((~BCa)& BCe );

            Abo ^= Do;
            BCa = ((Abo << 28) ^ (Abo >> (64 -28)));
            Agu ^= Du;
            BCe = ((Agu << 20) ^ (Agu >> (64 -20)));
            Aka ^= Da;
            BCi = ((Aka << 3) ^ (Aka >> (64 -3)));
            Ame ^= De;
            BCo = ((Ame << 45) ^ (Ame >> (64 -45)));
            Asi ^= Di;
            BCu = ((Asi << 61) ^ (Asi >> (64 -61)));
            Ega = BCa ^((~BCe)& BCi );
            Ege = BCe ^((~BCi)& BCo );
            Egi = BCi ^((~BCo)& BCu );
            Ego = BCo ^((~BCu)& BCa );
            Egu = BCu ^((~BCa)& BCe );

            Abe ^= De;
            BCa = ((Abe << 1) ^ (Abe >> (64 -1)));
            Agi ^= Di;
            BCe = ((Agi << 6) ^ (Agi >> (64 -6)));
            Ako ^= Do;
            BCi = ((Ako << 25) ^ (Ako >> (64 -25)));
            Amu ^= Du;
            BCo = ((Amu << 8) ^ (Amu >> (64 -8)));
            Asa ^= Da;
            BCu = ((Asa << 18) ^ (Asa >> (64 -18)));
            Eka = BCa ^((~BCe)& BCi );
            Eke = BCe ^((~BCi)& BCo );
            Eki = BCi ^((~BCo)& BCu );
            Eko = BCo ^((~BCu)& BCa );
            Eku = BCu ^((~BCa)& BCe );

            Abu ^= Du;
            BCa = ((Abu << 27) ^ (Abu >> (64 -27)));
            Aga ^= Da;
            BCe = ((Aga << 36) ^ (Aga >> (64 -36)));
            Ake ^= De;
            BCi = ((Ake << 10) ^ (Ake >> (64 -10)));
            Ami ^= Di;
            BCo = ((Ami << 15) ^ (Ami >> (64 -15)));
            Aso ^= Do;
            BCu = ((Aso << 56) ^ (Aso >> (64 -56)));
            Ema = BCa ^((~BCe)& BCi );
            Eme = BCe ^((~BCi)& BCo );
            Emi = BCi ^((~BCo)& BCu );
            Emo = BCo ^((~BCu)& BCa );
            Emu = BCu ^((~BCa)& BCe );

            Abi ^= Di;
            BCa = ((Abi << 62) ^ (Abi >> (64 -62)));
            Ago ^= Do;
            BCe = ((Ago << 55) ^ (Ago >> (64 -55)));
            Aku ^= Du;
            BCi = ((Aku << 39) ^ (Aku >> (64 -39)));
            Ama ^= Da;
            BCo = ((Ama << 41) ^ (Ama >> (64 -41)));
            Ase ^= De;
            BCu = ((Ase << 2) ^ (Ase >> (64 -2)));
            Esa = BCa ^((~BCe)& BCi );
            Ese = BCe ^((~BCi)& BCo );
            Esi = BCi ^((~BCo)& BCu );
            Eso = BCo ^((~BCu)& BCa );
            Esu = BCu ^((~BCa)& BCe );


            BCa = Eba^Ega^Eka^Ema^Esa;
            BCe = Ebe^Ege^Eke^Eme^Ese;
            BCi = Ebi^Egi^Eki^Emi^Esi;
            BCo = Ebo^Ego^Eko^Emo^Eso;
            BCu = Ebu^Egu^Eku^Emu^Esu;


            Da = BCu^((BCe << 1) ^ (BCe >> (64 -1)));
            De = BCa^((BCi << 1) ^ (BCi >> (64 -1)));
            Di = BCe^((BCo << 1) ^ (BCo >> (64 -1)));
            Do = BCi^((BCu << 1) ^ (BCu >> (64 -1)));
            Du = BCo^((BCa << 1) ^ (BCa >> (64 -1)));

            Eba ^= Da;
            BCa = Eba;
            Ege ^= De;
            BCe = ((Ege << 44) ^ (Ege >> (64 -44)));
            Eki ^= Di;
            BCi = ((Eki << 43) ^ (Eki >> (64 -43)));
            Emo ^= Do;
            BCo = ((Emo << 21) ^ (Emo >> (64 -21)));
            Esu ^= Du;
            BCu = ((Esu << 14) ^ (Esu >> (64 -14)));
            Aba = BCa ^((~BCe)& BCi );
            Aba ^= (uint64_t)KeccakF_RoundConstants[round+1];
            Abe = BCe ^((~BCi)& BCo );
            Abi = BCi ^((~BCo)& BCu );
            Abo = BCo ^((~BCu)& BCa );
            Abu = BCu ^((~BCa)& BCe );

            Ebo ^= Do;
            BCa = ((Ebo << 28) ^ (Ebo >> (64 -28)));
            Egu ^= Du;
            BCe = ((Egu << 20) ^ (Egu >> (64 -20)));
            Eka ^= Da;
            BCi = ((Eka << 3) ^ (Eka >> (64 -3)));
            Eme ^= De;
            BCo = ((Eme << 45) ^ (Eme >> (64 -45)));
            Esi ^= Di;
            BCu = ((Esi << 61) ^ (Esi >> (64 -61)));
            Aga = BCa ^((~BCe)& BCi );
            Age = BCe ^((~BCi)& BCo );
            Agi = BCi ^((~BCo)& BCu );
            Ago = BCo ^((~BCu)& BCa );
            Agu = BCu ^((~BCa)& BCe );

            Ebe ^= De;
            BCa = ((Ebe << 1) ^ (Ebe >> (64 -1)));
            Egi ^= Di;
            BCe = ((Egi << 6) ^ (Egi >> (64 -6)));
            Eko ^= Do;
            BCi = ((Eko << 25) ^ (Eko >> (64 -25)));
            Emu ^= Du;
            BCo = ((Emu << 8) ^ (Emu >> (64 -8)));
            Esa ^= Da;
            BCu = ((Esa << 18) ^ (Esa >> (64 -18)));
            Aka = BCa ^((~BCe)& BCi );
            Ake = BCe ^((~BCi)& BCo );
            Aki = BCi ^((~BCo)& BCu );
            Ako = BCo ^((~BCu)& BCa );
            Aku = BCu ^((~BCa)& BCe );

            Ebu ^= Du;
            BCa = ((Ebu << 27) ^ (Ebu >> (64 -27)));
            Ega ^= Da;
            BCe = ((Ega << 36) ^ (Ega >> (64 -36)));
            Eke ^= De;
            BCi = ((Eke << 10) ^ (Eke >> (64 -10)));
            Emi ^= Di;
            BCo = ((Emi << 15) ^ (Emi >> (64 -15)));
            Eso ^= Do;
            BCu = ((Eso << 56) ^ (Eso >> (64 -56)));
            Ama = BCa ^((~BCe)& BCi );
            Ame = BCe ^((~BCi)& BCo );
            Ami = BCi ^((~BCo)& BCu );
            Amo = BCo ^((~BCu)& BCa );
            Amu = BCu ^((~BCa)& BCe );

            Ebi ^= Di;
            BCa = ((Ebi << 62) ^ (Ebi >> (64 -62)));
            Ego ^= Do;
            BCe = ((Ego << 55) ^ (Ego >> (64 -55)));
            Eku ^= Du;
            BCi = ((Eku << 39) ^ (Eku >> (64 -39)));
            Ema ^= Da;
            BCo = ((Ema << 41) ^ (Ema >> (64 -41)));
            Ese ^= De;
            BCu = ((Ese << 2) ^ (Ese >> (64 -2)));
            Asa = BCa ^((~BCe)& BCi );
            Ase = BCe ^((~BCi)& BCo );
            Asi = BCi ^((~BCo)& BCu );
            Aso = BCo ^((~BCu)& BCa );
            Asu = BCu ^((~BCa)& BCe );
        }


        state[ 0] = Aba;
        state[ 1] = Abe;
        state[ 2] = Abi;
        state[ 3] = Abo;
        state[ 4] = Abu;
        state[ 5] = Aga;
        state[ 6] = Age;
        state[ 7] = Agi;
        state[ 8] = Ago;
        state[ 9] = Agu;
        state[10] = Aka;
        state[11] = Ake;
        state[12] = Aki;
        state[13] = Ako;
        state[14] = Aku;
        state[15] = Ama;
        state[16] = Ame;
        state[17] = Ami;
        state[18] = Amo;
        state[19] = Amu;
        state[20] = Asa;
        state[21] = Ase;
        state[22] = Asi;
        state[23] = Aso;
        state[24] = Asu;
}
# 362 "fips202.c"
static void keccak_absorb(uint64_t *s,
                          unsigned int r,
                          const unsigned char *m,
                          unsigned long long mlen,
                          unsigned char p)
{
  unsigned int i;
  unsigned char t[200];


  for(i = 0; i < 25; ++i)
    s[i] = 0;

  while(mlen >= r) {
    for(i = 0; i < r/8; ++i)
      s[i] ^= load64(m + 8*i);

    KeccakF1600_StatePermute(s);
    mlen -= r;
    m += r;
  }

  for(i = 0; i < r; ++i)
    t[i] = 0;
  for(i = 0; i < mlen; ++i)
    t[i] = m[i];
  t[i] = p;
  t[r-1] |= 128;
  for(i = 0; i < r/8; ++i)
    s[i] ^= load64(t + 8*i);
}
# 407 "fips202.c"
static void keccak_squeezeblocks(unsigned char *h,
                                 unsigned long nblocks,
                                 uint64_t *s,
                                 unsigned int r)
{
  unsigned int i;

  while(nblocks > 0) {
    KeccakF1600_StatePermute(s);
    for(i=0; i < (r >> 3); i++) {
      store64(h + 8*i, s[i]);
    }
    h += r;
    --nblocks;
  }
}
# 435 "fips202.c"
void shake128_absorb(uint64_t *s,
                     const unsigned char *input,
                     unsigned long long inlen)
{
  keccak_absorb(s, 168, input, inlen, 0x1F);
}
# 454 "fips202.c"
void shake128_squeezeblocks(unsigned char *output,
                            unsigned long nblocks,
                            uint64_t *s)
{
  keccak_squeezeblocks(output, nblocks, s, 168);
}
# 472 "fips202.c"
void shake256_absorb(uint64_t *s,
                     const unsigned char *input,
                     unsigned long long inlen)
{
  keccak_absorb(s, 136, input, inlen, 0x1F);
}
# 491 "fips202.c"
void shake256_squeezeblocks(unsigned char *output,
                            unsigned long nblocks,
                            uint64_t *s)
{
  keccak_squeezeblocks(output, nblocks, s, 136);
}
# 508 "fips202.c"
void shake128(unsigned char *output,
              unsigned long long outlen,
              const unsigned char *input,
              unsigned long long inlen)
{
  unsigned int i;
  unsigned long nblocks = outlen/168;
  unsigned char t[168];
  uint64_t s[25];

  shake128_absorb(s, input, inlen);
  shake128_squeezeblocks(output, nblocks, s);

  output += nblocks*168;
  outlen -= nblocks*168;

  if(outlen) {
    shake128_squeezeblocks(t, 1, s);
    for(i = 0; i < outlen; ++i)
      output[i] = t[i];
  }
}
# 541 "fips202.c"
void shake256(unsigned char *output,
              unsigned long long outlen,
              const unsigned char *input,
              unsigned long long inlen)
{
  unsigned int i;
  unsigned long nblocks = outlen/136;
  unsigned char t[136];
  uint64_t s[25];

  shake256_absorb(s, input, inlen);
  shake256_squeezeblocks(output, nblocks, s);

  output += nblocks*136;
  outlen -= nblocks*136;

  if(outlen) {
    shake256_squeezeblocks(t, 1, s);
    for(i = 0; i < outlen; ++i)
      output[i] = t[i];
  }
}
