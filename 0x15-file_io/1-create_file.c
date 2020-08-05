#include "holberton.h"

/**
 * create_file - create a file
 * @filename: input
 * @text_content: input msg
 * Return: 1 is success, -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, o_wr, isok = -1;

	if (!filename)
		return (isok);
	fd = open(filename, O_CREAT, 0600);
	if (fd != -1)
	{
		if (text_content)
		{
			while (text_content[len])
				len++;
			o_wr = write(STDOUT_FILENO, text_content, len);
			if (o_wr != -1)
				isok = 1;
		}
		close(fd);
	}
	return (isok);
}
