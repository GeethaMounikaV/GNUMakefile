CC = gcc
CFLAGS = -Wall -g

files = foo.elc main.o add.o sub.o

all: $(files)

# Rule for all .o files
$(filter %.o,$(files)): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule for all .elc files
$(filter %.elc,$(files)): %.elc : %.el
	emacs -f batch-byte-compile $<



.PHONY : clean

clean: 
	rm -rf $(files) 
