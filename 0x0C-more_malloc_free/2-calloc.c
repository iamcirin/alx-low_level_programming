#include "main.h"

/**
 * _calloc - a function that allocates mem and set it to 0
 * @nmemb: number of elements in the array
 * @size: size of each elm in the array
 * Return: returns a pointer (void)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb , size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
