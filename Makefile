CFLAGS= -Wall -Wextra -g

main: main.o liste.o

main.o: liste.h main.c

tas.o: tas.c tas.h

clean:
	rm -rf *.o
	rm -rf main
