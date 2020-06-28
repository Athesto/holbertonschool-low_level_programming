#include <stdio.h>
/**
 * _strchr - find char
 * @s: source
 * @c: char to find
 * Return: pointer to occuence
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	ptr = NULL;
	return (ptr);
}