#ifndef _SYS_CDEFS_H
#define _SYS_CDEFS_H 1

#define __fableos_libc 1

#ifdef __cplusplus
extern "C" {
#endif

/* 
 * Define 'restrict' for C++ compilers using GCC extensions.
 * For C compilers, 'restrict' is handled based on the C standard version.
 */
#if defined(__cplusplus)
    #define restrict __restrict__
#else
    #if __STDC_VERSION__ >= 199901L
        #define restrict restrict
    #else
        #define restrict
    #endif
#endif

#ifdef __cplusplus
}
#endif

#endif
