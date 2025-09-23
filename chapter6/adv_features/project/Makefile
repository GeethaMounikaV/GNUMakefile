# List of source files
SRC := main.c hello.c

# Object files -> replace .c with .o using substitution reference
OBJ := $(SRC:.c=.o)

# Header files (not compiled, just for dependency tracking)
HDR := hello.h

# Final executable name
TARGET := myapp

# Default rule
all: $(TARGET)

# Link objects into final executable
$(TARGET): $(OBJ)
	$(CC) -o $@ $^

# Compile each .c into .o
%.o: %.c $(HDR)
	$(CC) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJ) $(TARGET)

