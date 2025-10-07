CC = gcc
CFLAGS = -Wall -O2

# All files in project
SOURCES = main.c mathutils.c mathutils.h startup.s

# Remove headers (.h) → leave only compilable sources
BUILD_SRCS = $(filter-out %.h,$(SOURCES))

# Convert to object files
OBJECTS = $(BUILD_SRCS:.c=.o)
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
	@echo "SOURCES   = $(SOURCES)"
	@echo "BUILD_SRCS= $(BUILD_SRCS)"
	@echo "OBJECTS   = $(OBJECTS)"

clean:
	rm -f $(OBJECTS) $(TARGET)

