/**
 * _memcpy - copy memory
 * @dest: pointer to destiny
 * @src: source string
 * @n: n bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
