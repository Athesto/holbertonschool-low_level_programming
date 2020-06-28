#include <string.h>
#include <stdio.h>

/**
 * _strspn - len of a prefix substring
 * @s: - string
 * @accept: - group os chars to search
 * Return: the len of chars that conatins
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	char *ps = s, *pa = accept;

	while (*ps)
	{
		while (*pa)
		{
			if (*pa == *ps)
			{
				len++;
				break;
			}
			else
				pa++;
		}
		if (*pa)
		{
			pa = accept;
			ps++;
		}
		else
			break;
	}

	return (len);
}


