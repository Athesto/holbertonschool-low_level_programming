#include "holberton.h"
#define BUF1024 (1024)
#define ERR STDERR_FILENO
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

	if (argc != 3)
	{
		dprintf(ERR, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(ERR, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		f_close = close(fd1);
		if (f_close == -1)
		{
			dprintf(ERR, "Error: Can't close fd %d\n", fd1);
			return (100);
		}
		printf("Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	while (f_read)
	{
		f_read = read(fd1, buf, BUF1024);
		f_write = write(fd2, buf, f_read);
	}
	if (f_write == -1)
	{
		dprintf(ERR, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	close(fd1), close(fd2);
	return (0);
}
