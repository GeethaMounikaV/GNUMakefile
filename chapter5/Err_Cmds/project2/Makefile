CC := gcc
CFLAGS := -Wall -O2

OBJS := main.o foo.o bar.o

all: app

# Normal target that fails on broken.c
broken.o: broken.c
	@echo "Compiling broken.c (this will FAIL)..."
	$(CC) $(CFLAGS) -c broken.c -o broken.o

app: $(OBJS)
	@echo "Linking app..."
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# --- Error handling examples ---

# 1. Ignore errors for this command (note the leading '-')
ignore-error:
	-@echo "Trying to remove missing file..."
	-rm not_a_file.txt

# 2. Keep going after errors (`make -k`)
# Try compiling broken.o + app in one command:
#   make -k app broken.o

# 3. Delete target file on error
.DELETE_ON_ERROR:
bad.o: bad.c
	@echo "Creating bad.c with intentional error..."
	echo "int main() { return 0" > bad.c   # missing closing brace
	$(CC) -c bad.c -o bad.o

clean:
	rm -f *.o app bad.c bad.o

