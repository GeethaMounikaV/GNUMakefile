CC = gcc
CFLAGS = -Wall -O2     # Try removing -g to see behavior

SOURCES = main.c mathutils.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = myprog

# Check if -g flag exists using findstring
ifeq ($(findstring -g,$(CFLAGS)),-g)
  $(info Debugging enabled → defining DEBUG macro)
  CFLAGS += -DDEBUG
else
  $(info Debugging disabled)
endif

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

