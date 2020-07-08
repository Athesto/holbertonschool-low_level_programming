#include <stdlib.h>
/**
 * create_array - create an array
 * @size: size
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	int i = c;
	char *p;

	if (!size)
		return (NULL);
	p = malloc(sizeof(c) * size);
	if (!p)
		return (NULL);
	while (i)
		p[--i] = c;
	return (p);

}
