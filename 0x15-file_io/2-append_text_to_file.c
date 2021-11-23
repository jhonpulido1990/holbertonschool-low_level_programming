#include "main.h"
/**
 * @brief 
 * 
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size, count;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	size = strlen(text_content);
	count = write(fd, text_content, size);
	if (count == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
