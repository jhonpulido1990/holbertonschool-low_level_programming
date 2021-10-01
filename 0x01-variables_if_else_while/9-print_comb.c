#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the number with space and ,
*
*Return: 0
*/
int main(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	if (i <= 56)
	{
		putchar(44);
		putchar(32);
	}
}
	putchar(10);
	return (0);
}
