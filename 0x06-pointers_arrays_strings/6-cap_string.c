#include "holberton.h"
/**
 * cap_string - description
 * @str: input
 * Return: string
 */
char *cap_string(char *str)
{
	int k = 0, i;
	char *cond = "\t \n,;.!=\"(){}";
	int len_cond = sizeof(cond);

	while (str[k])
	{
		for (i = 0; i < len_cond; i++)
			if ((k == 0) || (str[k - 1] == cond[i]))
				if ('a' <= str[k] && str[k] <= 'z')
				{
					str[k] = str[k] - 'a' + 'A';
					break;
				}
		k++;
	}

	return (str);
}
