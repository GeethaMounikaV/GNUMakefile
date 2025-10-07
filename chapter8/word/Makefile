CC = gcc
CFLAGS = -Wall -Isrc

# List of source files
SOURCES = src/main.c src/foo.c

# Pick the second source file using $(word)
SECOND_SRC = $(word 2,$(SOURCES))

all:
	@echo "All sources: $(SOURCES)"
	@echo "Second source file: $(SECOND_SRC)"
	$(CC) $(CFLAGS) $(SOURCES) -o myprog

clean:
	rm -f myprog

