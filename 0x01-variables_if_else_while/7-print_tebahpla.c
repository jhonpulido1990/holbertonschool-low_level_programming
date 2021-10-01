#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the alphabet in reverse
*
*Return: 0
*/
int main(void)
{
	int i = 0;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
