#include "main.h"

/**
 * _calloc - a function that allocate memory
 *  for an array using malloc
 *
 *  @nmemb: number of elements in array
 *  @size: size of each element
 *  Return: returns NULL or a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
	{
		pt[i] = '0';
	}
	return (pt);
}
