# Source and header files
SRCS = main.c utils.c helper.c
HEADERS = utils.h helper.h

# Demonstrating $(firstword)
FIRST_SRC := $(firstword $(SRCS))
FIRST_HDR := $(firstword $(HEADERS))

CC = gcc
CFLAGS = -Wall -g
TARGET = program

all: $(TARGET)
	@echo "First .c file = $(FIRST_SRC)"
	@echo "First .h file = $(FIRST_HDR)"

$(TARGET): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) -o $@ $(SRCS)

clean:
	rm -f $(TARGET)

