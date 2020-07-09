#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: size of input
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(b));
	if (!p)
		return (NULL);
	return (p);
}
