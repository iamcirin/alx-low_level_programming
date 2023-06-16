#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: min number
 * @max: max nombre
 * Return: returns NULL or a pointer
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	for (i = 0; i < max - min + 1; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
