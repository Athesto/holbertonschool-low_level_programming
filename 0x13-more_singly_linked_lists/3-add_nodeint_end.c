#include "lists.h"

/**
 * add_nodeint_end - add node to end
 * @head: head of list
 * @n: value storaged
 * Return: header of list or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tail;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		if (*head)
		{
			tail = *head;
			while (tail->next)
				tail = tail->next;
			tail->next = new;
			return (*head);
		}
		*head = new;
		return (*head);
	}
	return (NULL);
}
