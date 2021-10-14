#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: data
 * @n: data
 */
void reverse_array(int *a, int n)
{
	int *b = a;
	int c = 0;
	int tmpy;

	n = n - 1;
	while (c < n)
	{
		tmpy = *(b + c);
		*(b + c) = *(b + n);
		*(b + n) = tmpy;
		c++;
		n--;
	}
}
