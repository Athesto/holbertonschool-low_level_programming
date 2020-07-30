flags=-g -Wall -Wextra -Werror -pedantic
headers=holberton.h

%:
	betty $(headers) $(files)
	gcc $(flags) $(files)
	./a.out

clear:
	clear;

valgrind:
	valgrind ./a.out

%: files=$*-*.c
