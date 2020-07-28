#include "lists.h"

/**
 * get_nodeint_at_index - get node in index `index`
 * @head: list
 * @index: index of node
 * Return: Pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head)
	{
		while (index)
		{
			head = head->next;
			index--;
		}
		return (head);
	}
	return (NULL);
}
