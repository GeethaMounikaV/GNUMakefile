# Compiler
CC = gcc
CFLAGS = -Wall -Wextra -O2

# Sources
SOURCES := main.c mathutils.c

# Trick: convert .c to .o using subst
# $(subst from,to,text)
OBJECTS := $(subst .c,.o,$(SOURCES))

# Target
TARGET = myprog

all: $(TARGET)

# Build target
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile each .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

