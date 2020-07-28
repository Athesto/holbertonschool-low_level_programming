#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int elements = 0;

	while (ptr)
	{
		printf("%d\n", (*ptr).n);
		elements++;
		ptr = (*ptr).next;
	}
	return (elements);
}
