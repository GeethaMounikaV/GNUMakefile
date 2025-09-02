CC = gcc
CFLAGS = -Wall -g

# Multiple targets rule: same prerequisite (headers) for multiple object files
add.o sub.o: add.h sub.h

# Rule with multiple targets using $@
# Both bigoutput and littleoutput generated from text.g
bigoutput littleoutput: text.g
	echo "Generating $@ from text.g"
	cat text.g | sed "s/PLACEHOLDER/$@/" > $@

# Compile object files normally
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

program: main.o add.o sub.o
	$(CC) $(CFLAGS) -o program main.o add.o sub.o

clean:
	rm -f *.o program bigoutput littleoutput

