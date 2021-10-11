#include "main.h"
/**
 * _puts - function that prints a string
 * @str: string
 */
void _puts(char *str)
{
	int a = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar(10);
}
