# Search paths
vpath %.c src
vpath %.h include

# Compiler settings
CC = gcc
CFLAGS = -Iinclude

# Objects
OBJS = main.o def.o

# Final program
program: $(OBJS)
	$(CC) $(OBJS) -o program

# Clean rule
clean:
	rm -f $(OBJS) program

