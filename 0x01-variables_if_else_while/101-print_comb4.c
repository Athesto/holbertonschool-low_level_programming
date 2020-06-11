#include <stdio.h>

/**
 * main - 9 print_digit
 * Return:0
 */
int main(void)
{
	int i, j, k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j  <= 9 ; j++)
		{
			for (k = 0 ; k  <= 9 ; k++)
			{
				if (i >= j || i >= k || j >= k)
					continue;
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
