a_dirs := a.c
1_dirs := b.c

# Control variables
use_a = no
use_dirs = yes

ifeq "$(use_a)" "yes"
a1 := a
else
a1 := 1
endif

ifeq "$(use_dirs)" "yes"
df := dirs
else
df := files
endif

# dirs = $($(a1)_$(df)) => $(a_dirs) = a.c
dirs := $($(a1)_$(df))

all:
	@echo "dirs = $(dirs)"
	$(CC) -c $(dirs)

