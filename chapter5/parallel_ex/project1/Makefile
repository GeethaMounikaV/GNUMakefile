CC := gcc
CFLAGS := -Wall -O2
OBJS := main.o foo.o bar.o util.o

# Default target
all: app

app: $(OBJS)
	@echo "Linking $@"
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Pattern rule; extra dep on util.h is harmless for files that don't include it
%.o: %.c util.h
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -c $< -o $@

# Reader program (used to demo stdin limitation under -j)
reader: reader.o
	$(CC) $(CFLAGS) -o $@ $^

run1: reader
	@echo "run1 starting (reads stdin)"
	./reader

run2: reader
	@echo "run2 starting (reads stdin)"
	./reader

# Run two stdin readers in parallel; one will likely fail under -j
run-parallel-stdin: run1 run2
	@echo "Both runs requested"

# Target that fails to compile (to demo abort vs --keep-going)
broken.o: broken.c
	@echo "Compiling broken.c (this will fail)"
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o app reader

.PHONY: all clean run1 run2 run-parallel-stdin

