#include "holberton.h"
#define LONG_BITS (sizeof(long int) * 8)
/**
 * print_binary - print binary format
 * @n: number
 * Return: print binary
 */
void print_binary(unsigned long int n)
{
	int b, b_idx;
	unsigned int MSB1 = 0;

	for (b_idx = LONG_BITS; b_idx >= 1; b_idx--)
	{
		b = n >> (b_idx - 1);
		b = b & 1;
		MSB1 = MSB1 | b;
		if (MSB1 || b_idx == 1)
			_putchar('0' + b);
	}
}
