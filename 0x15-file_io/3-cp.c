#include "holberton.h"
#define BUF1024 (1024)
#define ERR STDERR_FILENO
int retError(int val, char *filename);
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
		return (retError(97, NULL));

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		return (retError(98, argv[1]));
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		f_close = close(fd1);
		if (f_close == -1)
			return (retError(100, "3"));
		return (retError(99, argv[2]));
	}
	while (f_read)
	{
		f_read = read(fd1, buf, BUF1024);
		f_write = write(fd2, buf, f_read);
	}
	if (f_write == -1)
		return (retError(99, argv[2]));
	f_close = close(fd1);
	if (f_close == -1)
		return (retError(100, "3"));
	f_close = close(fd2);
	if (f_close == -1)
		return (retError(100, "4"));
	return (0);
}
/**
 * retError - show error message
 * @val: error number
 * @filename: filename
 * Return: error value
 */
int retError(int val, char *filename)
{
	switch (val)
	{
	case (97):
		dprintf(ERR, "Usage: cp file_from file_to\n");
		break;
	case (98):
		dprintf(ERR, "Error: Can't read from file %s\n", filename);
		break;
	case (99):
		dprintf(ERR, "Error: Can't write to %s\n", filename);
		break;
	case (100):
		dprintf(ERR, "Error: Can't close fd %s\n", filename);
		break;
	}
	return (val);
}
