all: main

main: functions.o main.o
	clang functions.o main.o -o main

functions.o: functions.c
	clang -c functions.c

main.o: main.c funchead.h
	clang -c main.c

clean:
	rm -f *.o functions.o main.o 
