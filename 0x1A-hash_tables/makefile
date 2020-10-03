flags=-g -Wall -Wextra -Werror -pedantic

%:
	gcc $(flags) $(files)
	betty $(files)
%: files=$*-*.c ./test/$*-*.c
2: files=$*-*.c ./test/$*-*.c 1-djb2.c
3: files=$*-*.c ./test/$*-*.c 0-hash_table_create.c 1-djb2.c 2-key_index.c
4: files=$*-*.c ./test/$*-*.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c
5: files=$*-*.c ./test/$*-*.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c
6: files=$*-*.c ./test/$*-*.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c
100: files=$*-*.c ./test/$*-*.c 1-djb2.c 2-key_index.c
