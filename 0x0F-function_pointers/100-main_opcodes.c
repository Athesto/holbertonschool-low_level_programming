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
	int i;

	if (argc == 2)
	{
		i = atoi(argv[1]);
		if (i >= 0)
		{
			printf("\n");
			return (0);
		}
		printf("Error\n");
		return (2);
	}
	printf("Error\n");
	return (1);
}
