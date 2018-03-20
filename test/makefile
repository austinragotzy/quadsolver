CFLAGS= -Wall -pedantic -std=c11
CC= gcc

comtest: cunit.c ../src/validatein.c
	gcc -Wall testvalin.c cunit.c ../src/validatein.c -o testvalin -lm
runtest:
	./testvalin
