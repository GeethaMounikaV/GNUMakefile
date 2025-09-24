x = y
y = z
z = main.c

# a becomes $(z) => main.c
a := $($($(x)))

app := main.o

all:
	@echo "a = $(a)"
	@echo "Compiling: $(CC) -c $(a)"
	$(CC) -c $(a) -o $(app)



clean:
	rm -rf main.o app
