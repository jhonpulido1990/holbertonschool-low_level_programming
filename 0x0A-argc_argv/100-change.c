#include "main.h"
/**
 * main -  cents
 * @argc: counter
 * @argv: string
 * Return: return 0 or 1
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int vari1 = 1;
	int result = 0;
	int valor;

	if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			vari1 = atoi(argv[i]);
		}
	}

	if (vari1 >=25)
	{
		result = vari1/25;
		valor = vari1 - (result * 25);
		vari1 = valor;
	}
	if (vari1 < 25 && vari1 >= 10)
	{
		result = vari1 / 10 + result;
		valor = vari1 - (result * 10);
		vari1 = valor;
	}
	if (vari1 < 10 && vari1 >= 5)
	{
		result = vari1 / 5 + result;
		valor = vari1 - (result * 5);
		vari1 = valor;
	}
	if (vari1 < 5 && vari1 >= 2)
	{
		result = vari1 / 2 + result;
		valor = vari1 - (result * 2);
		vari1 = valor;
	}
	if (vari1 < 2 && vari1 >= 1)
	{
		result = vari1 / 1 + result;
		valor = vari1 - (result * 1);
		vari1 = valor;
	}
	printf("%d\n", result);
	return (0);
}
