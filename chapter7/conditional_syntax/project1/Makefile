# ===========================
# Configuration / Variables
# ===========================

# MODE controls which source files to compile
# DEBUG  -> compile main.c + foo.c
# RELEASE -> compile main.c + bar.c
MODE = RELEASE

# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall      # enable all warnings

# ===========================
# Conditional compilation
# ===========================

# If MODE is DEBUG, compile main.c and foo.c
# Also define DEBUG_MODE macro for use in main.c
ifeq ($(MODE),DEBUG)
SRC = main.c foo.c
CFLAGS += -DDEBUG_MODE      # macro passed to compiler
# If MODE is RELEASE, compile main.c and bar.c
else ifeq ($(MODE),RELEASE)
SRC = main.c bar.c
# If MODE is neither DEBUG nor RELEASE, compile only main.c
else
SRC = main.c
endif

# ===========================
# Targets
# ===========================

# Default target 'all' compiles the program
all:
	$(CC) $(CFLAGS) $(SRC) -o myprog

# Clean target to remove the compiled executable
clean:
	rm -f myprog

