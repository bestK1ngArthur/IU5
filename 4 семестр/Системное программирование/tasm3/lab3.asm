MYCODE SEGMENT 'CODE'
    ASSUME CS:MYCODE
    PUBLIC LET1
    PUBLIC LET2
    PUBLIC LET3
LET1  DB 'A'  
LET2  DB 'B'
LET3  DB 'C' 
START:
; Загрузка сегментного регистра данных DS
     PUSH CS
     POP  DS
; Вывод одного символа на экран
     MOV AH, 02
     MOV DL, LET1
     INT 21H
; Перевод на новую строку      
     MOV DL, 10
     MOV AH, 02h
     INT 21H 
     MOV DL, 13
     MOV AH, 02h
      INT 21H
     
     MOV AH, 02
     MOV DL, LET2
     INT 21H                  	
     
     MOV DL, 10
     MOV AH, 02h
     INT 21H 
     MOV DL, 13
     MOV AH, 02h
      INT 21H             
     
     MOV AH, 02
     MOV DL, LET3
     INT 21H                          
     
 ; Выход из программы
     MOV AL, 0
     MOV AH, 4CH
     INT 21H
MYCODE ENDS
END START


