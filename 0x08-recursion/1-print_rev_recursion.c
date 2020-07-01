#include "holberton.h"
/**
 * _print_rev_recursion - print reverse
 * @s: input string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
