#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints a base 16
*
*Return: 0
*/
int main(void)
{
	int i = 0;

	for (i = 48; i < 103; i++)
{
		if (i == 58)
	{
		i = 97;
	}
		putchar(i);
}
	putchar(10);
	return (0);
}
