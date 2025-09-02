objects = main.o add.o

bigoutput: $(objects)
	gcc -o bigoutput $(objects)

main.o: main.c add.h
	gcc -Wall -g -c main.c -o main.o

add.o: add.c add.h
	gcc -Wall -g -c add.c -o add.o

# Extra rule: all object files depend on config.h
$(objects): config.h

.PHONY: clean

clean:
	rm -rf bigoutput $(objects)
