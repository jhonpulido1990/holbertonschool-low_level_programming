#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i = 0;
	int a = 0;
	int b = 0;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 10; a++)
		{
			b = a * i;
			if (a <= 9 && a > 0)
			{
				_putchar(',');
				_putchar(32);
			}
			if (b <= 9 && b >= 0 && a > 0)
			{
				_putchar(32);
			}
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
			if (b < 10)
			{
				_putchar(b + '0');
			}
		}
		_putchar(10);
	}
}
