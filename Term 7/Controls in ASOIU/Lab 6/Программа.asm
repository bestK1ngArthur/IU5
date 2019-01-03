.include "m16def.inc"	; atmega16 library
.list 					; listing on
.def	temp=r16		; registers
.def	reg_cmp=r17		; registers
.def	o___=r18		; registers o___ + a___ = o___
.def	a___=r19		; registers
.def	res___=r20
.def	t___=r21
.def	k___=r22

.cseg					; choose code segmentt
.org	0				; set current address to 0
;-----------------------
ldi		temp,0x80		; turn off comparator
out 	acsr,temp		; turn off comparator
;-----------------------
ldi		temp,0x00 		; set 0 to register temp
out 	ddrd,temp 		; set rd port as input port
ldi		temp,0xFF 		; set FF to register temp 
out		ddra,temp		; set ra port as output port
out		ddrc,temp		; set rb port as output port 
;-----------------------
ldi		temp,0b110		
out		tccr0,temp
ldi 	temp,low(RAMEND)
out 	spl,temp
ldi 	temp,high(RAMEND)
out 	sph,temp
ldi 	temp, 0 
;-----------------------
;INITIAL PROGRAMM


raz4:
ldi		o___, 0
ldi		a___, 0b00010000
eor		o___, a___

out		portc, o___
rcall	delay_pause

in		reg_cmp,pind	; read CMP from comparator
tst		reg_cmp			;
brne 	raz3			; if reg_cmp==0 goto raz2

ldi		a___, 0b11101111
and		o___, a___

raz3:
ldi		a___, 0b00001000
eor		o___, a___

out		portc, o___
rcall	delay_pause

in		reg_cmp,pind	; read CMP from comparator
tst		reg_cmp			;
brne 	raz2			; if reg_cmp==0 goto raz2

ldi		a___, 0b11110111
and		o___, a___

raz2:
ldi		a___, 0b00000100
eor		o___, a___

out		portc, o___
rcall	delay_pause

in		reg_cmp,pind	; read CMP from comparator
tst		reg_cmp			;
brne 	raz1			; if reg_cmp==0 goto raz1

ldi		a___, 0b11111011
and		o___, a___

raz1:
ldi		a___, 0b00000010
eor		o___, a___

out		portc, o___
rcall	delay_pause

in		reg_cmp,pind	; read CMP from comparator
tst		reg_cmp			;
brne 	raz0			; if reg_cmp==0 goto raz0

ldi		a___, 0b11111101
and		o___, a___

raz0:
ldi		a___, 0b00000001
eor		o___, a___

out		portc, o___
rcall	delay_pause

in		reg_cmp,pind	; read CMP from comparator
tst		reg_cmp			;
brne 	write			; if reg_cmp==0 goto raz4

ldi		a___, 0b11111110
and		o___, a___

write:
out		porta, o___

jmp		raz4


delay_pause:
ldi		t___, 20
ldi		temp, 0
out		tcnt0, temp
ccc:
in		k___,tcnt0
cp		k___,t___
brlo	ccc
ret