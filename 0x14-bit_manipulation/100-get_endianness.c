#include "holberton.h"
#include <stdio.h>

/**
 * get_endianness - check if the number is endianess
 * Return: 1 if it edianess 0 otherwise
 */
int get_endianness(void)
{
	char c = '@';
	int x = 0x0001;
	char *p = &c;

	if (*(p + 1))
		return (1);
	else
		return (0);
	(void)x;
}
