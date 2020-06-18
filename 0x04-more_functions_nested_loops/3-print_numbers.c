#include "holberton.h"
/**
 * print_numbers - print numberts
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
		_putchar('0' + i++);
	_putchar('\n');
}
