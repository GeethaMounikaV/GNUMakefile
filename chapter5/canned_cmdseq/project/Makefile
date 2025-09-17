CC = gcc
CFLAGS = -Wall -g

# Define a canned command sequence for compilation
define COMPILE_TEMPLATE
	@echo "Compiling $< -> $@"
	$(CC) $(CFLAGS) -c $< -o $@
endef

# Object files
OBJS = main.o helper.o

# Target to build final program
program: $(OBJS)
	@echo "Linking $(OBJS) -> program"
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Rules using canned sequence
main.o: main.c helper.h
	$(COMPILE_TEMPLATE)

helper.o: helper.c helper.h
	$(COMPILE_TEMPLATE)

# Clean rule
clean:
	rm -f *.o program

