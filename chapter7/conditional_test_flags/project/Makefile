CC = gcc
CFLAGS = -Wall

all: myprog

myprog: main.c
ifneq (,$(findstring t,$(MAKEFLAGS)))
	@echo "make -t detected, touch and compile with recursive command"
	+touch myprog
	+$(CC) $(CFLAGS) main.c -o myprog
else
	@echo "Normal make build"
	$(CC) $(CFLAGS) main.c -o myprog
endif

clean:
	rm -f myprog

