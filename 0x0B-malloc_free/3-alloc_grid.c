#include "main.h"

/**
 * alloc_grid - Entry point
 * @width: param
 * @height: param
 * Return: returns pointer to pointer
 */


int **alloc_grid(int width, int height)
{

	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}

