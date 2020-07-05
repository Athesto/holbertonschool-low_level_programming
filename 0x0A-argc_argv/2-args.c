#include <stdio.h>
/**
 * main - print all values
 * @argc: counter
 * @argv: values
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
