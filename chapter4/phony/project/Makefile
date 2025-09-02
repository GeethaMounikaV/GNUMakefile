CC := gcc
CFLAGS := -Wall -O2

# Object files for programs
OBJS1 := prog1.o utils.o
OBJS2 := prog2.o utils.o

# Default target builds everything
.PHONY: all
all: prog1 prog2

# Build prog1
prog1: $(OBJS1)
	$(CC) $(CFLAGS) -o $@ $(OBJS1)

# Build prog2
prog2: $(OBJS2)
	$(CC) $(CFLAGS) -o $@ $(OBJS2)

# Phony clean targets
.PHONY: clean cleanobj cleandiff cleanall

cleanobj:
	rm -f *.o

cleandiff:
	rm -f *.diff

clean:
	rm -f prog1 prog2

cleanall: cleanobj cleandiff clean
	@echo "Everything cleaned up!"

