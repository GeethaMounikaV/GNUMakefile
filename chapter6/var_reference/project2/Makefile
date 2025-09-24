x = y
y = z
z = main.c

a := $($($(x)))   # resolves to $(z) => main.c

all:
	@echo "a = $(a)"
	$(CC) -c $(a)

