#include <stdio.h>
/**
 * main - passed back to the command line interpreter
 * @argc: count of the arguments
 * @argv: array of pointers to the strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	return (0);
}
