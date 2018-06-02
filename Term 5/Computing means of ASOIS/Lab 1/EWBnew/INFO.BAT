@echo off
echo VER------------------------------------------------- >info.log
ver                                                      >>info.log
echo MEM------------------------------------------------->>info.log
mem                                                      >>info.log
echo CHKDSK---------------------------------------------->>info.log
chkdsk C:                                                >>info.log
echo CONFIG---------------------------------------------->>info.log
What C "Which drive contains your AUTOEXEC.BAT file?  A: B: or C:] " ABC
echo ÿ
set D=%WHAT%
type %D%:\config.sys                                     >>info.log
echo AUTOEXEC-------------------------------------------->>info.log
type %D%:\autoexec.bat                                     >>info.log
echo SET------------------------------------------------->>info.log
set                                                      >>info.log
