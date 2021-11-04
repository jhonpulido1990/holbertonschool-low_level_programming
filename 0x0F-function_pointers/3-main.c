#include "3-calc.h"
/**
 * main - calculator
 * @argc: size of string
 * @argv: string input
 * Return: resul of calculator
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*ptr)(int, int);

	if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ptr(num1, num2));
	return (0);
}
