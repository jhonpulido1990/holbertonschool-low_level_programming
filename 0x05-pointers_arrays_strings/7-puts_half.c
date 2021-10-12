#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: data
 */
void puts_half(char *str)
{
	int a = 0;

	while(*(str + a))
	a++;
	if (a % 2 == 0)
	{
		a = a / 2;
	}
	else
	{
		a = (a - 1) / 2;
		a++;
	}
	while (*(str + a) != ('\0'))
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
