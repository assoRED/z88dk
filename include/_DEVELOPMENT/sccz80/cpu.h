
// automatically generated by m4 from headers in proto subdir


#ifndef _CPU_H
#define _CPU_H

// Z80

#ifdef __Z80

#include <z80.h>

#define cpu_delay_ms       z80_delay_ms
#define cpu_delay_tstate   z80_delay_tstate

#define cpu_get_int_state  z80_get_int_state
#define cpu_set_int_state  z80_set_int_state

#define cpu_inp   z80_inp
#define cpu_outp  z80_outp
#define cpu_inir  z80_inir
#define cpu_indr  z80_indr
#define cpu_otir  z80_otir
#define cpu_otdr  z80_otdr

#endif

// Z180

#ifdef __Z180

#include <z180.h>

#define cpu_delay_ms       z180_delay_ms
#define cpu_delay_tstate   z180_delay_tstate

#define cpu_get_int_state  z180_get_int_state
#define cpu_set_int_state  z180_set_int_state

#define cpu_inp   z180_inp
#define cpu_outp  z180_outp
#define cpu_inir  z180_inir
#define cpu_indr  z180_indr
#define cpu_otir  z180_otir
#define cpu_otdr  z180_otdr

#define cpu_otimr  z180_otimr
#define cpu_otdmr  z180_otdmr

#endif

// Across all CPUs

#define cpu_bpoke(a,b)  (*(unsigned char *)(a) = b)
#define cpu_wpoke(a,b)  (*(unsigned int *)(a) = b)
#define cpu_lpoke(a,b)  (*(unsigned long *)(a) = b)

#define cpu_bpeek(a)    (*(unsigned char *)(a))
#define cpu_wpeek(a)    (*(unsigned int *)(a))
#define cpu_lpeek(a)    (*(unsigned long *)(a))

#ifdef __CLANG

#define cpu_llpoke(a,b) (*(unsigned long long *)(a) = b)
#define cpu_llpeek(a)   (*(unsigned long long *)(a))

#endif

#ifdef __SDCC

#define cpu_llpoke(a,b) (*(unsigned long long *)(a) = b)
#define cpu_llpeek(a)   (*(unsigned long long *)(a))

#endif

#endif