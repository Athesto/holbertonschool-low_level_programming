#include "holberton.h"
/**
 * rot13 - description
 * @str: string
 * Return: string
 */
char *rot13(char *str)
{
	char *keysrc = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *keydst = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, carry = 0, keylen = 0;

	while (keysrc[keylen])
		keylen++;

	while (str[carry])
	{
		for (i = 0; i < keylen; i++)
			if (str[carry] == keysrc[i])
			{
				str[carry] = keydst[i];
				break;
			}
		carry++;
	}
	return (str);
}
