# Query the default goal.
ifeq ($(.DEFAULT_GOAL),)
$(warning no default goal is set)
endif

CC = gcc
CFLAGS = -Wall -o0 -g

OBJS = a.o

target: $(OBJS)
	$(CC) $(CFLAGS) -o target $(OBJS)

a.o: a.c a.h

.PHONY: target
target: ; @echo $@
$(warning default goal is $(.DEFAULT_GOAL))

OBJS_B = b.o

build: $(OBJS_B)
	$(CC) $(CFLAGS) -o build $(OBJS_B)

b.o: b.c b.h


# Reset the default goal.
#.DEFAULT_GOAL :=
#.PHONY: build
#build: ; @echo $@
#$(warning default goal is $(.DEFAULT_GOAL))


# Set our own.
.DEFAULT_GOAL := target


.PHONY: clean_a clean_b
clean: clean_a clean_b

clean_a: 
	rm -rf target $(OBJS)
clean_b: 	
	rm -rf build $(OBJS_B)

