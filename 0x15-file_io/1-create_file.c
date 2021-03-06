#include "main.h"
/**
 * create_file - Create a function that creates a file
 * @filename: name file
 * @text_content: string to print
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	else
	{
		if (text_content == NULL)
		{
			close(fd);
			return (1);
		}
		count = write(fd, text_content, strlen(text_content));
		close(fd);
		if (count == -1)
		{
			return (-1);
		}
	}
	return (1);
}
