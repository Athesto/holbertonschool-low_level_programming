#include "holberton.h"
/**
 * print_last_digit - print last digit
 * @n: input number
 * Return: int 
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n % 10;
	else
		n = n % 10;
	_putchar('0' + n);
	return (n);
}
