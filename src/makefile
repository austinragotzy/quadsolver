CFLAGS= -Wall -Wpedantic -std=c11 -lm
CC= gcc -g

all: main.o printout.o readin.o solve.o validatein.o validateout.o
	${CC} -o main $^ ${CFLAGS}

%.o: %.c
	${CC} -c $< -o $@ ${CFLAGS}

run: all
	./main

deploy: main.o printout.o readin.o solve.o validatein.o validateout.o
	tar -cvf ../distr/quadsolver1.0.tar .

exe: main.o printout.o readin.o solve.o validatein.o validateout.o
	${CC} -o ../bin/quadSolver $^ ${CFLAGS}

clean:
	rm -f *.o main
