#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: numero
 * Return: call to root
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 0)
	{
	return (n);
	}
	return (root(i, n));
}
/**
 * root - squart
 * @base: factor
 * @number: data
 * Return: squart
*/
int root(int base, int number)
{
	if (base * base == number)
	{
	return (base);
	}
	if (base * base > number)
	{
	return (-1);
	}
	return (root(base + 1, number));
}
