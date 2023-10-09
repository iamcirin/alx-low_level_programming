#include "main.h"

/**
 * free_grid - a function that frees up a 2d array
 * @grid: a pointer to pointer int
 * @height: the number of 1-D arrays
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL || height == 0)
		exit(1);

	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
