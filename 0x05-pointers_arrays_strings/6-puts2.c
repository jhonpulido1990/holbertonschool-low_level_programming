#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: data
 */
void puts2(char *str)
{
	int a = 0;

	for (a = 0; *(str + a); a++)
	{
		if (a % 2 == 0)
			_putchar(*(str + a));
	}
	_putchar('\n');
}
