#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: counter
 * @argv: values
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	char *code =
"55 48 89 e5 48 83 ec 20 89 7d ec 48 89 75 e0 83 7d ec 02 75 3e 48 8b 45 e0";
	int len, i;

	if (argc == 2)
	{
		len = atoi(argv[1]);
		if (len >= 0)
		{
			len *= 3;
			i = 0;
			while (i < len - 1)
			{
				putchar(code[i]);
				i++;
			}
			printf("\n");
			return (0);
		}
		printf("Error\n");
		return (2);
	}
	printf("Error\n");
	return (1);
}




