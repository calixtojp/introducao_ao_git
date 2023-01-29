all: matriz.o main.o
	gcc main.o matriz.o -o p1 -std=c99 -Wall 

matriz.o:
	gcc -c matriz.c -o matriz.o

main.o:
	gcc -c main.c -o main.o

clean:
	rm *.o p1

run:
	./p1	