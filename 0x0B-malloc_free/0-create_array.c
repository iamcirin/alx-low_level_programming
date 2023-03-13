#include "main.h"

/**
 * create_array - Entry point
 * @size: param
 * @c: param
 * Return: return p or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = malloc(size * sizeof(char));

	if (size == 0 || p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}

