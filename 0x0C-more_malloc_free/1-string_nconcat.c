/**
 * string_nconcat- function that concatenates two strings.
 * @s1: destiny
 * @s2: source
 * @n: number of bytes
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (n)
		return (s1);
	else
		return (s2);
}
