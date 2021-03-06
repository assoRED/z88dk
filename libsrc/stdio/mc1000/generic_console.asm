
		; code_driver to ensure we don't page ourselves out
		SECTION		code_driver

		PUBLIC		generic_console_calc_xypos
		PUBLIC		generic_console_printc
		PUBLIC		generic_console_scrollup
                PUBLIC          generic_console_set_ink
                PUBLIC          generic_console_set_paper
                PUBLIC          generic_console_set_inverse

		EXTERN		__mc1000_mode

		EXTERN		ansi_SCROLLUP

		EXTERN		generic_console_flags
		EXTERN		generic_console_font32
		EXTERN		generic_console_udg32
		EXTERN		CONSOLE_COLUMNS
		EXTERN		CONSOLE_ROWS
		EXTERN		CRT_FONT

		defc		DISPLAY = 0x8000

generic_console_set_ink:
generic_console_set_paper:
generic_console_set_inverse:
	ret

; c = x
; b = y
; a = d = character to print
; e = raw
generic_console_printc:
	ld	a,(__mc1000_mode)
	cp	0x9e
	jr	z,hires_printc
; Text mode
	out	($80),a
	ex	af,af
	ld	a,d
	push	de
	call	generic_console_calc_xypos
	pop	de
	rr	e
	call	nc,convert_character
	ld	(hl),a
	ex	af,af
	set	0,a
	out	($80),a		;
	ret


; c = x
; b = y
; d = character
; e = raw
; a = screen port
hires_printc:
	ex	af,af		;save port
	ld	l,d
	ld	h,0
	ld	de,(generic_console_font32)
	bit	7,l
	jr	z,not_udg
	res	7,l		;take off 128
	ld	de,(generic_console_udg32)
	inc	d		;We decrement later
not_udg:
	add	hl,hl
	add	hl,hl
	add	hl,hl
	add	hl,de
	dec	h		; -32 characters
	ex	de,hl		; de = font
	ld	h,b		; 32 * 8
	ld	l,c
	ld	bc,DISPLAY
	add	hl,bc		;hl = screen

	ld	a,(generic_console_flags)
	rlca
	sbc	a,a
	ld	c,a		;x = 0 / 255
	ld	b,8
hires_printc_1:
	push	bc
	ld	a,(de)
	xor	c
	ld	c,a
	ex	af,af
	res	0,a
	out	($80),a		;VRAM -> Z80
	ld	(hl),c
	set	0,a
	out	($80),a		;VRAM -> Chip
	ex	af,af
	inc	de
	ld	a,l
	add	32
	ld	l,a
	jr	nc,no_overflow
	inc	h
no_overflow:
	pop	bc
	djnz	hires_printc_1
	ret



generic_console_calc_xypos:
	ld	hl,DISPLAY - CONSOLE_COLUMNS
	ld	de,CONSOLE_COLUMNS
	inc	b
generic_console_printc_1:
	add	hl,de
	djnz	generic_console_printc_1
	add	hl,bc			;hl now points to address in display
	ret

convert_character:
        cp      97
        jr      c,isupper
        sub     32
.isupper
        and     @00111111
	ret


generic_console_scrollup:
	push	de
	push	bc
	ld	a,(__mc1000_mode)
	cp	0x9e
	jr	nz,text_scrollup
	call	ansi_SCROLLUP
	pop	bc
	pop	de
	ret

text_scrollup:
	out	($80),a
	ld	hl, DISPLAY + CONSOLE_COLUMNS
	ld	de, DISPLAY
	ld	bc,+ ((CONSOLE_COLUMNS) * (CONSOLE_ROWS-1))
	ldir
	ex	de,hl
	ld	b,CONSOLE_COLUMNS
generic_console_scrollup_3:
	ld	(hl),32
	inc	hl
	djnz	generic_console_scrollup_3
	set	0,a
	out	($80),a
	pop	bc
	pop	de
	ret
