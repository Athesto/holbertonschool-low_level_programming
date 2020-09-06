#include "lists.h"
/**
 * dlistint_len - get len of list
 * @h: list's head
 * Return: list length
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *runner; /* list runner */
	int l_counter = 0; /* lenght counter */

	for (runner = h; runner; runner = runner->next)
		l_counter++;

	return (l_counter);
}
