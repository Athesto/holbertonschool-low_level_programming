#include <stdio.h>
/**
 * main - 3-print_alphaBET
 *
 * Description: Print Alphabet
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 0; i < 52; i++)
		putchar((i < 26 ? 'a' : 'A' - 26) + i);
	putchar('\n');
	return (0);
}
