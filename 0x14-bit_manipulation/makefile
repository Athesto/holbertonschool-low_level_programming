flags=-g -Wall -Wextra -Werror -pedantic
headers=holberton.h

%:
	betty $(headers) $(files)
	gcc $(flags) $(files)
	./a.out

clear:
	clear;

gdb:
	gdb ./a.out

valgrind:
	valgrind ./a.out

%: files=$*-*.c
1: files=1-*.c _putchar.c
