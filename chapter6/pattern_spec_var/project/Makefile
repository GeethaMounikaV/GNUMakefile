CC = gcc
CFLAGS = -Wall

# Final executable
APP = myapp

# Sources and objects
SRCS = main.c math.c util.c
OBJS = $(SRCS:.c=.o)

# Pattern-specific variable values
# All .o files get optimization
%.o : CFLAGS = -O2 -Wall
# math.o gets debug flags on top of optimization
math.o : CFLAGS += -g
# util.o gets extra warnings
util.o : CFLAGS += -Wextra

# Build rule
$(APP): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Generic compile rule
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(APP)

