#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: data
 *
 */
void print_triangle(int size)
{
	int a = 0;
	int b = 0;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if (b >= size - (a - 1))
				{
					_putchar('#');
				}
				else
				{
					_putchar(32);
				}
			}
			_putchar(10);
		}
	}
}
