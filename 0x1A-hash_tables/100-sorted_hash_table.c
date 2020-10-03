#include "hash_tables.h"
#include <stdlib.h>

/**
 * shash_table_create - ?
 * @size: ?
 * Return: ?
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	(void) size;
	return (NULL);
}

/**
 * shash_table_set -?
 * @ht: ?
 * @key: ?
 * @value: ?
 * Return: ?
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	(void) ht;
	(void) key;
	(void) value;
	return (0);
}

/**
 * shash_table_get - ?
 * @ht: ?
 * @key: ?
 * Return: ?
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	(void) ht;
	(void)key;
	return (NULL);
}

/**
 * shash_table_print - ?
 * @ht: ?
 */
void shash_table_print(const shash_table_t *ht)
{
	(void) ht;
}

/**
 * shash_table_print_rev - ?
 * @ht: ?
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	(void) ht;
}

/**
 * shash_table_delete - ?
 * @ht: ?
 */
void shash_table_delete(shash_table_t *ht)
{
	(void) ht;
}
