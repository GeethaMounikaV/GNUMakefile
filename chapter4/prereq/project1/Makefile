CC = gcc
CFLAGS = -Wall -g
sources = main.c foo.c bar.c
objects = $(sources:.c=.o)
deps    = $(sources:.c=.d)

# Final program
program: $(objects)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to generate .d (dependency) files from .c files
%.d: %.c
	@set -e; rm -f $@; \
	$(CC) -M $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

# Include all generated dependency files
-include $(deps)

# Cleanup
clean:
	rm -f $(objects) $(deps) program

