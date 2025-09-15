# Sub-make example

# Default target
all:
	@echo "SUBDIR: MAKEFLAGS = '$(MAKEFLAGS)'"
	@echo "SUBDIR: MFLAGS    = '$(MFLAGS)'"
	@echo "SUBDIR: BUILD_ENV = '$(BUILD_ENV)'"
	$(CC) -c sub.c -o sub.o

clean:
	rm -f sub.o

