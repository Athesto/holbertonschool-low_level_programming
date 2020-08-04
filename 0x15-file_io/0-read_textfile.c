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
	int o_read, o_w, fd;

	o_read = o_w = fd = 0;
	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd != -1)
		{
			buf = malloc(letters);
			if (buf)
			{
				o_read = read(fd, buf, letters);
				if (o_read != -1)
					o_w = write(STDOUT_FILENO, buf, o_read);
				free(buf);
			}
			close(fd);
		}
	}
	if (fd == -1 || o_read == -1 || o_w == -1)
		return (0);
	return (o_w);
}
