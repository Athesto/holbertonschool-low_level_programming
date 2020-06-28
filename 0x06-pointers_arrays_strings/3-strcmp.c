#include "holberton.h"
/**
 * _strcmp - compare strings
 * @s1:pointer1
 * @s2:pointer2
 * Return:integer of comparation
 */
int _strcmp(char *s1, char *s2)
{
	int dif = 0;

	while (dif == 0 && *s1 && *s2)
	{
		dif = (*s1++) - (*s2++);
	}
	return (dif);
}
