CC = gcc

CFLAGS = -Wall -Wextra -std=c11

SRC = src/main.c \
      src/client.c \
      src/server.c \
      src/interface.c

TARGET = my_program

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
