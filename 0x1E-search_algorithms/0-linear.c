#include <stdio.h> /* size_t, printf */

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search
 * Return: -1 if not found or array is NULL, index otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a_idx; /* array index */

	if (!array)
		return (-1);

	for (a_idx = 0; a_idx < size; a_idx++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a_idx, array[a_idx]);
		if (array[a_idx] == value)
			return (a_idx);
	}
	return (-1);
}

