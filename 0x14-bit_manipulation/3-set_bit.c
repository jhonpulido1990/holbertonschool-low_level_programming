#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: number input
 * @index: position to set to 1
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
		if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n |= 1 << index;
	return (1);
}
