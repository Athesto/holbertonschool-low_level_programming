#include "holberton.h"
/**
 * print_last_digit - print last digit
 * @n: input number
 * Return: Success
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i = -i;
	_putchar('0' + i);
	return (i);
}
