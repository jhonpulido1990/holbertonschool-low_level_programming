#include "main.h"
/**
 * append_text_to_file - copies the content of a file to another file
 * @filename: name file output
 * @text_content: string to copy
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size, count;

	size = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (*(text_content + size))
	{
		size++;
	}
	count = write(fd, text_content, size);
	if (count == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
