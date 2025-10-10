# Source and header files
SRCS = main.c utils.c
HEADERS = utils.h

# Functions demonstration
NUM_SRCS := $(words $(SRCS))
LAST_SRC := $(word $(words $(SRCS)),$(SRCS))

NUM_HDRS := $(words $(HEADERS))
LAST_HDR := $(word $(words $(HEADERS)),$(HEADERS))

CC = gcc
CFLAGS = -Wall -g
TARGET = program

all: $(TARGET)
	@echo "Number of .c files = $(NUM_SRCS)"
	@echo "Last .c file = $(LAST_SRC)"
	@echo "Number of .h files = $(NUM_HDRS)"
	@echo "Last .h file = $(LAST_HDR)"

$(TARGET): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) -o $@ $(SRCS)

clean:
	rm -f $(TARGET)

