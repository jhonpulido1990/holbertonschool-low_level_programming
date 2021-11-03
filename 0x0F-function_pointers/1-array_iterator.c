#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: array of number integer
 * @size: count of position of array
 * @action: pointer to funtion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL && action == NULL && size == '\0')
	{
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
