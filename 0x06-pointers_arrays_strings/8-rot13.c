/**
 * rot13 - description
 * @str: string
 * Return: string
 */
char *rot13(char *str)
{
	char *keysrc = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *keydst = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, carry = 0;

	while (str[carry])
	{
		for (i = 0; keysrc[i]; i++)
			if (str[carry] == keysrc[i])
			{
				str[carry] = keydst[i];
				break;
			}
		carry++;
	}
	return (str);
}
