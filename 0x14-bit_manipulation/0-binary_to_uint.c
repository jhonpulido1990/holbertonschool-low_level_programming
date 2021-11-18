#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: number binary
 * Return: number decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int a = 0, decimal = 0, oper = 1;

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
		return (0);
	}
	for (--a; a >= 0; a--)
	{
		if (b[a] == '1')
		{
			decimal += oper;
		}
		  oper *= 2;
	}
	return (decimal);
}
