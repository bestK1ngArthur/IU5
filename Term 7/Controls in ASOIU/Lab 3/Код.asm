start:

.include "m16def.inc" ;
.list ;
.def temp=r16 ;
.def kold=r17
.def k=r18
.def s=r19
;--------------------------------------------
.cseg ;
.org 0 ;
;--------------------------------------------
ldi temp,0x80 ;
out acsr,temp
;--------------------------------------------
ldi temp,0x00 ; 0 --> temp
out ddrd,temp ;
ldi temp,0xFF ; 0xff --> temp
out ddrb,temp ;
out portd,temp ;
;---------------------------------------------
ldi  kold, 0x00 ; 0--->kold
ldi  s, 0x00 ; 0--->s___
out  portb, s ;
;---------------------------------------------
read:   ;
in  k, pind ;
cp  k, kold ;
breq read  ;
tst  kold  ;
brne remem  ;
tst  k  ;
breq remem  ;
jmp  lbl1  ;
;---------------------------------------------
remem:   ;
mov kold, k ;
jmp  read  ;
;---------------------------------------------

inc_x3:
inc s
inc s
inc s
jmp print

dec_x3:
dec s
dec s
dec s
jmp print

inc_x5:
inc s
inc s
inc s
inc s
inc s
jmp print

dec_x5:
dec s
dec s
dec s
dec s
dec s
jmp print

lbl1:
cpi k, 0x01
breq red

cpi k,0x02
breq black

cpi k,0x04
breq blue

jmp read


red:
cpi s,0x04
breq inc_x1
cpi s,0x08
breq inc_x1
cpi s,0x01
breq inc_x4
cpi s,0x02
breq inc_x4
cpi s,0x00
breq inc_x5
cpi s,0x03
breq inc_x3
cpi s,0x0C
breq dec_x3
cpi s,0x0F
breq dec_x5
cpi s,0x07
breq dec_x1
cpi s,0x0B
breq dec_x1
cpi s,0x0D
breq dec_x4
cpi s,0x0E
breq dec_x4
jmp read


black:
cpi s,0x05
breq inc_x1
cpi s,0x09
breq dec_x4
cpi s,0x06
breq inc_x4
cpi s,0x0A
breq dec_x1
jmp read

blue:
cpi s,0x01
breq inc_x1
cpi s,0x02
breq inc_x1
cpi s,0x00
breq inc_x1
cpi s,0x03
breq inc_x4
cpi s,0x07
breq inc_x4
cpi s,0x0B
breq inc_x4
cpi s,0x0F
breq dec_x1
cpi s,0x0E
breq dec_x1
cpi s,0x0D
breq dec_x1
cpi s,0x04
breq dec_x4
cpi s,0x08
breq dec_x4
cpi s,0x0C
breq dec_x4
jmp read


;-------------
inc_x1:
inc s
jmp print

inc_x4:
inc s
inc s
inc s
inc s
jmp print

dec_x1:
dec s
jmp print

dec_x4:
dec s
dec s
dec s
dec s
jmp print


print:   ;
out  portb, s ;
jmp  remem
