#include "main.h"

/**
 * alloc_grid - a program that returns a pointer to a 2 dimentional array
 * @width: width of the grid
 * @height: height of the grid
 * Return: returns NULL or a pointer
 */
int **alloc_grid(int width, int height)
{
	int **p, i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));

		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}

		for (n = 0; n < width; n++)
			p[i][n] = 0;
	}
	return (p);
}
