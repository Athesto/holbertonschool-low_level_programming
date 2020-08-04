#include "holberton.h"

/**
 * read_textfile - read a file and print it in stdout
 * @filename: path of file
 * @letters: number of letter to print
 * Return: number of letter it can read, 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int o_read, o_write, fd;

	o_read = o_write = fd = 0;
	if (filename)
	{
		buf = malloc(sizeof(*buf) * letters);
		if (buf)
		{
			fd = open(filename, O_RDONLY);
			o_read = read(fd, buf, letters);
			o_write = write(1, buf, o_read);
			free(buf);
			close(fd);
		}
	}
	if (!filename || !buf || fd == -1 || o_read == -1 || o_write == -1)
		return (0);
	return (o_write);
}
