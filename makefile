all: structs.o functions.o main.o
	gcc -o construct structs.o functions.o main.o

structs.o: structs.c
	gcc -c structs.c

functions.o: functions.c functions.h
	gcc -c functions.c

main.o: main.c functions.h structs.c
	gcc -c main.c

run:
	./construct

clean:
	rm *.o
	rm construct
