#include "holberton.h"
/**
 * reverse_array - description
 * @a: input
 * @n: input
 * Return: return
 */
void reverse_array(int *a, int n)
{
	while (n)
	{
		printf("%i", a[n]);
		if (n > 1)
			printf(", ");
		else
			printf("\n");
		n--;
	}
}
