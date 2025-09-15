CC = gcc
CFLAGS = -Wall
OBJS = main.o lib.o subdir/sub.o

all: app

# Show MAKEFLAGS behavior
show:
	@echo "TOP: MAKEFLAGS = '$(MAKEFLAGS)'"
	@echo "TOP: MFLAGS    = '$(MFLAGS)'"

# Example: recursive make with flags automatically propagated
subdir:
	$(MAKE) -C subdir

# Example: block passing flags (reset MAKEFLAGS)
subdir-noflags:
	$(MAKE) -C subdir MAKEFLAGS=

# Example: block variable propagation
subdir-novars:
	$(MAKE) -C subdir MAKEOVERRIDES=

# Build app with env var override
app: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o app

main.o: main.c common.h
	$(CC) $(CFLAGS) -DBUILD_ENV=\"$(BUILD_ENV)\" -c main.c

lib.o: lib.c common.h
	$(CC) $(CFLAGS) -c lib.c

clean:
	rm -f *.o app subdir/*.o

