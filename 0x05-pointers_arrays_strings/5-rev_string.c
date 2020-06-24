#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverse
 *@s: input string
 */
void rev_string(char *s)
{
	char c;
	int len = 0;
	char *p0 = s;

	while (*s)
	{
		len++;
		s++;
	}
	s--;
	while (p0 != s)
	{
		c = *p0;
		*p0 = *s;
		*s = c;
		p0++;
		s--;
	}
}

