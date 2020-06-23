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

/*
	*while (*s)
	{
		s++;
		len++;
	}
*/
	do
		++len;
	while (*++s);

	printf("%d, %c\n", len, *s);
	return;
	while (*s > 5)
	{
		c = *s;
		printf("<%c>", c);
		*s = *(s - len);
		*(s - len) = c;
		s--;
		len++;
	}
	printf("\n");
}

