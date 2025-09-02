CC = gcc
CFLAGS = -Wall -g
OBJS = main.o utils.o
TARGET = myprog

# Default target
.PHONY: all
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compiling object files
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files
.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET) print

# Run program
.PHONY: run
run: $(TARGET)
	./$(TARGET)

# Empty target example
# If main.c or utils.c is updated after last `make print`,
# then it will run echo and update the timestamp of "print".
print: main.c utils.c
	@echo "The following files changed since last print: $?"
	@touch print

