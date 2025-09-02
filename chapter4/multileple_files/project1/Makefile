CC := gcc
CFLAGS := -Wall -g

# Targets
all: littleoutput bigoutput

littleoutput: main.o add.o sub.o
	$(CC) $(CFLAGS) -o $@ $^

bigoutput: main.o sub.o add.o
	$(CC) $(CFLAGS) -o $@ $^

# Compile rules
main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

add.o: add.c add.h
	$(CC) $(CFLAGS) -c $< -o $@

sub.o: sub.c sub.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o littleoutput bigoutput

