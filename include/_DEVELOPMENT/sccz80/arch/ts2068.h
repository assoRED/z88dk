
// automatically generated by m4 from headers in proto subdir


#ifndef __ARCH_TS2068_H__
#define __ARCH_TS2068_H__

#include <arch.h>

#include <stddef.h>
#include <rect.h>

// COMMON CONSTANTS

#define INK_BLACK                   0x00
#define INK_BLUE                    0x01
#define INK_RED                     0x02
#define INK_MAGENTA                 0x03
#define INK_GREEN                   0x04
#define INK_CYAN                    0x05
#define INK_YELLOW                  0x06
#define INK_WHITE                   0x07

#define PAPER_BLACK                 0x00
#define PAPER_BLUE                  0x08
#define PAPER_RED                   0x10
#define PAPER_MAGENTA               0x18
#define PAPER_GREEN                 0x20
#define PAPER_CYAN                  0x28
#define PAPER_YELLOW                0x30
#define PAPER_WHITE                 0x38

#define BRIGHT                      0x40
#define FLASH                       0x80

// GLOBAL VARIABLES

extern unsigned char GLOBAL_TS_PORT_FE;
extern unsigned char GLOBAL_ZX_PORT_FE;

// IO MAPPED REGISTERS

#ifdef __CLANG

extern unsigned char IO_FE;

#else

__sfr __at 0xfe IO_FE;

#endif

// misc

extern void __LIB__ zx_border(unsigned char colour) __smallc __z88dk_fastcall;


extern void __LIB__ zx_cls(unsigned char attr) __smallc __z88dk_fastcall;


extern void __LIB__ zx_cls_wc(struct r_Rect8 *r,unsigned char attr) __smallc;
extern void __LIB__ zx_cls_wc_callee(struct r_Rect8 *r,unsigned char attr) __smallc __z88dk_callee;
#define zx_cls_wc(a,b) zx_cls_wc_callee(a,b)


extern void __LIB__ zx_scroll_up(unsigned char rows,unsigned char attr) __smallc;
extern void __LIB__ zx_scroll_up_callee(unsigned char rows,unsigned char attr) __smallc __z88dk_callee;
#define zx_scroll_up(a,b) zx_scroll_up_callee(a,b)


extern void __LIB__ zx_scroll_wc_up(struct r_Rect8 *r,unsigned char rows,unsigned char attr) __smallc;
extern void __LIB__ zx_scroll_wc_up_callee(struct r_Rect8 *r,unsigned char rows,unsigned char attr) __smallc __z88dk_callee;
#define zx_scroll_wc_up(a,b,c) zx_scroll_wc_up_callee(a,b,c)



// display

// In the following, screen address refers to a pixel address within the display file while
// attribute address refers to the attributes area.
//
// Function names are constructed from the following atoms:
//
// saddr = screen address
// aaddr = attribute address
// 
// px    = pixel x coordinate (0..255)
// py    = pixel y coordinate (0..191)
// pxy   = pixel (x,y) coordinate
//
// cx    = character x coordinate (0..31)
// cy    = character y coordinate (0..23)
// cxy   = character (x,y) coordinate
//
// So for example:
//
// zx_saddr2cy(saddr) will return the character y coordinate corresponding to the given screen address
// zx_saddr2aaddr(saddr) will return the attribute address corresponding to the given screen address
// zx_pxy2aaddr(px,py) will return the attribute address corresponding to the given (x,y) pixel coordinate
//
// Some functions will return with carry flag set if coordinates or addresses move out of
// bounds.  In these cases the special z88dk keywords iferror() and ifnerror() can be used
// to test the carry flag and determine if invalid results are returned.  Check with the
// wiki documentation or the asm source files to see which functions support this.  If
// comments in the asm source file do not mention this, it is not supported.

// Standard Spectrum Display 256x192 pixel 32x24 colour

