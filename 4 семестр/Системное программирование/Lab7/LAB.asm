; Лабораторная работа №7

assume cs:CODE
CODE SEGMENT 'CODE'
; --------------------------------------
LABTITLE DB 'Лабораторная работа #7$'
HELP1 DB 'Новая строка - enter$'
HELP2 DB 'Выход из программы - esc$'
ENTRMSGE DB 'Введите число: $'
HEX_TABLE DB '0123456789ABCDEF$'
CURNTSMBL DB 'A'
EXITSMBL DB 27 ; esc
PRGRMFLAG DB	0
k	DW 10000,1000,100,10,1
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
; Вывод справки
  call CLRF
  mov dx , offset HELP1
  call PUTSTR
  call CLRF
  mov dx , offset HELP2
  call PUTSTR
  call CLRF
  call CLRF
  MAINLP:
  ; Вывод строки для ввода
    mov dx , offset ENTRMSGE
    call PUTSTR
  ; Ввод двухбайтового слова в 16-м виде
    call INPUTBIN
  ; Проверка на '*'
    cmp	PRGRMFLAG , 1
    je EXITP
    push BX
  ; Вывод ' = '
    mov dl , ' '
    call PUTCH
    mov dl , '='
    call PUTCH
    mov dl , ' '
    call PUTCH
  ; Вывод двубайтового слова в 16-м виде
    mov dx , bx
    push dx
    mov CURNTSMBL , dh
  	call HEX ; Первый байт
  	pop dx
  	mov dh , dl
    mov CURNTSMBL , dh
  	call HEX ; Второй байт
  	mov dl , 'h'
  	call PUTCH
    ; Вывод ' ()'
    mov dl , ' '
  	call PUTCH
    mov dl , '('
  	call PUTCH
    ; Вывод двухбайтового слова в 10-м виде
    pop	BX
    call DEC
    ; Вывод ')'
    mov dl , ')'
  	call PUTCH
    ; Продолжение цикла
    call CLRF
    mov cx , 2
    loop MAINLP
    EXITP:
    ; Вывод из программы
      mov al , 0
      mov ah , 4CH
      int 21H
; --------------------------------------
;             | Процедуры |
; --------------------------------------
; Перевод символа в код
; --------------------------------------
HEX PROC
  mov dl , CURNTSMBL
  lea bx , HEX_TABLE ; Загрузка таблицы
  mov al , dl
  shr al , 4 ; Отбрасывание младщших разрядов
  xlat ; Преобразование в 16 систему
  mov dl , al
  call PUTCH
  mov dl , CURNTSMBL
  mov al , dl
  and al , 00001111b ; Отбрасывание старших разрядов
  xlat ; Преобразование в 16 систему
  mov dl , al
  call PUTCH
  ret ; Выход
HEX ENDP
; --------------------------------------
; Перевод на новую строку
; --------------------------------------
CLRF PROC
  mov dl , 10
  call PUTCH
  mov dl , 13
  call PUTCH
  ret ; Выход
CLRF ENDP
; --------------------------------------
; Очистка экрана
; --------------------------------------
CLRSCR PROC
  call CLRF
  mov  ah , 0H
  mov  al , 3H
  int  10H
  ret ; Выход
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
; --------------------------------------
; Ввод слова и перевод адреса в двоичное число
; --------------------------------------
INPUTBIN PROC
	mov	bp , 0	; Счетчик введенных символов
	mov bx , 0	; Число
  INLOOP:
	  ; Ввод символа
	  call GETCH
	  mov	dl , al
	  jmp	CHECK
  SHIFT:
	  ; Если символ правильный, то он выводится
	  call PUTCH
	  ; Восстановление из стека введенной цифры
	  pop	ax
	  ; Занесение 0 в ah, в al цифра
	  mov ah , 0
	  ; Cдвиг предыдущего результата на 4 влево
	  shl	bx , 1
	  shl	bx , 1
	  shl	bx , 1
	  shl	bx , 1
	  ; Добавление введенной цифры к предыдущему результату
	  add	bx , ax
	  inc	bp	; Cчетчик ввода
	  ; Если введены 4 цифры, то выходим
	  cmp	bp , 4
	  je EXIT
	  jmp INLOOP
  CHECK:
	  cmp	al , EXITSMBL ; Если введен не EXITSMBL то проверяются цифры и буквы
	  jne	NUMBER
	  mov	PRGRMFLAG , 1 ; Иначе установка флага выхода из программы и возврат из процедуры
	  jmp	EXIT
  NUMBER:
    ; Проверка цифр
	  ; Если ascii-код введенного символа <'0' или '9'>, то проверка больших букв
	  cmp al , '0'
	  jb BIGCHR
	  cmp al , '9'
	  ja BIGCHR
	  ; Иначе вычитание символа '0' из ascii-кода введенной цифры (преобразование "буквы" в число)
	  sub al , '0'  ; al - число
	  ; Сохранение числа в стеке
	  push ax
	  ; Переход на накопление результата в bx
	  jmp	SHIFT
  BIGCHR:
  	; Если ascii-код введенного символа <'A' или >'F', то проверка маленьких букв
  	cmp al , 'A'
  	jb SMALLCHR
  	cmp al , 'F'
  	ja SMALLCHR
  	; Преобразование букв в 16-е цифры
  	sub al , 'A'-10 ; 'B'-'A'+10=11
  	; Сохранение числа в стеке
  	push ax
  	jmp	SHIFT
  SMALLCHR:
    cmp al , 'a'
  	jb INLOOP
  	cmp al , 'f'
  	ja INLOOP
  	sub al , 'a'-10 ; 'b'-'a'+10=11
  	push ax
  	jmp	SHIFT
  EXIT:
    ret
INPUTBIN ENDP
; --------------------------------------
; Перевод из 16-ой в 10-ую систему
; --------------------------------------
DEC PROC
	mov	ax , bx ; Число
	mov	di , 0 ; Счетчик цикла
  LOOP:
  	mov	dx , 0 ; Старший байт делимого
  	mov	bx , k[di] ; Делитель
  	; Деление
  	; dx:ax / bx = ax(dx)
  	; ax - частное, dx - остаток
    div	bx
  	; Остаток в стек
  	; Остаток считается новым числом
  	push	dx
  	; Вывод результата деления
  	add	ax , '0'
  	mov	dl , al
  	call PUTCH
  	; В ax (младший байт делимого) помещается остаток
  	pop	ax
  	inc	di
  	inc	di
  	; 5 цифр - 10 байт
  	cmp	di , 10
  	jb LOOP
  ret
DEC	ENDP

END START
CODE ENDS
