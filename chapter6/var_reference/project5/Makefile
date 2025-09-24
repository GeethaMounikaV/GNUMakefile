a_objects := foo.o bar.o
1_objects := test1.o test2.o

a1 := a

sources := $($(a1)_objects:.o=.c)

all:
	@echo "sources = $(sources)"
	$(CC) -c $(sources)

