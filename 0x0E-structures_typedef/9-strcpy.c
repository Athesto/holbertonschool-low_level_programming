/**
 * _strcpy - copy source to destination
 * @dest: destination
 * @src: source pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	do {
		*(dest + index) = *(src + index);
	} while (*(src + index++));
	return (dest);
}
