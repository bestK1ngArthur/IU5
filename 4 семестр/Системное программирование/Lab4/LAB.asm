;  Лабораторная работа №3 (+ дополнительные требования)
MYCODE SEGMENT 'CODE'
ASSUME CS:MYCODE
LABTITLE db 'Лабораторная работа #4$'
STUDENTNAME db 'Артём Белков Дмитриевич$'
START:
; Загрузка сегментного регистра данных DS
     PUSH CS
     POP  DS
; Очитка экрана
     CALL CLRSCR
; Вывод заголовка
     MOV DX, offset LABTITLE
     CALL PUTSTR
     CALL CLRF
; Вывод первого символа
     MOV DL , 'А'
     CALL PUTCH
SYMBOLLOOP:
; Вывод символов и перевод строки
     INC DL
     CALL PUTCH
     CALL CLRF
; if (symbol == 'Я')
     CMP AL, 'Я'
     JNE SYMBOLLOOP
; Ожидание завершения программы
     CALL GETCH
; Вывод из программы
     MOV AL , 0
     MOV AH , 4CH
     INT 21H
; Процедуры:
; Перевод на новую строку
CLRF PROC
    MOV DL , 10
    CALL PUTCH
    MOV DL , 13
    CALL PUTCH
    RET
CLRF ENDP
; Очистка экрана
CLRSCR PROC
    CALL CLRF
    MOV  AH , 0H
    MOV  AL , 3H
    INT  10H
    RET
CLRSCR ENDP
; Вывод одного символа на экран
PUTCH PROC
    MOV AH , 02H
    INT 021H
    RET
PUTCH ENDP
; Вывод строки
PUTSTR PROC
    MOV AH , 09H
    INT 021H
    RETN
PUTSTR ENDP
; Ввод символа с клавиатуры в AL
GETCH PROC
    MOV AH , 08H
    INT 021H
    RET
GETCH ENDP
MYCODE ENDS
END SYMBOLLOOP
END START
