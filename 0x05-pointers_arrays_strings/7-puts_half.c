#include "holberton.h"
/**
 * puts_half - print half
 * @str: input
 */
void puts_half(char *str)
{
	int len = 0, half = 0;

	while (*(str + len))
		len++;
	/*printf(" len: %d\n", len);*/
	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len) / 2;
	while (*(str + half))
		_putchar(*(str + half++));
	_putchar('\n');
}
