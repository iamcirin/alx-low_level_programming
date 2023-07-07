#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 * @n: int
 * @index: int
 * Return: returns 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > 64)
		return (-1);

	m <<= index;

	*n = (*n | m);
	return (1);
}
