#include <stdio.h>

/**
 * main - 9 print_digit
 * Return:0
 */
int main(void)
{
	int n;

	n = 0;
	while (1)
	{
		putchar('0' + n++);
		if (n > 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
