#include "lists.h"

/**
 * pop_listint - delete head node of list
 * @head: head of lis
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	/* check if head exist and check if it's pointing to something*/
	if (head && *head)
	{
		tmp = *head;	/* set a backup */
		n = tmp->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}
