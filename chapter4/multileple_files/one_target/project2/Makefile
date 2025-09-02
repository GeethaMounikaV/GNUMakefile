objects = main.o add.o
extradeps = 

bigoutput: $(objects)
	gcc -o bigoutput $(objects)

main.o: main.c add.h
	gcc -Wall -g -c main.c -o main.o

add.o: add.c add.h
	gcc -Wall -g -c add.c -o add.o

# Extra deps controlled by command line
$(objects): $(extradeps)

.PHONY: clean

clean:
	rm -rf bigoutput $(objects)
