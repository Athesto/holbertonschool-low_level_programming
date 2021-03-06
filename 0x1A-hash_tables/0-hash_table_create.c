#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - create a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	hash_table =  malloc(sizeof(*hash_table));
	if (hash_table)
	{
		hash_table->array = malloc(size * sizeof(*(hash_table->array)));
		if (hash_table->array)
		{
			hash_table->size = size;
			return (hash_table);
		}
		free(hash_table);
		return (NULL);
	}
	return (NULL);
}
