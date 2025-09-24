CC := gcc

# Example: substitution reference
files := hello.o main.o
sources := $(files:.o=.c)  # hello.o -> hello.c, main.o -> main.c

$(info files = $(files))
$(info sources = $(sources))

all: myapp

# Compile each .c into .o
%.o: %.c
	$(CC) -c $< -o $@

# Link
myapp: $(files)
	$(CC) -o $@ $(files)

clean:
	rm -f *.o myapp

