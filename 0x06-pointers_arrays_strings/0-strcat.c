#include "holberton.h"
/**
 * _strcat - concat strings
 * @dest: ouputstr
 * @src: inputstr
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*++dest) /*increase and stop if find a 0*/
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (p);
}
