#include <stdio.h> /* size_t, printf */

void print_subarray(int *array, size_t low, size_t high);
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or -1 if array is NULL or
 * value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high;
	size_t a_idx; /* array index */

	low = 0;
	high = size - 1;

	while (low < size)
	{
		print_subarray(array, low, high);
		a_idx = (low + high) / 2;
		if (array[a_idx] < value)
			low = a_idx + 1;
		else if (array[a_idx] > value)
			high = a_idx - 1;
		else
			return (a_idx);
	}
	return (-1);
}

/**
 *  print_subarray - print subarray
 *  @array: a pointer to array
 *  @low: index or first element
 *  @high: index or last element
 */
void print_subarray(int *array, size_t low, size_t high)
{
	size_t p_idx; /* print index */

	printf("Searching in array: ");
	for (p_idx = low; p_idx <= high; p_idx++)
	{
		printf("%d", array[p_idx]);
		if (p_idx != high)
			printf(", ");
		else
			printf("\n");
	}
}
