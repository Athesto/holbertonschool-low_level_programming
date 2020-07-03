#include <stdio.h>

/**
 * main - prints name file
 * @argc: args counter
 * @argv: args
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
