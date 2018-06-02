; Лабораторная работа №6

assume cs:CODE
CODE SEGMENT 'CODE'
; --------------------------------------
LABTITLE DB 'Лабораторная работа #6$'
HELP DB 'Система взломана',13,10,'$'
ERROR DB 'Ошибка первого параметра командной строки',13,10,'$'
FLAG DB 'n'
; --------------------------------------
START:
; Загрузка сегментного регистра данных DS
  push cs
  pop  ds
; Вывод заголовка
  call CLRF
  mov dx , offset LABTITLE
  call PUTSTR
  call CLRF
; Получение параметров в bx
  mov ah , 62h
  int 21H
  push bx
; Проверка параметров
  mov ch , 00
  mov cl , es:80h
  cmp cx , 0000
  je PARAMSERROR
  mov bx , 80h
  COMPARE1:
    inc bx
    mov dl , es:bx
    cmp dl , 'A'
    jge COMPARE2
    loop COMPARE1
  jmp BEGIN
  COMPARE2:
    cmp dl , 'Z'
    jle CHANGE
    jmp COMPARE1
  CHANGE:
    add dl , 20h
    mov es:bx , dl
    jmp COMPARE1
  BEGIN:
    mov ch , 00
    mov cl , es:80h
    mov bx , 81h
    mov ah , 2
  LOOP1:
    mov dl , es:bx
    cmp dl , '/'
    je FRSTPARAM
    inc bx
    loop LOOP1
    jmp FRSTPARAMERROR
  FRSTPARAM:
    inc bx
    mov dl , es:bx
    cmp dl , 'c'
    jne FRSTPARAMERROR
    inc bx
    mov dl , es:bx
    cmp dl , '='
    jne FRSTPARAMERROR
    inc bx
    mov dl , es:bx
    cmp dl , 'y'
    jne COMPARE
    mov FLAG , 'y'
    jmp LOOP2
  PARAMSERROR:
    jmp FRSTPARAMERROR
  COMPARE:
    cmp dl , 'n'
    jne FRSTPARAMERROR
    LOOP2:
      inc bx
      mov dl , es:bx
      cmp dl , '/'
      je SCNDPARAM
      loop LOOP2
    jmp EXIT1
    SCNDPARAM:
      inc bx
      mov dl , es:bx
      cmp dl , 'h'
      jne SCNDPARAMANS
      jmp OUTHELP
    SCNDPARAMANS:
      cmp dl , '?'
      jne EXIT1
    OUTHELP:
      mov dx , OFFSET HELP
      call PUTSTR
      call GETCH
      jmp EXIT1
  FRSTPARAMERROR:
    ; Вывод строки об ошибке
    mov dx , OFFSET ERROR
    call PUTSTR
  EXIT1:
    cmp FLAG ,'y'
    je CLEARSCREEN
    jmp EXIT2
  CLEARSCREEN:
    call CLRSCR
  EXIT2:
    ; Вывод из программы
    mov al , 0
    mov ah , 4CH
    int 21H
; --------------------------------------
;             | Процедуры |
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

END START
CODE ENDS
