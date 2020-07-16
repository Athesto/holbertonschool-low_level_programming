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
	char *code = "55 48 89 e5 48 83 ec 20 89 7d ec 48 89 75 e0 83 7d ec 02 75 \
3e 48 8b 45 e0 48 83 c0 08 48 8b 00 48 89 c7 e8 db fe ff ff \
89 45 fc 83 7d fc 00 78 11 bf 0a 00 00 00 e8 88 fe ff ff b8 \
00 00 00 00 eb 20 bf b4 06 40 00 e8 87 fe ff ff b8 02 00 00 \
00 eb 0f bf b4 06 40 00 e8 76 fe ff ff b8 01 00 00 00 c9 c3 \
66 2e 0f 1f 84 00 00 00 00 00 0f 1f 44 00 00";
	int len, i;

	if (argc == 2)
	{
		len = atoi(argv[1]);
		if (len >= 0)
		{
			len *= 3;
			i = 0;
			while(i < len - 1)
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



