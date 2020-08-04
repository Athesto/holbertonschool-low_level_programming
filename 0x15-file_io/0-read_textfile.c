#include "holberton.h"

/**
 * read_textfile - read a file and print it in stdout
 * @filename: path of file
 * @letters: number of letter to print
 * Return: number of letter it can read, 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char c;
	unsigned int i = 0;
	int fd;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd > 2)
		{
			for (i = 0; i < letters; i++)
			{
				if (read(fd, &c, 1) < 1)
					break;
				if (write(1, &c, 1) < 1)
					return (0);
			}
			close(fd);
		}
	}
	return (i);
}
