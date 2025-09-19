# Variables
CC = gcc                  # Compiler
CFLAGS = -Wall -g         # Compiler flags
SRC = main.c utils.c      # Source files
OBJ = $(SRC:.c=.o)        # Object files (automatic textual substitution)
TARGET = myprogram        # Output executable

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJ) $(TARGET)

