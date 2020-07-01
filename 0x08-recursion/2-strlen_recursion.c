/**
 * _strlen_recursion - return len
 * @s: input string
 * Return: len
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
