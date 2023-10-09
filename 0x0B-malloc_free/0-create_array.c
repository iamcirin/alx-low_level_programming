#include "main.h"

/**
 * create_array - a function that creates an array
 * @size: size of the array
 * @c: the char to initialize the array with
 * Return: return a pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
