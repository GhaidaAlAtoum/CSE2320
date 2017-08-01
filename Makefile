#declare variable
CC = gcc

CFLAGS = -c -std=c99 -pedantic
all: Test

Test:  RB.o  lab3sum17.o
	$(CC) RB.o lab3sum17.o -o Test.out

RB.o: RB.h RB.c
	$(CC) $(CFLAGS) RB.c 
lab3sum17.o:
	$(CC) $(CFLAGS) lab3sum17.c
clean: 
	rm -rf *o *.h.gch *.out




