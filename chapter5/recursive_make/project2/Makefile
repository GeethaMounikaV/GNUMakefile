CC = gcc
CFLAGS = -Wall
BUILD_ENV ?= unknown

app: main.c
	$(CC) $(CFLAGS) -DBUILD_ENV=\"$(BUILD_ENV)\" -o $@ $^

clean:
	rm -f app

