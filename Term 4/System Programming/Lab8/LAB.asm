; Лабораторная работа №8

assume cs:CODE
CODE SEGMENT 'CODE'
; --------------------------------------
LABTITLE DB 'Лабораторная работа #8$'
ENTRMSGE DB 'Введите адрес: $'
EXITSMBL DB '*'
; --------------------------------------
HEX_TABLE DB '0123456789ABCDEF$'
CURNTSMBL DB 'A'
PRGRMFLAG DB	0
; Переменные для регистров
regBP	DW	0
regDI	DW	0
regSI	DW	0
regSP	DW	0
regES	DW	0
regSS	DW	0
regDS	DW	0
regCS	DW  0
; Дамп
DUMP1 DW	0
DUMP2 DW	0
STRLEN EQU	16
STRINGS	EQU	15
BUFLEN EQU STRLEN*STRINGS
BUF	DB BUFLEN	DUP(0)
coef DW 10000,1000,100,10,1
; --------------------------------------
START:
  ; Загрузка сегментного регистра данных DS
  push cs
  pop  ds
  ; Очитка экрана
  call CLRSCR
  ; Вывод заголовка
  call CLRF
  mov dx , offset LABTITLE
  call PUTSTR
  call CLRF
  call CLRF
  ; Главный цикл
  MAINLP:
    ; Сохранение регистров
    call SAVEREGS
    ; Вывод строки ввода
    mov dx , offset ENTRMSGE
    call PUTSTR
    ; Ввод сегментной части адреса
    call NEARIN
    ; Проверка на выход
    cmp PRGRMFLAG , 1
    je EXITP
    mov DUMP1 , bx
    ; Вывод ':'
    mov dl , ':'
  	call PUTCH
    ; Ввод смещения
    call NEARIN
    cmp PRGRMFLAG , 1
    je EXITP
    mov DUMP2 , bx
    ; Вывод регистров
    call PRINTREGS
    ; Чтение области памяти для дампа
    call DUMPIN
    ; Вывод дампа
    call DUMPOUT
    call GETCH
    mov cx , 2
    call CLRF
    loop MAINLP
  ; Вывод из программы
  EXITP:
    mov al , 0
    mov ah , 4CH
    int 21H
; --------------------------------------
;             | Процедуры |
; --------------------------------------
; Перевод символа в 16-ый код
; --------------------------------------
HEX PROC
  mov dl , CURNTSMBL
  lea bx , HEX_TABLE ; загрузка таблицы
  mov al , dl
  shr al , 4 ; отбрасывание младщших разрядов
  xlat ; преобразование в 16 систему
  mov dl , al
  call PUTCH
  mov dl , CURNTSMBL
  mov al , dl
  and al , 00001111b ; отбрасывание старших разрядов
  xlat ; преобразование в 16 систему
  mov dl , al
  call PUTCH
  ret ; выход
HEX ENDP
; --------------------------------------
; Перевод слова в 16-ый код
; --------------------------------------
DBLHEX PROC
  push dx
  mov dh , dl
  mov CURNTSMBL , dh
  call HEX
  pop dx
  mov dh , dl
  mov CURNTSMBL , dh
  call HEX
  ret ; выход
DBLHEX ENDP
; --------------------------------------
; Перевод на новую строку
; --------------------------------------
CLRF PROC
  mov dl , 10
  call PUTCH
  mov dl , 13
  call PUTCH
  ret ; выход
CLRF ENDP
; --------------------------------------
; Очистка экрана
; --------------------------------------
CLRSCR PROC
  call CLRF
  mov  ah , 0H
  mov  al , 3H
  int  10H
  ret ; выход
CLRSCR ENDP
; --------------------------------------
; Вывод одного символа на экран (из dl)
; --------------------------------------
PUTCH PROC
  mov ah , 02H
  int 21H
  ret
PUTCH ENDP
; --------------------------------------
; Вывод строки (из dx)
; --------------------------------------
PUTSTR PROC
  mov ah , 09H
  int 21H
  ret
PUTSTR ENDP
; --------------------------------------
; Ввод символа с клавиатуры (в al)
; --------------------------------------
GETCH PROC
  mov ah , 08H
  int 21H
  ret
GETCH ENDP
;-------------------------------------
; Сохранение регистров
;-------------------------------------
SAVEREGS	PROC
	mov	regBP , bp
	mov	regDI , di
	mov	regSI , si
	mov	regSP , sp
	mov	regES , es
	mov	regSS , ss
	mov	regDS , ds
  mov	regCS , cs
	ret
SAVEREGS	ENDP
;-------------------------------------
; Ввод и перевод near-адреса в двоичное число
;-------------------------------------
NEARIN PROC
	mov	bp , 0	; счетчик введенных символов
	mov bx , 0	; число
  NEARINLOOP:
  	call GETCH
  	mov	dl , al
  	jmp	CHECK
  SHIFT:
  	call PUTCH
  	pop	ax
  	mov ah , 0
  	shl	bx , 4
  	add	bx , ax
  	inc	bp ; счетчик ввода
  	cmp	bp , 4
  	je EXIT
  	jmp NEARINLOOP
  CHECK:
  	cmp	al , EXITSMBL
  	jne	NUMBER
  	mov	PRGRMFLAG , 1
  	jmp	EXIT
  NUMBER:
  	; Проверка цифр
  	cmp al , '0'
  	jb BIGCHR
  	cmp al , '9'
  	ja BIGCHR
  	sub al , '0'
  	push ax
  	jmp	SHIFT
  BIGCHR:
    cmp al , 'A'
  	jb SMALLCHR
  	cmp al , 'F'
  	ja SMALLCHR
  	sub al , 'A'-10
  	push ax
  	jmp	SHIFT
  SMALLCHR:
  	cmp al , 'a'
  	jb NEARINLOOP
  	cmp al , 'f'
  	ja NEARINLOOP
  	sub al , 'a'-10 ; 'b'-'a'+10 = 11
  	push	ax
  	jmp	SHIFT
  EXIT:
    ret
