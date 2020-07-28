#include "lists.h"

/**
 * free_listint2 - free list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
	}
}
