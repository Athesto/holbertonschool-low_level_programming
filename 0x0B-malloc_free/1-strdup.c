#include <stdlib.h>
/**
 * _strdup - create a new str
 * @str: source
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *p;

	if (!str)
		return (str);
	while (*(str + len))
		len++;
	p = malloc(sizeof(char) * len);
	if (!p)
		return (NULL);
	for (i = 0; i <= len; i++)
		p[i] = str[i];
	return (p);
}
