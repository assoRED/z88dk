
SECTION rodata_user


;; UDGs

PUBLIC _backwalls

_backwalls:

; bricks
  DEFB 247,  247,  247,    0,  223,  223,  223,    0

; cirkel muur
  DEFB 248,  227,  207,  159,  191,   63,  127,  127 
  DEFB 127,  127,   63,  191,  159,  207,  227,  248 

  DEFB  31,  199,  243,  249,  253,  252,  254,  254 
  DEFB 254,  254,  252,  253,  249,  243,  199,   31 


;; SPRITES are defined here

PUBLIC _sprite1

  DEFB 255,    0,  255,    0,  255,    0,  255,    0
  DEFB 255,    0,  255,    0,  255,    0,  255,    0

_sprite1:

  DEFB 248,    0,  224,    3,  192,   12,  128,   16
  DEFB 128,   32,    0,   32,    0,   64,    0,   64
  DEFB   0,   70,    0,   73,    0,   75,    0,   70
  DEFB   0,    0,    0,  127,    0,    6,  240,    0
  DEFB 255,    0,  255,    0,  255,    0,  255,    0
  DEFB 255,    0,  255,    0,  255,    0,  255,    0


  DEFB  31,    0,   15,  192,    3,   48,    1,    8
  DEFB   1,  196,    0,   36,    0,   18,    0,   18
  DEFB   0,  210,    0,   34,    0,   98,    0,  194
  DEFB   0,    0,    0,  234,    0,  160,   15,    0
  DEFB 255,    0,  255,    0,  255,    0,  255,    0
  DEFB 255,    0,  255,    0,  255,    0,  255,    0