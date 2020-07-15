/**
 * int_index - search a integer
 * @array: array of elements
 * @size: number of elements in array
 * @cmp: ponter to function to be used to comparate values
 * Return: index of first element for which the cmp function
 * does not return 0, -1 if no element matched or size <= -2
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
