
INCLUDES = -Isrc -Iextra -Isrc   # accidentally repeated
INCLUDES := $(sort $(INCLUDES))  # dedupe + order

CFLAGS = -Wall -O2 $(INCLUDES)


# Sources collected from multiple dirs (duplicates possible!)
SOURCES = src/main.c src/mathutils.c extra/startup.s extra/mathutils.c src/mathutils.c

# Clean them up using sort (dedupe + order)
UNIQ_SOURCES = $(sort $(SOURCES))

# Convert to objects
OBJECTS = $(UNIQ_SOURCES:.c=.o)
OBJECTS := $(OBJECTS:.s=.o)

TARGET = myprog

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.s
	$(CC) -c $< -o $@

show-vars:
	@echo "SOURCES     = $(SOURCES)"
	@echo "UNIQ_SOURCES= $(UNIQ_SOURCES)"
	@echo "OBJECTS     = $(OBJECTS)"

clean:
	rm -f $(OBJECTS) $(TARGET)

