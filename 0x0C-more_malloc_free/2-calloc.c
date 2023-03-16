#include "main.h"

/**
 * _calloc - Entry point
 * @nmemb: param
 * @size: param
 * Return: returns p or Null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = '0';
	}
	return (p);
}

