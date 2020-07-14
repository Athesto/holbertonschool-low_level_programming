/**
 * _strlen - change lenght
 * @s: input string
 * Return: int length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
