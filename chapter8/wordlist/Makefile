# Makefile demonstrating $(wordlist)
CC = gcc
CFLAGS = -Wall -g -MMD -MP

SRC = main.c utils.c helper.c driver.c extra.c

# Pick only a subset of .c files (excluding main.c)
SUBSET := $(wordlist 2,4,$(SRC))

# Always include main.o, then add the subset
OBJS := main.o $(SUBSET:.c=.o)

DEPS := $(OBJS:.o=.d)

app: $(OBJS)
	$(CC) -Wall -g -o $@ $^

-include $(DEPS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o *.d app

