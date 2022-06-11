#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted
 * @array: array
 * @size: size
 * @value: value
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	int init = 0;
	int end = (int)size - 1;
	int medium = 0;
	int i = 0;

	if (array == NULL)
		return (-1);

	while (init <= end)
	{
		printf("Searching in array: ");
		medium = ((init + end) / 2);
		for (i = init; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		if (array[medium] < value)
			init = medium + 1;
		else if (array[medium] > value)
			end = medium - 1;
		else
		{
			printf("\n");
			return (medium);
		}
		printf("\n");
	}
	return (-1);
}
