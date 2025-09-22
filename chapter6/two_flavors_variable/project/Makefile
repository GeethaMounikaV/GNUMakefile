# ------------------------------
# Example Makefile showing =, :=, ?=
# ------------------------------

# (1) Recursive expansion (=)
SRC = main.c utils.c
OBJS = $(SRC:.c=.o)

# Change SRC later → OBJS updates automatically
SRC = main.c utils.c    # extra.c doesn’t exist, for demo only

# (2) Simply expanded (:=)
OBJS2 := $(SRC:.c=.o)   # locked immediately

# (3) Conditional (?=)
CC ?= gcc
CFLAGS ?= -Wall

TARGET = app

all: info $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

main.o: main.c utils.h
utils.o: utils.c utils.h

info:
	@echo "SRC   = $(SRC)"
	@echo "OBJS  = $(OBJS)   (recursive)"
	@echo "OBJS2 = $(OBJS2)  (simply expanded)"
	@echo "CC    = $(CC)"
	@echo "CFLAGS= $(CFLAGS)"

clean:
	rm -f $(OBJS) $(TARGET)

