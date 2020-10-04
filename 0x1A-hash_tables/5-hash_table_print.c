#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - ?
 * @ht: ?
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **runner, *list_runner;
	unsigned long int h_idx;
	int first_printed = 0;

	if (ht)
	{
		printf("{");
		runner = ht->array;
		for (h_idx = 0; h_idx <= ht->size; h_idx++)
		{
			if (runner[h_idx])
			{
				list_runner = runner[h_idx];
				while (list_runner)
				{
					if (first_printed)
						printf(", ");
					printf("'%s': '%s'",
							list_runner->key,
							list_runner->value
							);
					first_printed = 1;
					list_runner = list_runner->next;
				}
			}
		}
		printf("}\n");
	}
}
