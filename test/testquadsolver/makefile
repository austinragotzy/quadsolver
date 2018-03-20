CFLAGS= -Wall -pedantic -std=c11
CC= gcc

comtest: ../cunit.c ../../src/solve.c
	gcc -Wall testqs.c ../cunit.c ../../src/solve.c -o testqs -lm
runtest:
	./testqs
