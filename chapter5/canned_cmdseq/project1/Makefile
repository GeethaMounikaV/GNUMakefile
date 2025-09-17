#Without Canned Sequence
CC = gcc
CFLAGS = -Wall -g

OBJS = main.o helper.o

program: $(OBJS)
	@echo "Linking $(OBJS) -> program"
	$(CC) $(CFLAGS) -o $@ $(OBJS)

main.o: main.c helper.h
	@echo "Compiling main.c -> main.o"
	$(CC) $(CFLAGS) -c main.c -o main.o

helper.o: helper.c helper.h
	@echo "Compiling helper.c -> helper.o"
	$(CC) $(CFLAGS) -c helper.c -o helper.o

clean:
	rm -f *.o program

