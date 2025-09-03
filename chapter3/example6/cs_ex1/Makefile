TARGET = app
CC = gcc
CFLAGS = -Wall
SRC = main.c

$(TARGET): $(SRC)
	@echo "Building..."
	@if [ -f "$(SRC)" ]; then \
		echo "Source file exists. Compiling..."; \
		$(CC) $(CFLAGS) -o $(TARGET) $(SRC); \
	else \
		echo "Error: Source file not found!"; \
		exit 1; \
	fi

.PHONY: clean
clean:
	rm -f $(TARGET)

