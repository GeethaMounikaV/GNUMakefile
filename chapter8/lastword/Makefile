# Source and header files
SRCS = main.c utils.c helper.c
HEADERS = utils.h helper.h

# Demonstrating $(lastword)
LAST_SRC := $(lastword $(SRCS))
LAST_HDR := $(lastword $(HEADERS))

CC = gcc
CFLAGS = -Wall -g
TARGET = program

all: $(TARGET)
	@echo "Last .c file = $(LAST_SRC)"
	@echo "Last .h file = $(LAST_HDR)"

$(TARGET): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) -o $@ $(SRCS)

clean:
	rm -f $(TARGET)

