MYCODE SEGMENT 'CODE'
    ASSUME CS:MYCODE
START:
; Загрузка сегментного регистра данных DS
     PUSH CS
     POP  DS    
; Вывод символов и перевод строки
     MOV DL , 'А'
     CALL PUTCH
     CALL CLRF 
     MOV DL , 'Б'
     CALL PUTCH                  	
     CALL CLRF             
     MOV DL , 'В'
     CALL PUTCH
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
; Вывод одного символа на экран
PUTCH PROC
    MOV AH , 02H
    INT 021H
    RETN 
PUTCH ENDP
; Ввод символа с клавиатуры в AL
GETCH PROC
    MOV AH , 08H
    INT 021H
    RET 
GETCH ENDP 
MYCODE ENDS
END START