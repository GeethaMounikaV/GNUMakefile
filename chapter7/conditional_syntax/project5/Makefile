#Toggle this bit with empty space or any value to see the difference

FOO = 1 

ifeq ($(strip $(FOO)),)
SRC = main.c bar.c
else
SRC = main.c foo.c
endif

all:
	$(CC) $(CFLAGS) $(SRC) -o myprog

clean:
	rm -rf *.o myprog
