#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * on eache elm of the array
 * @array: the array to execute the function on
 * @size: array's size
 * @action: pointer to a function that returns void and takes 2 args
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
