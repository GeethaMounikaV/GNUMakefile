# Only build main.o and utils.o, not extra.o
OBJS = main.o utils.o

program: $(OBJS)
	gcc -o program $(OBJS)

# Apply rule ONLY to listed objects
$(OBJS): %.o: %.c
	gcc -Wall -g -c $< -o $@



clean:
	rm -rf program $(OBJS)
