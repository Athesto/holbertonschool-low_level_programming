#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 * @n: low limit
 */
void print_to_98(int n)
{

	while (1)
	{
		printf("%d%s", n, (n != 98) ? ", " : "\n");
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
		else
			break;
	}
}
