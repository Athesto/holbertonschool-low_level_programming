flags=-g -Wall -Wextra -Werror -pedantic
headers=lists.h

%:
	betty $(headers) $(files)
	gcc $(flags) $(files)
	./a.out

clear:
	clear;

valgrind:
	valgrind ./a.out

0: files=0-main.c 0-print_listint.c
1: files=1-main.c 1-listint_len.c
2: files=2-main.c 2-add_nodeint.c 0-print_listint.c
3: files=3-main.c 3-add_nodeint_end.c 0-print_listint.c
4: files=4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c
5: files=5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c
6: files=6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c
7: files=7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c
8: files=8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c
9: files=9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c
10: files=10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c
100: files=100-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 100-reverse_listint.c
101: files=101-main.c 2-add_nodeint.c 101-print_listint_safe.c
102: files=102-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c
103: files=103-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c 103-find_loop.c
