#include <stdlib.h>
/**
 * array_range - range of array
 * @min: min
 * @max: max
 * Return: pointer to new val;
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * (max - min) + 1);
	if (!p)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		*(p + i) = i + min;
	return (p);

}
