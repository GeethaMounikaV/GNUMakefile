CC = cc
CFLAGS = -Wall -Wextra

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

program: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) program

