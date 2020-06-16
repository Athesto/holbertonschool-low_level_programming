#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - print last digit
 * @n: input number
 * Return: return last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n % 10;
	else
		n %= 10;
	_putchar('0' + n);
	return (n);
}
