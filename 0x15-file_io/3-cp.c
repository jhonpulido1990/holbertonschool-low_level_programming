#include "main.h"
/**
 * checks_if_fails - correct exit if anything fails
 *
 * @nameoffile: name of the file to print
 * @error_code: error code
 * @fd: file descriptor status
 */

void checks_if_fails(char *nameoffile, int error_code, int fd)
{
	switch (error_code)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", nameoffile);
		exit(98);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", nameoffile);
		exit(99);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	default:
		break;
	}
}
/**
 * main - entry point
 *
 * @argc: Number of Arguments
 * @argv: arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd, fdi, fd1, fdi1;

	char buffer[1024];

	if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			checks_if_fails(argv[1], 98, 0);
		fd1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (fd1 == -1)
			checks_if_fails(argv[2], 99, 0);
		while ((fdi = read(fd, buffer, 1024)) != 0)
		{
			if (fdi == -1)
				checks_if_fails(argv[1], 98, 0);

			fdi1 = write(fd1, buffer, fdi);
			if (fdi1 == -1)
				checks_if_fails(argv[2], 99, 0);
		}
	}
	else
		checks_if_fails(NULL, 97, 0);

	if (close(fd) == -1)
		checks_if_fails(NULL, 100, fd);

	if (close(fd1) == -1)
		checks_if_fails(NULL, 100, fd1);

	return (0);
}
