flags=-g -Wall -Wextra -Werror -pedantic

%:
	gcc $(flags) $(files)
	betty $(files)
%: files=$*-*.c ./test/$*-*.c
2: files=$*-*.c ./test/$*-*.c 0-*.c
3: files=$*-*.c ./test/$*-*.c 0-*.c
4: files=./test/4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c
5: files=./test/5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c
6: files=./test/6-main.c 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c
7: files=./test/7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c
8: files=./test/8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c
