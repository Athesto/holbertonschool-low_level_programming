#include "holberton.h"
/**
 * puts2 - put string
 * @str: input
 */
void puts2(char *str)
{
	int len = 0;
	while (*str)
	{
		if (len % 2 == 0)
			_putchar(*str);
		str++;
		len++;
	}
	_putchar('\n');
}
