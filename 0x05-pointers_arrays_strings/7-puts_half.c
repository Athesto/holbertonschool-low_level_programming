#include "holberton.h"
/**
 * puts_half - print half
 * @str: input
 */
void puts_half(char *str)
{
	int len = 0, n = 0;

	while (*(str + len))
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	while (*(str + n))
		_putchar(*(str + n++));
	_putchar('\n');
	/*printf("%d", len);*/
}
