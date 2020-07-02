/**
 * wildcmp - compare
 * @s1: src
 * @s2: key
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		else if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
	}

	if (*s2 == '*') /* check wildcard */
	{
		if (*(s2 + 1) == '*') /* more wildcard */
			return (wildcmp(s1, s2 + 1));
		else if (*(s2 + 1) == *s1) /* after wildard */
			if (wildcmp(s1 + 1, s2 + 2))
				return (1);
			else
				return (wildcmp(s1 + 1, s2));
		else
			return (wildcmp(s1 + 1, s2));
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
