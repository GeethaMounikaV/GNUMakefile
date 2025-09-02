# Search paths
vpath %.c src
vpath %.h include

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Iinclude

# Object files
OBJS = main.o ex.o

# Target
app: $(OBJS)
	@echo "Linking..."
	$(CC) -o $@ $(OBJS) -lm

# Clean rule
.PHONY: clean
clean:
	@echo "Cleaning..."
	rm -f $(OBJS) app

