# Makefile (order-only prerequisites version)

CC = gcc
CFLAGS = -Wall -Werror

all: build/app

build/app: build/main.o build/utils.o
	$(CC) $(CFLAGS) build/main.o build/utils.o -o build/app

# Here, "build" is an order-only prerequisite (after |)
build/main.o: main.c utils.h | build
	$(CC) $(CFLAGS) -c main.c -o build/main.o

build/utils.o: utils.c utils.h | build
	$(CC) $(CFLAGS) -c utils.c -o build/utils.o

build:
	mkdir -p build

clean:
	rm -rf build

