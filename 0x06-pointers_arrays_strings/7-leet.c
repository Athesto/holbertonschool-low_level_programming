/**
 * leet - description
 * @str: input
 * Return: string
 */
char *leet(char *str)
{
	int i, k;
	char *A = "aeotlAEOTL", *B = "4307143071";

	for (i = 0; str[i]; i++)
	{
		for (k = 0; A[k]; k++)
		{
			if (str[i] == A[k])
				str[i] = B[k];
		}
	}
	return (str);
}
