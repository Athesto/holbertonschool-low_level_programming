#include "holberton.h"
/**
 * _strcat - concat strings
 * @dest: ouputstr
 * @src: inputstr
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i]) /*increase and stop if find a 0*/
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
