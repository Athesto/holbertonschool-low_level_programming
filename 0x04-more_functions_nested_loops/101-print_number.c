#include "holberton.h"
#include <stdio.h>
/**
 * print_number - print a number
 * @n: input value
 */
void print_number(int n)
{
	int tens = 1;
	unsigned int tmp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	tmp = n;
	if (n == INT_MIN)
	{
		tmp++;
	}
	while (tmp > 9)
	{
		tens = tens * 10;
		 tmp = tmp / 10;
	}

	tmp = n;
	while (tens > 0)
	{
		_putchar('0' + tmp / tens);
		tmp %= tens;
		tens /= 10;
	}


}
