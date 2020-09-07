#include "lists.h"
/**
 * sum_dlistint - Sum of all the data (n) of a dlistint_t linked list
 * @head: list
 * Return: Sum of datas or 0 if it's a empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	/* Check if it a valid list */
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
