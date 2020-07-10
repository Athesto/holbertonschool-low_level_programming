#include "holberton.h"
/**
 * string_nconcat- function that concatenates two strings.
 * @s1: destiny
 * @s2: source
 * @n: number of bytes
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, l;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	if (n >= strlen(s2))
		p = malloc(strlen(s1) + strlen(s2) + 1); /*+1 por '\0'*/
	else
		p = malloc(strlen(s1) + n + 1);
	if (!p)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	l = 0;
	while (l < n &&  s2[l])
		p[i++] = s2[l++];
	p[i] = '\0';
	return (p);
}
