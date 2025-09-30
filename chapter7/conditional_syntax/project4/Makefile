CC = gcc
CFLAGS = -Wall

ifndef USE_FOO
SRC = main.c bar.c
else
SRC = main.c foo.c
endif

all:
	$(CC) $(CFLAGS) $(SRC) -o myprog

clean:
	rm -rf *.o myprog
