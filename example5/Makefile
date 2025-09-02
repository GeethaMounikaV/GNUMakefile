# Define a variable that will be used later
VAR1 = Hello
VAR2 := Hello

# Use a deferred assignment
DEFERRED = $(VAR1) World

# Use an immediate assignment
IMMEDIATE := $(VAR2) World

# Override VAR1 and VAR2
VAR1 = Hi
VAR2 := Hi

all:
	@echo "DEFERRED  = $(DEFERRED)"
	@echo "IMMEDIATE = $(IMMEDIATE)"

