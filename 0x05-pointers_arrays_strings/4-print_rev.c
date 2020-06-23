#include "holberton.h"
/**
 * print_rev - printrev
 * @s: input string
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	while (len-- > 0)
	{
		_putchar(*--s);
	}

	_putchar('\n');
}
