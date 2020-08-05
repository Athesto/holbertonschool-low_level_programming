#include "holberton.h"
#define BUF1024 (1024)
/**
 * main - cp program
 * @argc: argument counter
 * @argv: values
 * Return: return error codes
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, f_close, f_read = -1, f_write = -1;
	char buf[BUF1024];

	/* check command input */
	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		return (97);
	}

	/* check files */
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		f_close = close(fd1);
		if (f_close == -1)
		{
			printf("Error: Can't close fd %d\n", fd1);
			return (100);
		}
		printf("Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	while (f_read)
	{
		f_read = read(fd1, buf, BUF1024);
		f_write = write(STDOUT_FILENO, buf, f_read);
	}
	if (f_write == -1)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	return (0);
}
