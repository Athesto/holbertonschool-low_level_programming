#include "holberton.h"
/**
 * print_diagsums - sum diagonals
 * @a: matrix
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag += *(a + i * size + i);
		diag2 += *(a + i * size + size - i - 1);
	}
	printf("%d, %d\n", diag, diag2);
}
