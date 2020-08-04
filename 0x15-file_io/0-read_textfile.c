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
	int size = 0;
	int fd;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd > 2)
		{
			buf = malloc(letters);
			if (buf)
			{
				size = read(fd, buf, letters);
				if (size > 0)
					size = write(1, buf, size);
				free(buf);
			}
			close(fd);
		}
	}
	if (size > 0)
		return (size);
	return (0);
}
