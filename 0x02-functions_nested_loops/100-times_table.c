#include "holberton.h"
/**
 * print_times_table - print n time table
 * @n: print product table of n
 */
void print_times_table(int n)
{
	int i, j, valX00, val0X0, val00X;

	if (n < 0 || 15 < n)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			valX00 = (i * j / 100) % 10;
			val0X0 = (i * j / 10)  % 10;
			val00X = (i * j / 1)   % 10;
			if (j)
			{
				if (i * j >= 100)
					_putchar('0' + valX00);
				else
					_putchar(' ');
				if (i * j >= 10)
					_putchar('0' + val0X0);
				else
					_putchar(' ');
			}
			_putchar('0' + val00X);
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			_putchar('\n');
		}
	}
}

