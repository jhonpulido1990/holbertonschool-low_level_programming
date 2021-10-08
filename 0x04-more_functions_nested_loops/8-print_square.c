#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size: data
 */
void print_square(int size)
{
	int a = 0;
	int b = 0;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
