#include <stdio.h>

/**
 * main - 9 print_digit
 * Return:0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j  <= 9 ; j++)
		{
			for (k = 0 ; k  <= 9 ; k++)
			{
				for (l = 0 ; l  <= 9 ; l++)
				{
					if (10 * i + j >= 10 * k + l)
						continue;
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (1)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
