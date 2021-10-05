#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: data
 */
void print_to_98(int n)
{
	int i = 0;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			if (i < 98)
			{
				printf("%d, ", i);
			}
		}
	}
	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			if (i > 98)
			{
				printf("%d, ", i);
			}
		}
	}
}
