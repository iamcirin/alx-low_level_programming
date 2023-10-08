#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the number of bytes to be allocated
 * Return: returns a void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
