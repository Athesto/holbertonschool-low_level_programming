flags=-g -Wall -Wextra -Werror -pedantic

%:
	gcc $(flags) $(files)
	betty $(files)
%: files=$*-*.c ./test/$*-*.c
2: files=$*-*.c ./test/$*-*.c 0-*.c
