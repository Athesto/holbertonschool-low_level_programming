#include "holberton.h"
#define LONG_BITS (sizeof(long int) * 8)

/**
 * set_bit - set bit at index in n
 * @n: input
 * @index: index to set
 * Return: 1 if worked or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n && index <= LONG_BITS)
	{
		*n |= 1 << (index);
		return (1);
	}
	return (-1);
}
