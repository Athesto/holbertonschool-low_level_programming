#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul
 * @argc: counter
 * @argv: values
 * Return: 0 if are 2 args, 1 otherwise
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
