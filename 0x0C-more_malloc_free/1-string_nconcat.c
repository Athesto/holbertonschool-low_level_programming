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
	unsigned int i, l, s1len = 0, s2len = 0;

	if (!s1)
		s1 = ""; 						/* replace to empty a NULL S1*/
	else
		while (s1[s1len])
			s1len++;					/* calc len of s1 */
	if (!s2)
		s2 = "";
	else
		while (s2[s2len])
			s2len++;

	if (n >= s2len)
		p = malloc(s1len + s2len + 1); 	/*+1 por '\0'*/
	else
		p = malloc(s1len + n + 1);
	if (!p)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	l = 0;
	while (l < n &&  s2[l]) 			/*fill until the less*/
		p[i++] = s2[l++];
	p[i] = '\0';
	return (p);
}
