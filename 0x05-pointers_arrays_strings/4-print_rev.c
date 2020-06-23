#include "holberton.h"
/**
 * print_rev - printrev
 * @s: input string
 */
void print_rev(char *s)
{
	int len = 0;

	/*"hola\0" -> 5*/
	do
		++len;
	while (*++s);

	do
		_putchar(*--s);
	while (--len);
	_putchar('\n');
}
