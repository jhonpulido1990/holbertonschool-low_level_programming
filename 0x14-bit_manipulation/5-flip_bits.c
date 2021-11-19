#include "main.h"
/**
 * flip_bits - number of bits you would need to flip to get other number
 * @n: number1 input
 * @m: number2 input
 * Return: cant of number to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0;

	n = n ^ m;
	while (n > 0)
	{
		if (n & 1)
		{
			a++;
		}
		n = n >> 1;
	}
	return (a);
}
