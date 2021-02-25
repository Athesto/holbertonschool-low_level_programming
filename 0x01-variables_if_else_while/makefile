CC=gcc
SRC=$@-*.c
CFLAGS=-g -Wall -Wextra -Werror -pedantic

%:
	rm -rf a.out
	$(CC) $(CFLAGS) $(SRC)
	./a.out
	
