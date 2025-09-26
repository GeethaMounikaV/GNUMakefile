TARGET = demo
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include

SRCS = $(SRC_DIR)/main.c $(SRC_DIR)/hello.c
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC = gcc
CFLAGS = -I$(INC_DIR) -Wall -g

# -------------------------------
# Define a canned sequence of commands
# -------------------------------
define run_and_clean
	@echo "Running the program..."
	./$(TARGET)
	@echo "Cleaning up..."
	rm -rf $(OBJ_DIR) $(TARGET)
endef

# -------------------------------
# Define a rule for linking
# -------------------------------
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile step
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Directory creation
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# -------------------------------
# Use the multi-line variable
# -------------------------------
.PHONY:clean
clean : $(TARGET)
	$(run_and_clean)



