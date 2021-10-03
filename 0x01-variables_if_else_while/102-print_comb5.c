#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the number with space and
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;

	for (i = 48; i < 58; i++)
	{
		for (a = 48; a < 58; a++)
		{
			for (b = 48; b < 58; b++)
			{
				for (c = 48; c < 58; c++)
				{
					if (i <= 57 && a <= 56 && b <= 57 && c <= 57)
					{
						putchar(i);
						putchar(a);
						putchar(32);
						putchar(b);
						putchar(c);
					}
					if (i <= 57 && a <= 56 && b <= 57 && c <= 56)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
