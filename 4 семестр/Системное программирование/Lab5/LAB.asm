; Лабораторная работа №5

assume cs:CODE
CODE SEGMENT 'CODE'
; -------------------------------
; Строковые константы
LABTITLE DB 'Лабораторная работа #5$'
HELP1 DB 'Новая строка - enter$'
HELP2 DB 'Выход из программы - esc$'
ESCSMBL DB 27 ; esc
ENTRSMBL DB 13 ; enter
; -------------------------------
; Вспомогательные штуки
HEX_TABLE DB '0123456789ABCDEF'
CURNTSMBL DB 'A'
STRING db 41 dup ('$')
; -------------------------------
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
; Главный цикл
     call CLRF
     MAIN:
       mov si , 0
       mov cx , 40
       INPUTSTR:
       ; Ввод символа
          call GETCH
          mov CURNTSMBL , al
       ; Проверка на символ выхода из программы
          cmp al , ESCSMBL
          je EXITP
       ; Проверка на конец строки
          cmp al , ENTRSMBL
    			je FINDEND
       ; Вывод символа
          mov dl , al
          call PUTCH
       ; Заполнение строки
          mov bh , CURNTSMBL
    			mov STRING[si] , bh
    			inc si
       ; Цикл INPUTSTR
          loop INPUTSTR
     FINDEND:
       mov cx , si
       mov si , 0
       ; Вывод ' ='
       mov dl , ' '
       call PUTCH
       mov dl , '='
       call PUTCH
       OUTPUTCH:
       ; Вывод пробела
         mov dl , ' '
         call PUTCH
       ; Перевод символа и вывод
         mov bh , STRING[si]
         mov CURNTSMBL , bh
         call HEX
         inc si
       ; Вывод символа 'h'
         mov dl , 'h'
         call PUTCH
       ; Цикл OUTPUTCH
         loop OUTPUTCH
       call CLRF
       dec di
   		 mov cx , di
       ; Цикл MAIN
       loop MAIN
     EXITP:
     ; Вывод из программы
       mov al , 0
       mov ah , 4CH
       int 21H
; Процедуры:
; -------------------------------
; Перевод символа в код
HEX PROC
    mov dl , CURNTSMBL
    lea bx , HEX_TABLE ; Load data table.
    mov al , dl
    shr al , 4 ; Leave high part only.
    xlat ; Get hex digit.
    mov dl , al
    call PUTCH
    mov dl , CURNTSMBL
    mov al , dl
    and al , 00001111b ; leave low part only.
    xlat ; Get hex digit.
    mov dl , al
    call PUTCH
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

END START
CODE ENDS