extern unsigned char __LIB__ zx_aaddr2cx(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ zx_aaddr2cy(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ zx_aaddr2px(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ zx_aaddr2py(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_aaddr2saddr(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_aaddrcdown(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_aaddrcleft(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_aaddrcright(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_aaddrcup(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ zx_bitmask2px(unsigned char bitmask) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_cxy2aaddr(unsigned char x,unsigned char y) __smallc;
extern unsigned char __LIB__ *zx_cxy2aaddr_callee(unsigned char x,unsigned char y) __smallc __z88dk_callee;
#define zx_cxy2aaddr(a,b) zx_cxy2aaddr_callee(a,b)


extern unsigned char __LIB__ *zx_cxy2saddr(unsigned char x,unsigned char y) __smallc;
extern unsigned char __LIB__ *zx_cxy2saddr_callee(unsigned char x,unsigned char y) __smallc __z88dk_callee;
#define zx_cxy2saddr(a,b) zx_cxy2saddr_callee(a,b)


extern unsigned char __LIB__ *zx_cy2aaddr(unsigned char y) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_cy2saddr(unsigned char y) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ zx_px2bitmask(unsigned char x) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_pxy2aaddr(unsigned char x,unsigned char y) __smallc;
extern unsigned char __LIB__ *zx_pxy2aaddr_callee(unsigned char x,unsigned char y) __smallc __z88dk_callee;
#define zx_pxy2aaddr(a,b) zx_pxy2aaddr_callee(a,b)


extern unsigned char __LIB__ *zx_pxy2saddr(unsigned char x,unsigned char y) __smallc;
extern unsigned char __LIB__ *zx_pxy2saddr_callee(unsigned char x,unsigned char y) __smallc __z88dk_callee;
#define zx_pxy2saddr(a,b) zx_pxy2saddr_callee(a,b)


extern unsigned char __LIB__ *zx_py2aaddr(unsigned char y) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_py2saddr(unsigned char y) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_saddr2aaddr(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ zx_saddr2cx(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ zx_saddr2cy(void *saddr) __smallc __z88dk_fastcall;


extern unsigned int __LIB__ zx_saddr2px(void *saddr) __smallc __z88dk_fastcall;


extern unsigned int __LIB__ zx_saddr2py(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_saddrcdown(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_saddrcleft(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_saddrcright(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_saddrcup(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_saddrpdown(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *zx_saddrpleft(void *saddr,unsigned char bitmask) __smallc;
extern unsigned char __LIB__ *zx_saddrpleft_callee(void *saddr,unsigned char bitmask) __smallc __z88dk_callee;
#define zx_saddrpleft(a,b) zx_saddrpleft_callee(a,b)


extern unsigned char __LIB__ *zx_saddrpright(void *saddr,unsigned char bitmask) __smallc;
extern unsigned char __LIB__ *zx_saddrpright_callee(void *saddr,unsigned char bitmask) __smallc __z88dk_callee;
#define zx_saddrpright(a,b) zx_saddrpright_callee(a,b)


extern unsigned char __LIB__ *zx_saddrpup(void *saddr) __smallc __z88dk_fastcall;



// Timex Hi-Colour Display 256x192 pixel 32x192 colour

extern unsigned char __LIB__ tshc_aaddr2cx(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshc_aaddr2cy(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshc_aaddr2px(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshc_aaddr2py(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_aaddr2saddr(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_aaddrcdown(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_aaddrcleft(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_aaddrcright(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_aaddrcup(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_aaddrpdown(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_aaddrpleft(void *aaddr,unsigned char bitmask) __smallc;
extern unsigned char __LIB__ *tshc_aaddrpleft_callee(void *aaddr,unsigned char bitmask) __smallc __z88dk_callee;
#define tshc_aaddrpleft(a,b) tshc_aaddrpleft_callee(a,b)


extern unsigned char __LIB__ *tshc_aaddrpright(void *aaddr,unsigned char bitmask) __smallc;
extern unsigned char __LIB__ *tshc_aaddrpright_callee(void *aaddr,unsigned char bitmask) __smallc __z88dk_callee;
#define tshc_aaddrpright(a,b) tshc_aaddrpright_callee(a,b)


extern unsigned char __LIB__ *tshc_aaddrpup(void *aaddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshc_bitmask2px(unsigned char bitmask) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_cxy2aaddr(unsigned char x,unsigned char y) __smallc;
extern unsigned char __LIB__ *tshc_cxy2aaddr_callee(unsigned char x,unsigned char y) __smallc __z88dk_callee;
#define tshc_cxy2aaddr(a,b) tshc_cxy2aaddr_callee(a,b)


extern unsigned char __LIB__ *tshc_cxy2saddr(unsigned char x,unsigned char y) __smallc;
extern unsigned char __LIB__ *tshc_cxy2saddr_callee(unsigned char x,unsigned char y) __smallc __z88dk_callee;
#define tshc_cxy2saddr(a,b) tshc_cxy2saddr_callee(a,b)


extern unsigned char __LIB__ *tshc_cy2aaddr(unsigned char y) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_cy2saddr(unsigned char y) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshc_px2bitmask(unsigned char x) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_pxy2aaddr(unsigned char x,unsigned char y) __smallc;
extern unsigned char __LIB__ *tshc_pxy2aaddr_callee(unsigned char x,unsigned char y) __smallc __z88dk_callee;
#define tshc_pxy2aaddr(a,b) tshc_pxy2aaddr_callee(a,b)


extern unsigned char __LIB__ *tshc_pxy2saddr(unsigned char x,unsigned char y) __smallc;
extern unsigned char __LIB__ *tshc_pxy2saddr_callee(unsigned char x,unsigned char y) __smallc __z88dk_callee;
#define tshc_pxy2saddr(a,b) tshc_pxy2saddr_callee(a,b)


extern unsigned char __LIB__ *tshc_py2aaddr(unsigned char y) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_py2saddr(unsigned char y) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_saddr2aaddr(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshc_saddr2cx(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshc_saddr2cy(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshc_saddr2px(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshc_saddr2py(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_saddrcdown(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_saddrcleft(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_saddrcright(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_saddrcup(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_saddrpdown(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshc_saddrpleft(void *saddr,unsigned char bitmask) __smallc;
extern unsigned char __LIB__ *tshc_saddrpleft_callee(void *saddr,unsigned char bitmask) __smallc __z88dk_callee;
#define tshc_saddrpleft(a,b) tshc_saddrpleft_callee(a,b)


extern unsigned char __LIB__ *tshc_saddrpright(void *saddr,unsigned char bitmask) __smallc;
extern unsigned char __LIB__ *tshc_saddrpright_callee(void *saddr,unsigned char bitmask) __smallc __z88dk_callee;
#define tshc_saddrpright(a,b) tshc_saddrpright_callee(a,b)


extern unsigned char __LIB__ *tshc_saddrpup(void *saddr) __smallc __z88dk_fastcall;



// Timex Hi-Res Display, 512x192 monochrome

extern unsigned char __LIB__ tshr_bitmask2px(unsigned char bitmask) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshr_cxy2saddr(unsigned char x,unsigned char y) __smallc;
extern unsigned char __LIB__ *tshr_cxy2saddr_callee(unsigned char x,unsigned char y) __smallc __z88dk_callee;
#define tshr_cxy2saddr(a,b) tshr_cxy2saddr_callee(a,b)


extern unsigned char __LIB__ *tshr_cy2saddr(unsigned char y) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshr_px2bitmask(unsigned char x) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshr_pxy2saddr(unsigned int x,unsigned char y) __smallc;
extern unsigned char __LIB__ *tshr_pxy2saddr_callee(unsigned int x,unsigned char y) __smallc __z88dk_callee;
#define tshr_pxy2saddr(a,b) tshr_pxy2saddr_callee(a,b)


extern unsigned char __LIB__ *tshr_py2saddr(unsigned char y) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshr_saddr2cx(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshr_saddr2cy(void *saddr) __smallc __z88dk_fastcall;


extern unsigned int __LIB__ tshr_saddr2px(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ tshr_saddr2py(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshr_saddrcdown(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshr_saddrcleft(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshr_saddrcright(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshr_saddrcup(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshr_saddrpdown(void *saddr) __smallc __z88dk_fastcall;


extern unsigned char __LIB__ *tshr_saddrpleft(void *saddr,unsigned char bitmask) __smallc;
extern unsigned char __LIB__ *tshr_saddrpleft_callee(void *saddr,unsigned char bitmask) __smallc __z88dk_callee;
#define tshr_saddrpleft(a,b) tshr_saddrpleft_callee(a,b)


extern unsigned char __LIB__ *tshr_saddrpright(void *saddr,unsigned char bitmask) __smallc;
extern unsigned char __LIB__ *tshr_saddrpright_callee(void *saddr,unsigned char bitmask) __smallc __z88dk_callee;
#define tshr_saddrpright(a,b) tshr_saddrpright_callee(a,b)


extern unsigned char __LIB__ *tshr_saddrpup(void *saddr) __smallc __z88dk_fastcall;



// graphics

extern int __LIB__ zx_pattern_fill(unsigned char x,unsigned char y,void *pattern,unsigned int depth) __smallc;
extern int __LIB__ zx_pattern_fill_callee(unsigned char x,unsigned char y,void *pattern,unsigned int depth) __smallc __z88dk_callee;
#define zx_pattern_fill(a,b,c,d) zx_pattern_fill_callee(a,b,c,d)



#endif
