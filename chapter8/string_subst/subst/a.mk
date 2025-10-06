SOURCES := main.c mathutils.c utils.c
# Replace .c with .o using subst
OBJECTS := $(subst .c,.o,$(SOURCES))

all:
	@echo "Sources: $(SOURCES)"
	@echo "Objects: $(OBJECTS)"

