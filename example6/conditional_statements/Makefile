CC = gcc
CFLAGS = -Wall  

# Conditional flags based on DEBUG variable
ifeq ($(DEBUG), 1)
	CFLAGS += -g -DDEBUG_MODE
else
	CFLAGS += -O2
endif

# Optional: Check if a variable is defined (e.g. VERBOSE)
ifdef VERBOSE
	CFLAGS += -DVERBOSE_MODE
endif

# Files
TARGET = app
OBJS = a.o b.o

# Rules
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f *.o $(TARGET)


