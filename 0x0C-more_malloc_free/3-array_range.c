#include "main.h"
/**
 * array_range - create a array of integer
 * @min: number min
 * @max: number max
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	if (min == NULL || max == NULL)
	{
		return (NULL);
	}
	ptr = malloc((max + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
