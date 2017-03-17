; Лабораторная работа №4
MYCODE SEGMENT 'CODE'
ASSUME CS:MYCODE
LABTITLE db 'Лабораторная работа #4$'
START:
; Загрузка сегментного регистра данных DS
     push CS
     pop  DS
; Очитка экрана
     CALL CLRSCR
; Вывод заголовка
     mov DX, offset LABTITLE
     call PUTSTR
     call CLRF
; Вывод первого символа
     mov DL , 'А'
     call PUTCH
; ..тут должен быть цикл с выводом символов..
; Ожидание завершения программы
     call GETCH
; Вывод из программы
     mov AL , 0
     mov AH , 4CH
     int 21H
; Процедуры:
; Перевод на новую строку
CLRF PROC
    mov DL , 10
    call PUTCH
    mov DL , 13
    call PUTCH
    ret
CLRF ENDP
; Очистка экрана
CLRSCR PROC
    call CLRF
    mov  AH , 0H
    mov  AL , 3H
    int  10H
    ret
CLRSCR ENDP
; Вывод одного символа на экран
PUTCH PROC
    mov AH , 02H
    int 021H
    ret
PUTCH ENDP
; Вывод строки
PUTSTR PROC
    mov AH , 09H
    int 021H
    ret
PUTSTR ENDP
; Ввод символа с клавиатуры
GETCH PROC
    mov AH , 08H
    int 021H
    ret
GETCH ENDP
MYCODE ENDS
END START
