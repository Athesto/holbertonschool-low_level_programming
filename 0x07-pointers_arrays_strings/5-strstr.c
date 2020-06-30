#define NULL ((void *)0)
/**
 * _strstr - find subtring
 * @haystack: input
 * @neddle: key
 * Return: pointer
 */
char *_strstr(char *haystack, char *neddle)
{
	char *ps = haystack;
	int i = 0;

	if (*neddle == '\0')
		return (0);

	while (1)
	{
		if (*(ps + i) == *(neddle + i))
		{
			i++;
		}
		else
		{
			ps++;
			i = 0;
		}
		if (neddle[i] == '\0')
			return (ps);
		if (ps == '\0')
			break;
	}
	return (0);
}
