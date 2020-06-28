#include "holberton.h"
/**
 * _memset - main
 * @s: output pointer
 * @b: filling char
 * @n: number of bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ps = s;

	while (n--)
		*ps++ = b;
	return (s);
}
