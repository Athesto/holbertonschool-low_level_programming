#include "holberton.h"
/**
 * print_array - print array
 * @array: pointer to array
 * @n: elements
 */
void print_array(int *array, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d%s", *(array + i), i < n - 1 ? ", " : "");
	}
	printf("\n");
}

