#include "holberton.h"
#define LONG_BITS (sizeof(long int) * 8)

/**
 * clear_bit - ?
 * @n: ?
 * @index: ?
 * Return: ?
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (n && index <= LONG_BITS)
	{
		mask = 1 << index;
		mask = ~mask;
		*n &= mask;
		return (1);
	}
	return (-1);
}
