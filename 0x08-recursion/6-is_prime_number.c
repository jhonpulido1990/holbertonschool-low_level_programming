#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime
 * @n: data
 * Return: prime number
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - prime
 * @n: data
 * @i: count
 * Return: prime number
 */
int prime(int n, int i)
{
	if(n <= 1)
	{
		return (0);
	}
	if (n != 2 && n % i == 0)
	{
		return (0);
	}

	if (i > n / 2)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
