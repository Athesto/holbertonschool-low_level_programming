#include "holberton.h"
/**
 * _puts - put string
 * @str: input string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
