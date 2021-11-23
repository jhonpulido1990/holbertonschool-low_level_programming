#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: file to read
 * @letters: size to print
 * Return: count size of string
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count1, count;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char *) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	count = read(fd, buffer, letters);
	count1 = write(1, buffer, letters);
	if (count1 == -1)
	{
		return (0);
	}
	close(fd);
	free(buffer);
	return (count);
}
