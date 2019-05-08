all: main

CC = g++
CFLAGS = -g -Wall -ansi
EE = main

main: Complex.o main.o
	@${CC} Complex.o main.o -o ${EE}
	@./${EE}

Complex.o: Complex.cpp Complex.h
	@${CC} ${CFLAGS} -c Complex.cpp

main.o: main.cpp
	@${CC} ${CFCLAGS} -c main.cpp

clean:
	rm -rf main main.o Complex.o
