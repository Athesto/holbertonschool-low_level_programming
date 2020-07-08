#include <stdlib.h>
/**
 * str_concat - main
 * @s1: input1
 * @s2: input2
 * Return: output
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int len1 = 0, len2 = 0;
	int i;

	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2))
		len2++;
	p = malloc(sizeof(*p) * len1 + len2 + 1);
	if (!p)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i <= len2; i++)
		p[len1 + i] = s2[i];
	return (p);
}
