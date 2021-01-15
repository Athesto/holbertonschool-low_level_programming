#include <stdio.h>
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: is -1 if the value is not present or array is NULL
 * otherwise indox of value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high, low;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (array[low] < array[high])
	{
		pos = ((double)(high - low) / (array[high] - array[low]) *
			(value - array[low])) + low;
		if (value < array[low] || array[high] < value)
			break;
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
