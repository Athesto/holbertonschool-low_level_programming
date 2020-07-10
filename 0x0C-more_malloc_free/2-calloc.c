#include <stdlib.h>

/**
 * _calloc - array malloc
 * @nmemb: n elements of array
 * @size: size of each element
 * Return: pointer to new element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	void *out;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);

	i = 0;
	while (i < nmemb * size)
	{
		*(p + i) = 0;
		++i;
	}
	out = p;
	return (out);

}
