#include <stdlib.h>
/**
 * array_iterator - execute array of funcitions
 * @array: array of elements
 * @size: size of array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
