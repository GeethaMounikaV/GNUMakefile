CC := cc
CFLAGS := -Wall -Wextra -std=c11

# Grab all .c files in the current directory
SRC := $(wildcard *.c)

# Convert .c file list to .o file list
OBJ := $(SRC:.c=.o)

# Default target
program: $(OBJ)
	@echo "Linking program from:" $^
	$(CC) $^ -o $@

# Pattern rule for building .o files from .c and corresponding .h files
%.o: %.c %.h
	@echo "Compiling $< ..."
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	@echo "Cleaning up..."
	rm -f $(OBJ) program

