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
main.o: main.c utils.h
	$(CC) $(CFLAGS) -c main.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c



# Compiling object files
#%.o :%.c %.h
#       $(CC) $(CFLAGS) -c -o $@ $<


# Clean build files
.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)

# Run program
.PHONY: run
run: $(TARGET)
	./$(TARGET)

