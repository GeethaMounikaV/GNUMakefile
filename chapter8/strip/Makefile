CC = gcc
CFLAGS = -Wall

# Suppose a variable accidentally has spaces in it
needs_made =   main.o    

# BAD CASE: without strip
ifneq "$(needs_made)" ""
all: $(needs_made)
	@echo "Compiling without strip..."
else
all:
	@echo "Nothing to make! (BAD)"
endif


# Rule to compile .c → .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


# GOOD CASE: use strip
.PHONY: good
good:
ifeq ("$(strip $(needs_made))","")
	@echo "Nothing to make! (GOOD)"
else
	@echo "Files to make: $(strip $(needs_made))"
endif

clean:
	rm -f *.o a.out

