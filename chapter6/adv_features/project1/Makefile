# List of source files
SRC := main.c hello.c world.c

# Object files using pattern substitution
OBJ := $(SRC:%.c=%.o)

# Header files
HDR := hello.h world.h

# Target name
TARGET := myapp

all: $(TARGET)

# Link objects
$(TARGET): $(OBJ)
	$(CC) -o $@ $^

# Compile each .c into .o
%.o: %.c $(HDR)
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

