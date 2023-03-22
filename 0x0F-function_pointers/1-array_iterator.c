#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: param
 * @size: param
 * @action: pointer to function
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
