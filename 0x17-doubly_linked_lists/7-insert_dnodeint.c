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

	if (h) /* check if it's a valid list*/
	{
		node = malloc(sizeof(*node)); /* check if node has memory */
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
				*h = node;
				return (node);
			}
			node->next = runner->next; /* runner->next */
			node->prev = runner;
			runner->next = node;
			if (node->next) /* check if runner is not the last node */
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
