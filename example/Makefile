CC = gcc
CFLAGS = -Wall -O0 -g 

#all:edit

OBJS = main.o kdb.o ex.o 

edit: main.o kdb.o ex.o
	$(CC) $(CFLAGS) -o edit $(OBJS)

#main.o: main.c def.h
#	$(CC) $(CFLAGS) -o main.o

#kbd.o: kbd.c def.h common.h
#	$(CC) $(CFLAGS) -o kdb.o
#
$(OBJS): def.h common.h 
main.o : exe.h common.h	
ex.o: exe.h common.h

.PHONY : clean
clean:
	rm edit $(OBJS)
