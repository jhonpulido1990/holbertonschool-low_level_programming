#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: number input
 * @index: position to clear
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
