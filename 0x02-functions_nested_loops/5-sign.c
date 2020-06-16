#include "holberton.h"
/**
 * print_sign - print sign of value
 * @n: input number
 * Return: 1->postive, 0->zero, -1->otherwise
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (!n)
		return (0);
	else
		return (-1);
}
