/**
 * string_toupper - description
 * @c: string
 * Return: string
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if ('a' <= c[i] && c[i] <= 'z')
			c[i] = c[i] - 'a' + 'A';
		i++;
	}
	return (c);
}
