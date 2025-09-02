# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror

# Default target
all: build/app

# Link the final app
build/app: build/main.o build/utils.o
	$(CC) $(CFLAGS) build/main.o build/utils.o -o build/app

# Compile main.o — build directory is an order-only prerequisite
build/main.o: main.c utils.h | build
	$(CC) $(CFLAGS) -c main.c -o build/main.o

# Compile utils.o — build directory is an order-only prerequisite
build/utils.o: utils.c utils.h | build
	$(CC) $(CFLAGS) -c utils.c -o build/utils.o

# Order-only prerequisite target
build:
	mkdir -p build

# Clean up
clean:
	rm -rf build

