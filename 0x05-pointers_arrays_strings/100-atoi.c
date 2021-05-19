/**
 * _atoi - convert str into ingeter
 * @str: input str
 * Return: integer
 */
int _atoi(char *str)
{
	int n = 0; /* output */
	int sign = 1; /* sign multiplier 1/-1 */
	int i = 0; /* index for digit */

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i])
	{
		n = n * 10 + str[i] - '0';
		i++;
	}

	return (sign * n);
}
