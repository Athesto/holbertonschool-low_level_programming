#include "lists.h"

/**
 * get_nodeint_at_index - get node in index `index`
 * @head: list
 * @index: index of node
 * Return: Pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index)
	{
		head = head->next;
		index--;
	}
	return (head);
}

/*
 * form 2
 * {
 *	for (;head && index; index--)
 *		head = head->next;
 *	return (head);
 * }
 */
