CC = gcc
CFLAGS = -Wall
CFLAGS += -O0
CFLAGS += -g

SRC_FILE = main.c hello.c
OBJ_FILE = main.o hello.o

target: $(OBJ_FILE)
	$(CC) $(CFLAGS) -o target $(OBJ_FILE)


#compiles the object files and it indicates the given below 
#gcc -Wall -O0 -g -c main.c -o main.o

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf target $(OBJ_FILE)



