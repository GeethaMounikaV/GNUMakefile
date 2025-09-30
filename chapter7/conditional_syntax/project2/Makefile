MODE = RELEASE
CC = gcc
CFLAGS = -Wall

ifeq ($(MODE),DEBUG)
SRC = main.c foo.c
CFLAGS += -DDEBUG_MODE   # define macro for main.c
else ifeq ($(MODE),RELEASE)
SRC = main.c bar.c
endif

all:
	$(CC) $(CFLAGS) $(SRC) -o myprog

clean:
	rm -f myprog

