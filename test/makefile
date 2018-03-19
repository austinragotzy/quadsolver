all: testvalin.c validatein.o cunit.o
	gcc -Wall -Wpedantic -std=c11 testvalin.c -lm -g -o tests
test:
	tests
validatein.o: validatein.h
cunit.o: cunit.h
