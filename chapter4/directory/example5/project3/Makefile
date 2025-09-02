
#vpath to search for header and c files
vpath %.c src
vpath %.h include

#compiler 
CC = gcc
CFLAGS = -Wall -O2 -Iinclude

OBJS = main.o math.o 

calc: $(OBJS)
	@echo "Linking.."
	$(CC) $(CFLAGS) -o calc $(OBJS)


.PHONY : clean

clean:
	@echo "Cleaning files..."
	rm -rf calc $(OBJS)


