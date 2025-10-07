CC = gcc
CFLAGS = -Wall -Wextra -O2

# Sources
SOURCES := main.c mathutils.c

# Example 1: using patsubst to turn .c → .o
OBJECTS := $(patsubst %.c,%.o,$(SOURCES))

# Example 2: using substitution shorthand (same as patsubst)
HEADERS := $(OBJECTS:.o=.h)

TARGET = myprog

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

show-vars:
	@echo "SOURCES = $(SOURCES)"
	@echo "OBJECTS = $(OBJECTS)"
	@echo "HEADERS = $(HEADERS)"

