.SECONDEXPANSION:

# Directory for object files
OBJ_DIR := obj

# Source files
SRCS := main.c help.c

# Object files: obj/main.o obj/helper.o
OBJS := $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRCS))

# Target
TARGET := myapp

# Make object directory if it doesn't exist
$(shell mkdir -p $(OBJ_DIR))

# Default goal
all: $(TARGET)

# Link the final executable
$(TARGET): $(OBJS)
	@echo "Linking $@ from $^"
	$(CC) $^ -o $@

# Pattern rule with secondary expansion
$(OBJ_DIR)/%.o: %.c $$(call headers_for,$$*)
	@echo "Compiling $< (stem=$*)"
	$(CC) -c $< -o $@

# Dummy function to simulate a secondary expansion use case
define headers_for
$(if $(filter $1,main),main.h)
endef

clean:
	rm -f $(OBJ_DIR)/*.o $(TARGET)

.PHONY: all clean

