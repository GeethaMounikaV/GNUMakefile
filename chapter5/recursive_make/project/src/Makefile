CC     = gcc
CFLAGS = -I../include -Wall -g
AR     = ar
ARFLAGS= rcs

all: libmathutils.a

libmathutils.a: mathutils.o
	$(AR) $(ARFLAGS) $@ $^

mathutils.o: mathutils.c
	$(CC) $(CFLAGS) -c mathutils.c -o mathutils.o

clean:
	$(RM) *.o libmathutils.a

