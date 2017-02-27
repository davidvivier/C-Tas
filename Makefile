CFLAGS= -Wall -Wextra -g

main: main.o tas.o

main.o: tas.h main.c

tas.o: tas.c tas.h

clean:
	rm -rf *.o
	rm -rf main
