#include "lists.h"

/**
 * add_nodeint - add node at the beginnig of head
 * @head: head;
 * @n: n of element
 * Return: new element;
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	return (NULL);
}
