#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Write a program that prints all possible
* different combinations of two digits.
*
* Return: 0
*/
int main(void)
{
	int i = 0;
	int a = 0;

	for (i = 48; i < 58; i++)
	{
		for (a = 48; a < 58; a++)
		{
			if (i < a)
			{
				putchar(i);
				putchar(a);
			if (a == 57 && i == 56)
			{
				putchar(10);
			}
			else
				{
				putchar(44);
				putchar(32);
				}
			}
		}
	}
	return (0);
}
