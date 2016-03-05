; CALLER linkage for function pointers

PUBLIC strlcpy
PUBLIC _strlcpy

EXTERN strlcpy_callee
EXTERN ASMDISP_STRLCPY_CALLEE

.strlcpy
._strlcpy

   pop af
   pop bc
   pop hl
   pop de
   push de
   push hl
   push bc
   push af
   
   jp strlcpy_callee + ASMDISP_STRLCPY_CALLEE
