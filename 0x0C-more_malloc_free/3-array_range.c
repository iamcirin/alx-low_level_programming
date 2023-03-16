#include "main.h"

/**
 * array_range - Entry point
 * @min: param
 * @max: param
 * Return: returns p or NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
	p[i] = min;
	min++;
	}
	return (p);
}
