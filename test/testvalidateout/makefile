CFLAGS= -Wall -pedantic -std=c11
CC= gcc -g

comtest: ../cunit.c ../../src/validateout.c
	${CC} ${CFLAGS} testvalout.c ../cunit.c ../../src/validateout.c -o testvalout -lm
runtest:
	./testvalout
