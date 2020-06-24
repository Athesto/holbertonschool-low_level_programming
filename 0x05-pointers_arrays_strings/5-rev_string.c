#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverse
 * @s: input string
 */
void rev_string(char *s)
{
	int len = 0, fwd, bck;
	char c;

	while (*(s + len))
	{
		len++;
	}
	fwd = 0;
	bck = len - 1; /*len = 9 and last position is 8 from s*/

	while (fwd < bck)
	{
		c = *(s + fwd);
		*(s + fwd) = *(s + bck);
		*(s + bck) = c;
		fwd++;
		bck--;
	}
}


