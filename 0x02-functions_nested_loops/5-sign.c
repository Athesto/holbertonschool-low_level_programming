#include "holberton.h"
/**
 * print_sign - print sign of value
 * @n: input number
 * Return: 1->postive, 0->zero, -1->otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (!n)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
