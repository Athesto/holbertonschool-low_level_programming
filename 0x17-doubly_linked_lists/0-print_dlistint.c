#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: list head
 * Return: element's number
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *runner; /* variable that traveses the list */
	unsigned int n_counter = 0; /* node counter */

	if (h)
	{
		for (runner = h; runner; runner = runner->next)
		{
			printf("%d\n", runner->n);
			n_counter++;
		}
		return (n_counter);
	}
	return (0);
}
