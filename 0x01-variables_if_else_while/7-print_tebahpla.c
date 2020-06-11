#include <stdio.h>

/**
 * main - 7-printl_lowalpha_reversed
 * Return: 0 Always
 */
int main(void)
{
	int c;

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
