#include "main.h"

/**
 * free_grid - a program that free a 2dimen array grid
 * @grid: a pointer of a pointer
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}

