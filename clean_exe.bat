@echo off
REM 声明采用UTF-8编码
chcp 65001
Cls
echo 按任意键开始清除子文件夹下所有.exe文件
pause
del /S *.exe
echo 按任意键结束
pause
exit