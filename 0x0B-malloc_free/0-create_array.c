#include "main.h"

/**
 * create_array - a program that allocates memory on the heap
 * @size: size of the allocated memory
 * @c: the char wich the array will be initialized with
 * Return: returns a pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
