CFLAGS= -Wall -pedantic -std=c11
CC= gcc -g

comtest: cunit.c ../src/solve.c ../src/validatein.c
	${CC} ${CFLAGS} testquadsolver/testqs.c cunit.c ../src/solve.c -o testqs -lm
	${CC} ${CFLAGS} testvalidatein/testvalin.c cunit.c ../src/validatein.c -o testvalin -lm
	${CC} ${CFLAGS} testvalidateout/testvalout.c cunit.c ../src/validateout.c -o testvalout -lm

runtest:
	./testqs
	./testvalin
	./testvalout

clean:
	rm -f testvalin testqs testvalout
