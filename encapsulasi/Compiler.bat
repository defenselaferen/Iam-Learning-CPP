@echo off
color 0A
title Run Compiler
cls

echo  +============================+
echo "|        Run Compiler        |"
echo  +============================+

IF EXIST Bin (
	echo Folder Check 
) ELSE (
	echo Make Folder
	mkdir Bin
)

g++ src/Main.cpp src/lib/Player.cpp src/lib/Weapon.cpp src/lib/Enemy.cpp -o Bin/Main.exe

pause
cls
cd Bin
Main

pause
cd ..