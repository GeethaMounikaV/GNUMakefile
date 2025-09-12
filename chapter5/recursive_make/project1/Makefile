CC := gcc
CFLAGS := -Wall
TARGET := app

CFLAGS += -DMODE=\"$(MODE)\"

all:
	$(CC) $(CFLAGS) -o $(TARGET) main.c -DMODE=\"$(MODE)\"

clean:
	rm -f $(TARGET)

