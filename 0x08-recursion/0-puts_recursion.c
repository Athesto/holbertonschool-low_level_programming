#include "holberton.h"
/**
 * _puts_recursion - print recursive string sdfgsdfgsfsg
 * @s: input
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
