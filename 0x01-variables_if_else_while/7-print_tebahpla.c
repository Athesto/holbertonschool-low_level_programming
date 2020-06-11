#include <stdio.h>

/**
 * main - 7-print reverse alphabet
 * Return: 0 Always
 */
int main(void)
{
	int c;

	for (c = 'z' ; 'a' <= c ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
