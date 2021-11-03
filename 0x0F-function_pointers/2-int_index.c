#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer
 * @array: arra of pointers
 * @size: size of of array
 * @cmp: pointers to the three funtions
 * Return: cmd
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	else
	{
		return (-1);
	}
	return (-1);
}
