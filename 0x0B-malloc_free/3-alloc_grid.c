#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: row
 * @height: col
 * Return: matriz
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int **alloc_grid = (int **)malloc(width * sizeof(int *));

	if (alloc_grid == NULL)
	{
		return (NULL);
	}
	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		alloc_grid[i] = (int *)malloc(height * sizeof(int *));
	}
	return (alloc_grid);
}
