CC = gcc
CFLAGS = -Wall -g

all: app

app: main.o utils.o
	$(CC) $(CFLAGS) main.o utils.o -o app

main.o: src/main.c src/utils.h
	cd src && $(CC) $(CFLAGS) -c main.c -o ../main.o

utils.o: src/utils.c src/utils.h
	cd src && $(CC) $(CFLAGS) -c utils.c -o ../utils.o

clean:
	rm -f *.o app

