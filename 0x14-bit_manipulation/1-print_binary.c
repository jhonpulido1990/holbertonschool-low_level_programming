#include "main.h"
/**
 * print_binary - prints binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int a = 0;
	unsigned long int b = 2;

	if (n >= a && n < b)
	{
		if (n == 0)
			_putchar('0');
		else
			_putchar('1');
	}
	else
	{
		print_binary((n >> 1));
		if ((n & 1) != 1)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
	}
}
