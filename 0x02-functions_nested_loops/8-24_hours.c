#include "holberton.h"
/**
 *jack_bauer - print time 0-24
 *Return: no return
 */
void jack_bauer(void)
{
	int s;

	for (s = 0; s <= 24 * 60; s++)
	{
		_putchar('0' + (s / 60) / 10);
		_putchar('0' + (s / 60) % 10);
		_putchar(':');
		_putchar('0' + (s % 60) / 10);
		_putchar('0' + (s % 60) % 10);
		_putchar('\n');
	}
}
