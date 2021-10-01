#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Write a program that prints all possible
* different combinations of three digits.
*
*Return: 0
*/
int main(void)
{
	int i = 0;
	int a = 0;
	int b = 0;

	for (i = 48; i < 58; i++)
	{
		for (a = 48; a < 58; a++)
		{
			for (b = 48; b < 58; b++)
			{
				if (i < a && a < b)
				{
					putchar(i);
					putchar(a);
					putchar(b);
					if (i == 55 && a == 56 && b == 57)
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

	}
	return (0);
}
