CC = gcc
CFLAGS = -Wall -O0 -g -Iinclude   # -I tells compiler to search headers in include/

VPATH = src:include               # Search .c in src and .h in include

main.o : main.c def.h ex.h
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY: clean

clean:
	rm -rf main.o

