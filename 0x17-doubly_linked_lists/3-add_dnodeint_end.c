#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add node in list at end
 * @head: reference to head list
 * @n: value
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node; /* pointer to new node */
	dlistint_t *tail; /* pointer to last node */

	/* Check if it a valid list */
	if (head)
	{
		/* Check if memory was assigned */
		node = malloc(sizeof(*node));
		if (node)
		{
			node->n = n;
			node->prev = NULL;
			node->next = NULL;
			/* Check if list is empty */
			if (*head == NULL)
			{
				*head = node;
				return (node);
			}
			else /* list has elements */
			{
				tail = *head;
				while (tail->next)
					tail = tail->next;
				tail->next = node;
				node->prev = tail;
			}
		}
		return (NULL); /* ERROR */
	}
	return (NULL); /* ERROR */
}
