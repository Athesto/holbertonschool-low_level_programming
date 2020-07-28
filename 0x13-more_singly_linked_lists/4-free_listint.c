#include "lists.h"

/**
 * free_listint - free list of head
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head->next)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