NEARIN ENDP
;-------------------------------------
; Вывод регистров
;-------------------------------------
PRINTREGS	PROC
	call	CLRF
	mov	dl , 'C'
	call	PUTCH
	mov	dl , 'S'
	call	PUTCH
	mov	dl , '='
	call PUTCH
	mov	dx , regCS
	call DBLHEX
	mov dl , ' '
	call PUTCH
	mov	dl , 'D'
	call PUTCH
	mov dl , 'S'
	call PUTCH
	mov	dl , '='
	call PUTCH
	mov	dx , regDS
	call DBLHEX
	mov dl , ' '
	call PUTCH
	mov	dl , 'S'
	call PUTCH
	mov	dl , 'S'
	call PUTCH
	mov	dl , '='
	call PUTCH
	mov	dx , regSS
	call DBLHEX
	mov dl , ' '
	call PUTCH
	mov	dl , 'E'
	call PUTCH
	mov	dl , 'S'
	call PUTCH
	mov	dl , '='
	call PUTCH
	mov	dx , regES
	call DBLHEX
	mov dl , ' '
	call PUTCH
	mov	dl , 'S'
	call PUTCH
	mov	dl , 'P'
	call PUTCH
	mov	dl , '='
	call PUTCH
	mov	dx , regSP
	call DBLHEX
	mov dl , ' '
	call PUTCH
	mov	dl , 'S'
	call PUTCH
	mov	dl , 'I'
	call PUTCH
	mov dl , '='
	call PUTCH
	mov	dx , regSI
	call DBLHEX
	mov dl , ' '
	call PUTCH
	mov	dl , 'D'
	call PUTCH
	mov	dl , 'I'
	call PUTCH
	mov	dl , '='
	call PUTCH
	mov	dx , regDI
	call DBLHEX
	mov dl , ' '
	call PUTCH
	mov	dl , 'B'
	call PUTCH
	mov	dl , 'P'
	call PUTCH
	mov	dl , '='
	call PUTCH
	mov	dx , regBP
	call DBLHEX
	call CLRF
	mov	dx , DUMP1
	call DBLHEX
	mov dl , ':'
	call PUTCH
	mov dx , DUMP2
	call DBLHEX
	mov dl , '-'
	call PUTCH
	mov	dx , DUMP1
	call DBLHEX
	mov dl , ':'
	call PUTCH
	mov	dx , DUMP2
	add	dx , BUFLEN
	call DBLHEX
	call CLRF
	ret
PRINTREGS	ENDP
;-------------------------------------
; Занесение дампа
;-------------------------------------
DUMPIN PROC
	mov	ax , DUMP1
	push ax
	pop es
	mov	di , DUMP2
	mov	si , 0
	mov	cx , BUFLEN
  DUMPINLOOP:
  	mov	al , BYTE PTR es:[di]
  	mov	BUF[si] , al ; занесение символа в буфер
  	inc	di
  	inc	si
  	loop DUMPINLOOP
  	ret
DUMPIN ENDP
;-------------------------------------
; Вывод дампа
;-------------------------------------
DUMPOUT	PROC
	mov	cx , STRINGS
	mov	si , 0
  DUMPOUTLOOP:
  	push cx
  	CALL PRINTSTR
  	pop	cx
  	loop DUMPOUTLOOP
  	ret
DUMPOUT	ENDP
;-------------------------------------
; Вывод строки в дампе
;-------------------------------------
PRINTSTR	PROC
	; Вывод адреса
	mov	dx , DUMP1
	call DBLHEX
	mov dl , ':'
	call PUTCH
	mov	dx , DUMP2
	add	dx , si
	call DBLHEX
	mov	dl , ':'
	call PUTCH
	mov	dl , ' '
	call PUTCH
	; Вывод байтов в шестнадцатиричном виде
	push si
	mov cx , STRLEN
  PRINTSTRLOOP:
  	mov	dl , BUF[si] ; занесение текущего символа в DL
  	inc	si
  	call HEX ; вывод символа в HEX
  	mov	dl , ' '
  	call PUTCH ; вывод пробела
  	loop PRINTSTRLOOP
  	mov	dl , ':'
  	call PUTCH
  	mov	dl , ' '
  	call PUTCH
  	; Вывод в виде символов
  	pop	si
  	mov	cx , STRLEN
  PRINTSTRLOOP2:
  	mov	dl , BUF[si] ; занесение текущего символа в DL
  	inc	si
  	cmp	dl , 32	; код пробела
  	jae	PRINT
  	mov	dl , EXITSMBL
  PRINT:
  	call PUTCH ; вывод пробела
  	loop PRINTSTRLOOP2
  	call CLRF
  	ret
PRINTSTR ENDP

END START
CODE ENDS
