#include "holberton.h"
/**
 *print_line - print a line
 *@n: length
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
