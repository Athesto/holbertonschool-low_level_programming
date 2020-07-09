#include <stdlib.h>
/**
 * _realloc - main
 * @ptr: input
 * @old_size: old
 * @new_size: new
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size && new_size)
		return (ptr);
	else
		return (NULL);
}
