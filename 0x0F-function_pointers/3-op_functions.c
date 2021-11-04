#include "3-calc.h"
/**
 * op_add - operator of add
 * @a: number1 integer
 * @b: number2 integer
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - operator of delect
 * @a: number1 integer
 * @b: number2 integer
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - operator of multiplier
 * @a: number1 integer
 * @b: number2 integer
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - operator of divition
 * @a: number1 integer
 * @b: number2 integer
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - operator of module
 * @a: number1 integer
 * @b: number2 integer
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
