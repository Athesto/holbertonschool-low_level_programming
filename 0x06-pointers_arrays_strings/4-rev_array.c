#include "holberton.h"
/**
 * reverse_array - description
 * @a: input
 * @n: input
 * Return: return
 */
void reverse_array(int *a, int n)
{
	int fwd = 0, bck = n - 1; /*pos[0], pos[last]*/
	int carry;

	while (fwd < bck)
	{
		carry = a[fwd];
		a[fwd] = a[bck];
		a[bck] = carry;
		fwd++;
		bck--;
	}
}
