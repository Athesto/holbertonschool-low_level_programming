#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: reference to list
 * @idx: index of the new node
 * @n: value in list
 * Return: node added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node; /* new node */
	dlistint_t *runner; /* runner in the list */
	unsigned int r_idx = 0; /* runner index */

	/* check if it's a valid list*/
	if (h)
	{
		/* check if node has memory */
		node = malloc(sizeof(*node));
		if (node)
		{
			node->prev = NULL;
			node->next = NULL;
			node->n = n;
			for (runner = *h; r_idx < idx; r_idx++)
			{
				runner = runner->next;
				/* Check if length of list < idx*/
				if (!runner)
				{
					free(node);
					return (NULL); /* ERROR */
				}
			}
			if (runner == NULL)
			{
				head = node;
				return (node);
			}
			/* runner->next */
			node->next = runner->next;
			node->prev = runner;
			runner->next = node;
			/* check if runner is not the last node */
			if (node->next)
			{
				runner = node->next;
				runner->prev = node;
			}
			return (node);
		}
		return (NULL); /* ERROR */
	}
	return (NULL); /* ERROR */
}
