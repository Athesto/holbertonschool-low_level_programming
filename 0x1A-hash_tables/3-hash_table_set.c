#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - ?
 * @ht: ?
 * @key: ?
 * @value: ?
 * Return: ?
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;

	/* check a valid table and a valid key */
	if (ht == NULL  || ht->array == NULL || key == NULL || value == NULL)
		return (0);

	node = malloc(sizeof(*node));
	if (node) /* is a valid node */
	{
		node->key = strdup(key);
		if (node->key) /* is a valid key */
		{
			node->value = strdup(value);
			if (node->value) /* is a valid value */
			{
				return (hash_table_set_no_check(ht, node));
			}
			free(node->key);
			free(node);
			return (0);
		}
		free(node);
		return (0);
	}
	return (0);
}

/**
 * hash_table_set_no_check - set node to table
 * @ht: hash table
 * @node: Node to insert
 * Return: 1(OK) 0(Otherwise)
 */
int hash_table_set_no_check(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int h_idx; /* hash table index */
	hash_node_t *node_checker; /* head in array */

	h_idx = key_index((const unsigned char *) node->key, ht->size);

	if (ht->array[h_idx]) /* is a not  empty list */
	{
		node_checker = ht->array[h_idx];
		while (node_checker)
		{
			if (strcmp(node_checker->key, node->key) == 0)
			{
				strcpy(node_checker->value, node->value);
				return (1);
			}
			node_checker = node_checker->next;
		}
	}
	node->next = ht->array[h_idx];
	ht->array[h_idx] = node;
	return (1);
}
