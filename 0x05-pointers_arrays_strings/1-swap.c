#include "holberton.h"
/**
 * swap_int - swap 2 vals
 * @a: input1
 * @b: input2
 */
void swap_int(int *a, int *b)
{
	int ba = *a;

	*a = *b;
	*b = ba;
}
