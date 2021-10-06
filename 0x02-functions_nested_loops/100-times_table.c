#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: data
 */
void print_times_table(int n)
{
	int i, a, b;

	for (i = 0; i <= n; i++)
	{
		for (a = 0; a <= n; a++)
		{
			b = a * i;
			if (a <= 15 && a > 0)
			{
				_putchar(',');
			}
			if (b >= 0 && b < 10 && a > 0)
			{
				_putchar(32);
				_putchar(32);
				_putchar(32);
			}
			if (b > 9 && b < 100)
			{
				_putchar(32);
				_putchar(32);
			}
			if (b > 99)
			{
				_putchar(32);
				_putchar((b / 100) % 10 + '0');
			}
			if (b > 9)
			{
				_putchar((b / 10) % 10 + '0');
			}
				_putchar(b % 10 + '0');
		}
		_putchar(10);
	}
}
