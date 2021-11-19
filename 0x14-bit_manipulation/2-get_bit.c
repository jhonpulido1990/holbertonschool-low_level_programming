#include "main.h"
/**
 * get_bit - value of a bit at a given index
 * @n: number input
 * @index: position to equals
 * Return: 0, 1 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
