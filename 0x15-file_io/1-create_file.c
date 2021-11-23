#include "main.h"
/**
 * @brief 
 * 
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT, S_IWUSR | S_IRUSR);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	/*read(fd, text_content, strlen(text_content));*/
	count = write(fd, text_content, strlen(text_content));
	if (count == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
