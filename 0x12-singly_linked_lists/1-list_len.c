#include "lists.h"

/**
 * list_len - list len
 * @h: list
 * Return: number of elements in a linked
 */
size_t list_len(const list_t *h)
{
	if (h)
	{
		if (h->next)
			return (1 + list_len(h->next));
		return (1);
	}
	return (0);
}
