# MPLAB IDE generated this makefile for use with GNU make.
# Project: EXAMPLE.mcp
# Date: Sat Nov 19 20:28:42 2022

AS = MPASMWIN.exe
CC = mcc18.exe
LD = mplink.exe
AR = mplib.exe
RM = rm

EXAMPLE.cof : EXAMPLE.o
	$(LD) /l"C:\MPLAB\MCC18\lib" "..\MPLAB\MCC18\lkr\18f452.lkr" "EXAMPLE.o" /o"EXAMPLE.cof" /M"EXAMPLE.map" /W

EXAMPLE.o : EXAMPLE.c ../MPLAB/MCC18/h/p18f452.h
	$(CC) -p=18F452 "EXAMPLE.c" -fo="EXAMPLE.o" -D__DEBUG -Ou- -Ot- -Ob- -Op- -Or- -Od- -Opa-

clean : 
	$(RM) "EXAMPLE.o" "EXAMPLE.cof" "EXAMPLE.hex"

