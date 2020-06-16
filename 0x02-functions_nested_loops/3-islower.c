#include "holberton.h"
/**
 * _islower - check char for lower
 * @c: input character
 * Return: ->islower, 2->isnotlower
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
