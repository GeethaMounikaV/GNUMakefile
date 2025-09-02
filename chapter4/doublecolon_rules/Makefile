CC = gcc
CFLAGS = -Wall -g

# First way to build 'program' (depends on .c files)
program :: main.o utils.o
	$(CC) $(CFLAGS) -o program main.o utils.o

# Second way to build 'program' (force rebuild if header changes)
program :: utils.h
	@echo "Header changed → recompiling everything!"
	$(CC) $(CFLAGS) -o program main.c utils.c



clean:
	rm -rf program main.o utils.o
