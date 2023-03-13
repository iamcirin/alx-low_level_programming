#include "main.h"

/**
 * free_grid - Entry point
 *
 * @grid: param
 * @height: param
 *
 * Return: returns grid
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
