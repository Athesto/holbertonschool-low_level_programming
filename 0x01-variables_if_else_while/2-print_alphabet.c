#include <stdio.h>
/**
 * main - 2-print_alphabet
 *
 * Description: Print Alphabet
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 0; i < 26; i++)
		putchar('a' + i);
	putchar('\n');
	return (0);
}
