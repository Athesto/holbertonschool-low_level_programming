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
		if (i > 0)
			printf(", ");
		printf("%d", *(array + i));
	}
	printf("\n");
}

