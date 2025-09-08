CC = gcc
CFLAGS = -Wall -g
OBJS = main.o foo.o bar.o

all: app

app: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	@echo "Compiling $< ..."
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o app

