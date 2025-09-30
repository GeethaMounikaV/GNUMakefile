# Toggle this variable with values 0 or 1
# 1 --> foo.c
# 0 --> bar.c
USE_FOO = 0

CC = gcc
CFLAGS = -Wall

# Conditional compilation
ifeq ($(USE_FOO),1)
SRC = main.c foo.c
CFLAGS += -DINCLUDE_FOO
$(info Compiling with foo.c)
else
SRC = main.c bar.c
$(info Compiling with bar.c)
endif

all:
	$(CC) $(CFLAGS) $(SRC) -o myprog

clean:
	rm -f myprog

