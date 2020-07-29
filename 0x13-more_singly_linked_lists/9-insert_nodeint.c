#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 * @head: head of list
 * @idx: inex of elment
 * @n: value of n of the node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr;
	unsigned int counter;

	if (head)
	{
		new = malloc(sizeof(*new));
		if (new)
		{
			new->n = n; /* initialize variable */

			/* include in head */
			if (idx == 0)
			{
				new->next = *head;
				*head = new;
				return (*head);
			}

			/* include otherwise */
			ptr = *head;
			for (counter = 1; ptr; counter++)
			{
				if (counter == idx)
				{
					new->next = ptr->next;
					ptr->next = new;
					return (*head);
				}
				ptr = ptr->next;
			}
		}
		return (NULL);
	}
	return (NULL);
}
