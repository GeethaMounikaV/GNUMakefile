CC = gcc
CFLAGS = -Wall -o0 -g

OBJS_B = ex.o

target_b: $(OBJS_B)
	$(CC) $(CFLAGS) -o target_b $(OBJS_B)

ex.o: ex.c ex.h gm.h

.PHONY: clean
clean_b:
	rm -rf $(OBJS_B)


