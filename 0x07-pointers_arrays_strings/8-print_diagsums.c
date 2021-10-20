#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: matriz of integer
 * @size: bit size
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i * size + i];
	}
	for (i = 1; i <= size; i++)
	{
		sum1 += a[i * size - i];
	}

	printf("%d, %d\n", sum, sum1);
}
