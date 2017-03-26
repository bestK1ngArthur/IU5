; Лабораторная работа №4 (+ дополнительные требования)
MYCODE SEGMENT 'CODE'
ASSUME CS:MYCODE
LABTITLE DB 'Лабораторная работа #4$'
CURNTSMBL DB 'А'
HEX_TABLE DB '0123456789ABCDEF'
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
; Установка количества символов для вывода
     mov cx , 10
     call PRNTHEAD
; Цикл вывода символов
  LOOPCH:
     mov dl , '│'
     call PUTCH
     mov dl, CURNTSMBL
     inc CURNTSMBL
     call PUTCH
     mov dl, '│'
     call PUTCH
     call HEX
     mov dl, 'h'
     call PUTCH
     mov dl , '│'
     call PUTCH
     mov dl, CURNTSMBL
     inc CURNTSMBL
     call PUTCH
     mov dl, '│'
     call PUTCH
     call HEX
     mov dl, 'h'
     call PUTCH
     mov dl , '│'
     call PUTCH
     call CLRF
     cmp cx , 1 ; Если последний символ, то печатать хвост
     je CONTINUE
     call PRNTSEPRTR
     loop LOOPCH
  CONTINUE:
     call PRNTTAIL
; Ожидание завершения программы
     call GETCH
; Вывод из программы
     mov al , 0
     mov ah , 4CH
     int 21H

; Процедуры:
; -------------------------------
; Перевод символа в код
HEX PROC
    mov dl , CURNTSMBL
    lea bx , HEX_TABLE ; load data table.
    mov al , dl
    shr al , 4 ; leave high part only.
    xlat ; Get hex digit.
    mov ah , 0Eh ; Teletype sub-function.
    int 10h
    mov al , dl
    and al , 0Fh ; leave low part only.
    xlat ; Get hex digit.
    mov ah , 0Eh ; Teletype sub-function.
    int 10h
    ret
HEX ENDP
; -------------------------------
; Перевод на новую строку
CLRF PROC
    mov dl , 10
    call PUTCH
    mov dl , 13
    call PUTCH
    ret
CLRF ENDP
; -------------------------------
; Очистка экрана
CLRSCR PROC
    call CLRF
    mov  ah , 0H
    mov  al , 3H
    int  10H
    ret
CLRSCR ENDP
; -------------------------------
; Вывод одного символа на экран
PUTCH PROC
    mov ah , 02H
    int 21H
    ret
PUTCH ENDP
; -------------------------------
; Вывод строки
PUTSTR PROC
    mov ah , 09H
    int 21H
    ret
PUTSTR ENDP
; -------------------------------
; Ввод символа с клавиатуры
GETCH PROC
    mov ah , 08H
    int 21H
    ret
GETCH ENDP
; -------------------------------
; Печать шапки
PRNTHEAD PROC
    mov dl , '┌'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '┬'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '┬'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '┬'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '┐'
    call PUTCH
    call CLRF
    ret
PRNTHEAD ENDP
; -------------------------------
; Печать шапки
PRNTSEPRTR PROC
    mov dl , '├'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '┼'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '┼'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '┼'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '┤'
    call PUTCH
    call CLRF
    ret
PRNTSEPRTR ENDP
; -------------------------------
; Печать шапки
PRNTTAIL PROC
    mov dl , '└'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '┴'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '┴'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '┴'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '─'
    call PUTCH
    mov dl , '┘'
    call PUTCH
    call CLRF
    ret
PRNTTAIL ENDP

END START
MYCODE ENDS
