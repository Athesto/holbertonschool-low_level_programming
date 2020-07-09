#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: size of input
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	if (b)
		return (NULL);
	return (0);
}
