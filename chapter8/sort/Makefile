# Compiler
CC = gcc
CFLAGS = -Wall -O2 -Isrc -Iextra

# Sources
SRC_DIR = src
EXTRA_DIR = extra

# Object files
OBJS = $(EXTRA_DIR)/startup.o \
       $(SRC_DIR)/main.o \
       $(SRC_DIR)/mathutils.o

# Target executable
TARGET = myprog

# Build rule
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Compile source files to object files
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(EXTRA_DIR)/%.o: $(EXTRA_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)

