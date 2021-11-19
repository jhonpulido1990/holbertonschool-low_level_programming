#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: checks endianness
 */
int get_endianness(void)
{
	int x = 1;
	char *y;

	y = (char *)&x;
	if (*y)
	{
		return (1);
	}
	return (0);
}
