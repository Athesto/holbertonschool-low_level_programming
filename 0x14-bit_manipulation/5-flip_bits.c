#include "holberton.h"
#define LONG_BITS (sizeof(long int) * 8)

/**
 * flip_bits - check how many bits changed
 * @n: number 1
 * @m: number 2
 * Return: number of changed bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b_chgd;
	int counter;

	b_chgd = n ^ m;
	counter = 0;
	while (b_chgd)
	{
		counter += b_chgd & 1;
		b_chgd >>= 1;
	}
	return (counter);
}
