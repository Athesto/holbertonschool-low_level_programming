/**
 * _strpbrk - string from set
 * @s: source
 * @accept: set to find
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *ps = s;
	char *pa = accept;

	while (*ps)
	{
		do {
			if (*ps == *pa)
				return (ps);
			pa++;
		} while (*pa);
		ps++;
		pa = accept;
	}
	return (((void *) 0));
}

