#include "main.h"

/**
 * array_range - a function that creates an array of int
 * @min: the min number in the array
 * @max: the max number in the array
 * Return: return a pointer to an int
 */


int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);
}
