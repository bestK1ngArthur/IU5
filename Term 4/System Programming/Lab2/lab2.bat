echo off
:menu
cls  
echo Лабораторная работа #2
echo 1. Создание директории
echo 2. Удаление директории
echo 3. О команде
echo 4. О студенте
echo 5. Выход
REM ВЫБОР ПУНКТА
be ask "Выберите пункт: " '12345' default=2 timeout=10
REM ВЕТВЛЕНИЕ
if ERRORLEVEL 5 goto p5
if ERRORLEVEL 4 goto p4
if ERRORLEVEL 3 goto p3
if ERRORLEVEL 2 goto p2
if ERRORLEVEL 1 goto p1
goto fin
:p1
echo Создание директории  
mkdir newdir 
echo Новая директория newdir создана
pause
goto menu
:p2
echo Удаление директории
rmdir newdir  
echo Директория newdir удалена
pause
goto menu
:p3
echo Название команды - MKDIR
mkdir /?
pause
goto menu
:p4
call student.bat
pause
goto menu
:p5
goto fin
:fin
ECHO Выход из программы
if "%1"=="1" be ask "Выйти из программы: " 'TF' default=2 timeout=10 
if "%2"=="1" pause
exit \b