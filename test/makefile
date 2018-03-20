CFLAGS= -Wall -pedantic -std=c11
CC= gcc

comtest: cunit.c ../src/solve.c ../src/validatein.c
	gcc -Wall testquadsolver/testqs.c cunit.c ../src/solve.c -o testqs -lm
	gcc -Wall testvalidatein/testvalin.c cunit.c ../src/validatein.c -o testvalin -lm
runtest:
	./testqs
	./testvalin

clean:
	rm -f testvalin testqs
