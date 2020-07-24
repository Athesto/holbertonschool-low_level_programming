#include "lists.h"
#include <string.h>

/**
 * add_node - Add node to the list
 * @head: head of list
 * @str: new str
 * Return: 0
 */
list_t *add_node(list_t *head[], const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		if (new->str)
		{
			new->len = strlen(new->str);
			new->next = *head;
			*head = new;
			return (new);
		}
		free(new);
		return (NULL);
	}
	return (NULL);
}
