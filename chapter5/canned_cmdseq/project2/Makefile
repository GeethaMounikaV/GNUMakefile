# Mark phony targets
.PHONY: all clean prepare

# Top-level target
all: prepare main

# Empty command target
prepare: ;  # just ensures dependencies, does nothing itself

# Compile main program
main: main.o utils.o
	gcc -o main main.o utils.o

# Compile object files
main.o: main.c utils.h
	gcc -c main.c

utils.o: utils.c utils.h
	gcc -c utils.c

# Clean build files
clean:
	rm -f *.o main
