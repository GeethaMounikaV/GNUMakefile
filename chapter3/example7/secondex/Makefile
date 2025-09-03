.SECONDEXPANSION:

CC = gcc
CFLAGS = -Wall -g

# Intentionally adding duplicate in OBJ to show how $$+ behaves
OBJ = main.o utils.o utils.o

myapp: $$(OBJ)
	@echo "With \$\$^ (no duplicates): $$^"
	@echo "With \$\$+ (with duplicates): $$+"
	# Only use unique files for linking
	$(CC) $(CFLAGS) -o $@ main.o utils.o

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o myapp

