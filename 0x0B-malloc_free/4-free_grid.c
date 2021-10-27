#include "main.h"
/**
 * free_grid - frees of malloc
 * @grid: data function that returns a pointer to a 2 dimensional array
 * @height: col
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
