#include "lists.h"

/**
 * listint_len - returns the number of elements in list h
 * @h: head of list
 * Return: len as size_t
 */
size_t listint_len(const listint_t *h)
{
	int len;

	for (len = 0; h; len++)
		h = h->next;
	return (len);
}
