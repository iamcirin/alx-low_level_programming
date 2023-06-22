#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that search dir an intger
 * @array: a pointer to an array
 * @size: size on an array
 * @cmp: a pointer to the compare function
 * Return: returns an int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
