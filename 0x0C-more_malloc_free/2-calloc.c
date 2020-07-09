#include <stdlib.h>

/**
 * _calloc - array malloc
 * @nmemb: n elements of array
 * @size: size of each element
 * Return: pointer to new element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb && size)
		return (NULL);
	else
		return (0);
}
