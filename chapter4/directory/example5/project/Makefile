CC = gcc
CFLAGS = -Wall -Iinclude

# Tell make where to look for .c and .h files
vpath %.c src
vpath %.h include

# Target
main: main.o
	$(CC) $(CFLAGS) -o main main.o

# Rule to build .o from .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


.PHONY : clean
clean:
	rm -rf main main.o
