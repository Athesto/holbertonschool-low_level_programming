#include "holberton.h"
/**
 * times_table - 9times table
 */
void times_table(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (n * m >= 10)
				_putchar('0' + n * m / 10);
			else if (m)
				_putchar(' ');
			_putchar('0' + n * m % 10);
			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
