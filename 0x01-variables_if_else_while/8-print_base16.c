#include <stdio.h>


/**
 * main - 8-print-hexa
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 0 ; n < 16 ; n++)
	{
		putchar(n + (n < 10 ? '0' : -10 + 'a'));
	}
	putchar('\n');
	return (0);
}
