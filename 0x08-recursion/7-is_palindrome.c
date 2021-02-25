/**
 * isEqual - recursion to is Equal
 * @s: initial string
 * @last: last string
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
 * getlen - is palindrome
 * @s: string
 * Return: int
 */
int getlen(char *s)
{
	int len = 0;

	if (*s)
		len = 1 + getlen(s + 1);
	return (len);
}

/**
 * is_palindrome - is palindrome
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	char *last = s + getlen(s) - 1;

	return (isEqual(s, last));
}
