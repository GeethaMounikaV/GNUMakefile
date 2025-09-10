CC     = gcc
CFLAGS = -Iinclude -Wall -g

all: src/libmathutils.a main

main: main.o src/libmathutils.a
	$(CC) $(CFLAGS) -o main main.o src/libmathutils.a

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

# Recursive call to src/
src/libmathutils.a:
	$(MAKE) -C src

clean:
	$(RM) main.o main
	$(MAKE) -C src clean

