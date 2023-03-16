#include "main.h"

/**
 * malloc_checked - Entry point
 * @b: param
 * Return: returns pointer
 */


void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
