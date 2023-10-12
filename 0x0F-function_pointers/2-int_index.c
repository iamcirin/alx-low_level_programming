#include "function_pointers.h"

/**
 * int_index - a function that searches for an int
 * @array: a pointer to an array
 * @size: the array's size
 * @cmp: a pointer to a function
 * Return: returns index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
