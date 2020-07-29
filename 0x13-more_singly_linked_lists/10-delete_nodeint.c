#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index of a list in head
 * @head: head of list
 * @index: delete node
 * Return: 1 = SUCCESS, -1 FAIL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter;
	listint_t *backup, *ptr;

	if (head && *head)
	{
		if (index == 0)
		{
			backup = *head;
			*head = (*head)->next;
			free(backup);
			return (1);
		}
		ptr = *head;
		for (counter = 1; ptr; counter++)
		{
			if (counter == (index))
			{
				backup = ptr;
				ptr = ptr->next;
				backup->next = ptr->next;
				free(ptr);
				return (1);
			}
			ptr = ptr->next;
		}
		return (-1);
	}
	return (-1);
}
