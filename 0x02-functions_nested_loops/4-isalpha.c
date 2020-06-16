#include "holberton.h"
/**
 * _isalpha - check if the char is alpha
 * @c: input char
 * Return: 1-> isalpha; 0-> otherwise
 */
int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
