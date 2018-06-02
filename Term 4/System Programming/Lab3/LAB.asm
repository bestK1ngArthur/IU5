;  Лабораторная работа №3 (+ дополнительные требования)
MYCODE SEGMENT 'CODE'
ASSUME CS:MYCODE
LABTITLE db 'Лабораторная работа #3$'
STUDENTNAME db 'Артём Белков Дмитриевич$'
START:
MAIN:
; Загрузка сегментного регистра данных DS
     PUSH CS
     POP  DS
; Очитка экрана
     CALL CLRSCR
; Вывод заголовка
     MOV DX, offset LABTITLE
     CALL PUTSTR
     CALL CLRF
; Вывод символов и перевод строки
     MOV DL , 'А'
     CALL PUTCH
     CALL CLRF
     MOV DL , 'Б'
     CALL PUTCH
     CALL CLRF
     MOV DL , 'В'
     CALL PUTCH
     CALL CLRF
; Вывод ФИО студента
     MOV DX, offset STUDENTNAME
     CALL PUTSTR
; Ожидание завершения программы
     CALL GETCH
; Проверям введенный символ
     CMP AL, '*'
     JNE MAIN
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
END MAIN
END START
