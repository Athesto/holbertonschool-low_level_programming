/**
 * isEqual - recursive equal
 * @s: initial pointer
 * @last: last pointer
 * Return: 1 is palindrome, 0 otherwise
 */
int isEqual(char *s, char *last)
{
	if (*s != *last)
		return (0);
	if (s < last)
		return (isEqual(s + 1, last - 1));
	return (1);
}

/**
 * is_palindrome - is palindrome
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	char *last = s;

	while (*last)
		last++;
	last--;
	return (isEqual(s, last));
}
