#include "main.h"
/**
 * _puts_recursion - Write a function that prints a string
 * @s: string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}
	putchar(10);
}
