#include <stdio.h>
#include <stdlib.h>
/**
 * main - passed back to the command line interpreter
 * @argc: count of the arguments
 * @argv: array of pointers to the strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	return 0;
}
