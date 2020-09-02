@echo off
color 0A
title Run Compiler
cls

echo  +============================+
echo "|        Run Compiler        |"
echo  +============================+

set /p FileCompiler="Name File or Useing Must Src Location: "
set /p FileNameInCompile="Name Out Compiler : "

IF EXIST Bin (
	echo Folder Check 
) ELSE (
	echo Make Folder
	mkdir Bin
)

IF EXIST Bin/%FileNameInCompile%( del Bin/%FileNameInCompile% )
C:\MinGW\bin\g++ src/%FileCompiler% -o Bin/%FileNameInCompile%

cls


pause