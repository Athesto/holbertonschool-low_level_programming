#include "holberton.h"
#include <string.h>

/**
 * binary_to_uint - converts b into binary
 * @b: string with binary num
 * Return: b converted or 0 if there is an ivalid char, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	const char *ptr = b;
	unsigned int number;

	/* b exist */
	if (ptr)
	{
		/* len of ptr && check if str is valid */
		number = 0;
		while (*ptr == '0' || *ptr == '1' || ptr == NULL)
		{
			number += *ptr - '0';
			ptr++;
			if (!*ptr)
				return (number);
			number = number << 1;
		}
	}
	return (0);
}
