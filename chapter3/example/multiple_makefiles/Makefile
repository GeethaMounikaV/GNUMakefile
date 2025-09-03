include a.mk
include b.mk

.PHONY: target clean

target: target_a target_b


#Can use this if we need to compile 2 files simultaneously with only 1 main
#edit: main.o ex.o
#	$(CC) $(CFLGAS) -o edit main.o ex.o


clean:
	$(MAKE) clean_a
	$(MAKE) clean_b

