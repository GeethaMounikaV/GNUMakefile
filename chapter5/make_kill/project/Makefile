CC = gcc
CFLAGS = -Wall -g

OBJS = main.o helper.o

program: $(OBJS)
	$(CC) $(CFLAGS) -o program $(OBJS)

%.o: %.c
	@echo "Compiling $< ..."
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) program

