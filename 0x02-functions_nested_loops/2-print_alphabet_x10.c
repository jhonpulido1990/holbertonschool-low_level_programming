#include "main.h"

/**
 * print_alphabet_x10 - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int i;

	while (a < 10)
	{
	i = 97;

		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar(10);
		a++;
	}
}
