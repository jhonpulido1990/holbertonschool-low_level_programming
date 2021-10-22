#include "main.h"
/**
 * main - passed back to the command line interpreter
 * @argc: count of the arguments
 * @argv: array of pointers to the strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;

	printf("%d\n", (argc - 1));
	for (; argv[a]; a++)
	{
		a++;
	}

	return (0);
}
