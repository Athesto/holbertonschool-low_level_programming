#include "holberton.h"
#include <limits.h>
/**
 * print_number - description
 * @n: intput
 */
void print_number(int n)
{
	unsigned int nabs, zeros = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	nabs =  (unsigned int)n;

	while (nabs / zeros > 9)
	{
		zeros *= 10;
	}
	while (zeros)
	{
		_putchar('0' + nabs / zeros);
		nabs %= zeros;
		zeros /= 10;
	}
}

