# Compiler (default = gcc, but can override: make CC=clang)
CC ?= gcc

# Objects
objects = main.o math.o

# Libraries
libs_for_gcc = -lm       # math library for gcc
normal_libs  =           # nothing for others

# Conditional
ifeq ($(CC),gcc)
    LIBS = $(libs_for_gcc)
else
    LIBS = $(normal_libs)
endif

# Target
foo: $(objects)
	$(CC) -o $@ $(objects) $(LIBS)

# Generic compile rule
%.o : %.c
	$(CC) -c $< -o $@

clean:
	rm -f foo *.o

