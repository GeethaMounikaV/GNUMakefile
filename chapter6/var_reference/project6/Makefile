dir = foo

# Expands into foo_sources := foo.c
$(dir)_sources := $(wildcard $(dir).c)

all:
	@echo "foo_sources = $(foo_sources)"
	$(CC) -c $(foo_sources)

