#include "holberton.h"
/**
 * _abs - check abs value
 * @n: int input
 * Return: absolute of n
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (!n)
		return (0);
	else
		return (-n);
}
