#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: data
 */
void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n == 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a; b++)
			{
				if (b < a)
				{
				_putchar(32);
				}
				else
				{
					_putchar(92);
				}
			}
			_putchar(10);
		}
	}
}
