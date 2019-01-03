.include "m16def.inc"	; atmega16 library
.list 					; listing on
.def	temp=r16		; registers
.def	reg_cmp=r17		; registers
.def	z___=r18		; registers
.def	d___=r19		; registers
.def	k___=r20
.def	t___=r21
.def	res___=r22
.cseg					; choose code segmentt
.org	0				; set current address to 0
;-----------------------
ldi		temp,0x80		; turn off comparator
out 	acsr,temp		; turn off comparator
;-----------------------
ldi		temp,0x00 		; set 0 to register temp
out 	ddrd,temp 		; set rd port as input port
ldi		temp,0xFF 		; set FF to register temp 
out		ddrc,temp		; set rd port as output port
out		ddra,temp		; set rc port as output port 
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
read:

in		reg_cmp,pind	; read CMP from comparator
tst		reg_cmp			;
breq 	reset			; if reg_cmp==0 goto reset

in		res___,tcnt0	; else - save timer value to res___
jmp		read			; loop




reset:					; reset tag

rcall 	start_1_func	; discharge CAP()

rcall delay_discharge	; time delay to discharge

out		tcnt0,temp		; clear timer

rcall	start_0_func	; clear discharge

out		porta,res___	; save digit value to port A

jmp		read			; loop


delay_discharge:
in		t___,tcnt0
ccc:
in		k___,tcnt0
cp		k___,t___
breq	ccc
ret

start_0_func:
ldi		z___,0
out		portc,z___
ret

start_1_func:
ldi		z___,1
out		portc,z___
ret
