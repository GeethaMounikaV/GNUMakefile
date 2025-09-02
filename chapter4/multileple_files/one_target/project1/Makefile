objects = main.o add.o

# Rule 1 (prerequisite for bigoutput)
bigoutput: main.o

# Rule 2 (another prerequisite for bigoutput)
bigoutput: add.o 

# Commands for bigoutput (only allowed once)
bigoutput: 
	@gcc -o bigoutput $(objects)

# Normal compilation rules
main.o: main.c add.h
	gcc -Wall -g -c main.c -o main.o

add.o: add.c add.h
	gcc -Wall -g -c add.c -o add.o


.PHONY: clean

clean:
	rm -rf bigoutput $(objects)
