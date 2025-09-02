CC = gcc
CFLAGS = -Wall -o0 -g

OBJS = main.o

#exite: $(OBJS)
#	$(CC) $(CFLAGS) -o exite $(OBJS)

#echo done
main.o: main.c hello.h
	$(CC) $(CFLAGS) -c main.c -o main.o
	#echo "makefile done"
	
.PHONY: clean

clean:
	rm $(OBJS)

