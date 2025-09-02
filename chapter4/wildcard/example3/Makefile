CC := gcc
CFLAGS := -Wall -O0 -g


OBJS  = $(patsubst %.c, %.o, $(wildcard *.c))

program: $(OBJS)
	@echo "Linking all the object files"
	$(CC) $(CFLAGS) -o target $(OBJS)

%.o: %.c
	@echo "Compiling $< ..."
	$(CC) $(CFLAGS) -c $< -o $@


.PHONY: clean

clean:
	@echo "cleaning up the object files"
	rm -rf target $(OBJS)




