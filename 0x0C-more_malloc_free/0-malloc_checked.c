#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: unsigned int param represents the number of bytes to allocate
 * Return: returns a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
