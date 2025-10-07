CC = gcc
CFLAGS = -Wall -O2

# All project files
SOURCES = main.c mathutils.c mathutils.h startup.s

# Use filter to pick only C and Assembly sources for compilation
C_SRCS = $(filter %.c,$(SOURCES))
ASM_SRCS = $(filter %.s,$(SOURCES))

# Object files (replace .c/.s with .o)
OBJECTS = $(C_SRCS:.c=.o) $(ASM_SRCS:.s=.o)

TARGET = myprog

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.s
	$(CC) -c $< -o $@

show-vars:
	@echo "SOURCES = $(SOURCES)"
	@echo "C_SRCS  = $(C_SRCS)"
	@echo "ASM_SRCS= $(ASM_SRCS)"
	@echo "OBJECTS = $(OBJECTS)"

clean:
	rm -f $(OBJECTS) $(TARGET)

