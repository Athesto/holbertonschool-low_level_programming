#include "holberton.h"
/**
 * main - cp program
 * @argc: argument counter
 * @argv: values
 * Return: return error codes
 */
int main(int argc, char *argv[])
{
	const char *err_msg[] = {
		"Error: Can't read from file %s\n",
		"Error: Can't write to %s\n",
		"Error: Can't close fd %d\n",
		NULL
	};

	printf("%d\n", argc);

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		return (97);
	}
	(void) argv;
	(void) err_msg;
	return (0);
}
