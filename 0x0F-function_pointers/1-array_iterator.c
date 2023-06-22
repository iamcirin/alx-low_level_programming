#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - a function that executes a function given
 *  as a parameter on each element of an array
 *  @array: pointer to an array of int
 *  @size: size of the array
 *  @action: a pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
