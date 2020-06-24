#include "holberton.h"
/**
 * puts2 - put string
 * @str: input
 */
void puts2(char *str)
{
	while (*str)
	{
		if (*str % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
