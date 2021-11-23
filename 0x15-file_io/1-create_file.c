#include "main.h"
/**
 * @brief 
 * 
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char *));
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_WRONLY, 600);
	if (fd == -1)
	{
		return (0);
	}
	count = read(fd, buffer, O_APPEND);
	write(fd, buffer, O_APPEND);
	close(fd);
	free(buffer);
	return (count);
}
