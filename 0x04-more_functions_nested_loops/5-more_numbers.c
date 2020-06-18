#include "holberton.h"
/**
 * more_numbers - more numbers
 */
void more_numbers(void)
{
	int n;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar('1');
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
