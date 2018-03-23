CFLAGS= -Wall -Wpedantic -std=c11 -lm
CC= gcc -g

all: main.o printout.o readin.o solve.o validatein.o validateout.o
	${CC} -o main $^ ${CFLAGS}

%.o: %.c
	${CC} -c $< -o $@ ${CFLAGS}

run: all
	./main 3 4 5
	./main -3.444 8 -4
	./main 3445 -747.3 8.33322134
	./main a 34.2a nineteen

clean:
	rm -f *.o main
