CC=gcc
CFLAGS=-g -Wall -Wextra -Werror -pedantic
SRC=$@-*.c mains/$@-main.c

%:
	@rm -f a.out
	$(CC) $(CFLAGS) $(SRC) $(EXTRA)
	./a.out

100 105 106: override EXTRA += -lm
105: override SRC += listint/*
106: override SRC += skiplist/*
