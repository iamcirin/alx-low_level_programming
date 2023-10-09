#include "main.h"

/**
 * alloc_grid - a function that allocate 2-D array of ints
 * @width: number of elemtns ineach 1-D array
 * @height: number of 1-D arrays inside the 2-D array
 * Return: returns a pointer to a pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
