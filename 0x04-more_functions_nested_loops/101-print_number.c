#include "holberton.h"
/**
 * print_number - print a number
 * @n: input value
 */
void print_number(int n)
{
	int tens = 1;
	int tmp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	tmp = n;
	while (tmp > 9)
	{
		tens *= 10;
		tmp /= 10;
	}

	tmp = n;
	while (tens > 0)
	{
		_putchar('0' + tmp / tens);
		tmp %= tens;
		tens /= 10;
	}


}
