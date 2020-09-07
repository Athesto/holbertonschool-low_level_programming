#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: list
 * @index: index to insert value
 * Return: 1 (Success), -1 (Failed)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *runner; /* runner list */
	dlistint_t *tmp; /* tmp node */
	unsigned int r_idx; /* runner index */
	/* check valid list */
	if (head)
	{
		if (!*head) /* check empty list*/
			return (-1);
		runner = *head;
		for (r_idx = 0; r_idx < index; r_idx++)
		{
			runner = runner->next;
			if (!runner) /* Check if index > length list */
				return (-1); /* ERROR */
		}
		/* alone */
		if (!runner->prev && !runner->next)
		{
			free(runner);
			*head = NULL;
			return (1);
		}
		tmp = runner->prev;
		/* check if remove first node*/
		if (!tmp)
		{
			*head = runner->next;
			(*head)->prev = NULL;
			free(runner);
			return (1);
		}
		tmp->next = runner->next;
		tmp = tmp->next;
		/* check if tmp is not the last idx */
		if (tmp)
			tmp->prev = runner->prev;
		free(runner);
		return (1);
	}
	return (-1); /* ERROR */
}
