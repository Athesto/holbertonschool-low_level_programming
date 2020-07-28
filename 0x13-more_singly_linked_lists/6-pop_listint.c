#include "lists.h"

/**
 * pop_listint - delete head node of list
 * @head: head of lis
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n = tmp->n;

	*head = (*head)->next;
	free(tmp);
	return (n);
}
