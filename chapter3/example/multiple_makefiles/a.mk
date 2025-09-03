CC = gcc
CFLAGS = -Wall -o0 -g

OBJS_A = main.o

target_a: $(OBJS_A)
	$(CC) $(CFLAGS) -o target_a $(OBJS_A)

main.o: main.c gm.h

.PHONY: clean_a
clean_a:
	rm -rf $(OBJS_A)

