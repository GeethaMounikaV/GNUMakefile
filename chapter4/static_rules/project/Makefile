CC = gcc
CFLAGS = -Wall -g

OBJS = main.o add.o sub.o
TARGET = calc

# Default target
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Static pattern rule for .o from .c
$(OBJS): %.o: %.c funcs.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	rm -f $(OBJS) $(TARGET)

