# Enable second expansion
.SECONDEXPANSION:

# Define source files based on the target name
main_SRCS := main.c lib.c
lib_SRCS  := lib.c

# Compile options
CC = gcc
CFLAGS = -Wall -g

# Object files: use patsubst to convert .c -> .o
main_OBJS := $(patsubst %.c,%.o,$(main_SRCS))
lib_OBJS  := $(patsubst %.c,%.o,$(lib_SRCS))

# Targets using second expansion of prerequisites
main lib: $$(patsubst %.c,%.o,$$($$@_SRCS))

# Build rule
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Link
main:
	$(CC) $(CFLAGS) -o main $(main_OBJS)

lib:
	@echo "Just compiling lib object files: $(lib_OBJS)"

clean:
	rm -f *.o main

