#include "main.h"

/**
 * _memset - Entry point
 * @s: param
 * @b: param
 * @n: param
 * Return: returs s
 */



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - Entry point
 * @nmemb: param
 * @size: param
 * Return: returns p or Null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}

