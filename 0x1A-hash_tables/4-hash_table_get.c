#include "hash_tables.h"
#include <stdlib.h> /* NULL */
#include <string.h> /* strcmp */
/**
 * hash_table_get - ?
 * @ht: ?
 * @key: ?
 * Return: ?
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int h_idx; /* hash index */
	hash_node_t *checker;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (NULL);

	h_idx = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[h_idx];

	while (checker)
	{
		if (strcmp(checker->key, key) == 0)
			return (checker->value);
		checker = checker->next;
	}
	return (NULL);
}
