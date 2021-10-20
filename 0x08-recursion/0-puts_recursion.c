#include "main.h"
/**
 * _puts_recursion - Write a function that prints a string
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s++);
	}
}
