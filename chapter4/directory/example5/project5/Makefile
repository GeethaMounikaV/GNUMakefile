vpath %.c src
vpath %.h include

CC := gcc
CFLAGS := -Wall -Iinclude


OBJS := main.o mathops.o

# target
app: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) -lm


.PHONY : clean
clean:
	rm -rf $@ $(OBJS)




