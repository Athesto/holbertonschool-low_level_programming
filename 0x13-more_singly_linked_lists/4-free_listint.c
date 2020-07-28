#include "lists.h"

/**
 * free_listint - free list of head
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
