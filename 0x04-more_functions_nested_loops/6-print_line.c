#include "main.h"
/**
 * print_line - unction that draws a straight line in the terminal
 * @n: data
 */
void print_line(int n)
{
	int a = 0;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar(10);
}
