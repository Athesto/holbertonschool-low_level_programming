#include "holberton.h"

/**
 * append_text_to_file - append file
 * @filename: input filename
 * @text_content: msg
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int isok = -1, fd, f_write = 0, len = 0;

	if (!filename)
		return (isok);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd != -1)
	{
		if (text_content)
		{
			while (text_content[len])
				len++;
			f_write = write(fd, text_content, len);
		}
		if (f_write != -1)
			isok = 1;
		close(fd);
	}
	return (isok);
}

