#include "holberton.h"
#include <string.h>
/**
 * puts_half - print half
 * @str: input
 */
void puts_half(char *str)
{
	int len = 0, half = 0;

	while (*(str + len))
		len++;
	/*printf(" len: %d, %d\n", len, (int)strlen(str));*/
	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len + 1) / 2;
	/*printf(" half: %d\n", half);*/
	while (*(str + half))
		_putchar(*(str + half++));
	_putchar('\n');
	/*_putchar('\n');*/
}
