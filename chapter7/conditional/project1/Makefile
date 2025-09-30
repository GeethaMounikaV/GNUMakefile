# ===========================
# Configurable Variables
# ===========================
USE_FOO ?= 1       # Toggle 1 or 0
MODE ?= DEBUG      # DEBUG, RELEASE, or empty
INCLUDE_FOO ?= yes
BAR_DEFINED ?=      # Empty or non-empty value

CC = gcc
CFLAGS = -Wall

# ===========================
# 1️⃣ Simple ifeq
# ===========================
ifeq ($(USE_FOO),1)
SRC1 = foo.c
else
SRC1 = bar.c
endif

# ===========================
# 2️⃣ Complex ifeq / else ifeq
# ===========================
ifeq ($(MODE),DEBUG)
SRC2 = foo.c
else ifeq ($(MODE),RELEASE)
SRC2 = bar.c
else
SRC2 =
endif

# ===========================
# 3️⃣ ifneq
# ===========================
ifneq ($(USE_FOO),0)
SRC3 = foo.c
else
SRC3 = bar.c
endif

# ===========================
# 4️⃣ ifdef
# ===========================
ifdef INCLUDE_FOO
SRC4 = foo.c
CFLAGS += -DINCLUDE_FOO
else
SRC4 = bar.c
endif

# ===========================
# 5️⃣ ifndef
# ===========================
ifndef BAR_DEFINED
SRC5 = bar.c
else
SRC5 = foo.c
endif

# ===========================
# 6️⃣ ifeq with strip
# ===========================
FOO_EMPTY =    
ifeq ($(strip $(FOO_EMPTY)),)
SRC6 = bar.c
else
SRC6 = foo.c
endif

# ===========================
# Combine all SRC files uniquely
# ===========================
# Combine all SRC files uniquely
SRC = $(sort main.c $(SRC1) $(SRC2) $(SRC3) $(SRC4) $(SRC5) $(SRC6))

# ===========================
# Build target
# ===========================
all:
	@echo "Building with the following sources: $(SRC)"
	$(CC) $(CFLAGS) $(SRC) -o myprog

clean:
	rm -f myprog

