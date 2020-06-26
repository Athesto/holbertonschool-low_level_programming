#include "holberton.h"
/**
 * _strncat - cp n chars
 * @dest: destination pointer
 * @src: source pointer
 * @n: numbers of chars
 * Return: pointer copied
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j])
		dest[i++] = src[j++];
	return (dest);
}
