#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add no
 * @head: reference to head
 * @n: input val
 * Return: pointer to the final node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node; /* pointer to new node */

	/* check if head is a valid input */
	if (head)
	{
		/* check if memory was assigned */
		n_node = malloc(sizeof(*n_node));
			if (n_node)
			{
				n_node->n = n;
				n_node->prev = NULL;
				n_node->next = NULL;
				/* check if its a empty list */
				if (*head == NULL)
				{
					*head = n_node;
					return (n_node);
				}
				else /* list not-empty */
				{
					(*head)->prev = n_node;
					n_node->next = *head;
					*head = n_node;
					return (n_node);
				}
			}
		return (NULL); /* ERROR */
	}
	return (NULL); /* ERROR */
}
