CC = gcc
CFLAGS = -Wall

# Directories for objects
DEBUG_DIR = build/debug
RELEASE_DIR = build/release

# Final executables
DEBUG_APP = debug_app
RELEASE_APP = release_app

# Source files
SRCS = main.c
DEBUG_SRCS = debug.c
RELEASE_SRCS = release.c

# Object files
DEBUG_OBJS = $(addprefix $(DEBUG_DIR)/, $(SRCS:.c=.o) $(DEBUG_SRCS:.c=.o))
RELEASE_OBJS = $(addprefix $(RELEASE_DIR)/, $(SRCS:.c=.o) $(RELEASE_SRCS:.c=.o))

all: $(DEBUG_APP) $(RELEASE_APP)

# ---------------- DEBUG ----------------
$(DEBUG_APP): CFLAGS = -g -O0 -Wall
$(DEBUG_APP): $(DEBUG_OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# ---------------- RELEASE ----------------
$(RELEASE_APP): CFLAGS = -O2 -Wall
$(RELEASE_APP): $(RELEASE_OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# ---------------- BUILD RULES ----------------
# Ensure directories exist
$(DEBUG_DIR) $(RELEASE_DIR):
	mkdir -p $@

# Compile debug objects
$(DEBUG_DIR)/%.o: %.c | $(DEBUG_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Compile release objects
$(RELEASE_DIR)/%.o: %.c | $(RELEASE_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# ---------------- CLEAN ----------------
clean:
	rm -rf build $(DEBUG_APP) $(RELEASE_APP)

