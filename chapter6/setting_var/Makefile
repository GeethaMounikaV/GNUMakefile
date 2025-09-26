# Example of recursive variable (=)
# This expands when used, not when defined
objects = main.o utils.o

# Example of simply expanded variable (:=)
# This expands immediately
CC := gcc

# Example of conditional variable (?=)
# Will only set CFLAGS if not already set by environment or command line
CFLAGS ?= -Wall -g

# Final executable name
TARGET := myprog

# Build rule
$(TARGET): $(objects)
	$(CC) $(CFLAGS) -o $@ $(objects)

# Compile rule (automatic variables)
# $< = first prerequisite (source file)
# $@ = target (object file)
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(objects) $(TARGET)

