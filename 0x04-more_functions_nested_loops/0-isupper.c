#include "holberton.h"
/**
 * _isupper - check if is upper
 * @c: input char
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
