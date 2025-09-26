TARGET = demo
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include

# Start objects list with main.o
objects := $(OBJ_DIR)/main.o

# Append other objects
objects += $(OBJ_DIR)/hello.o
objects += $(OBJ_DIR)/goodbye.o

# Compiler flags
cflags := -I$(INC_DIR)
cflags += -Wall -g

CC = gcc

$(TARGET): $(objects)
	$(CC) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(cflags) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR) $(TARGET)

