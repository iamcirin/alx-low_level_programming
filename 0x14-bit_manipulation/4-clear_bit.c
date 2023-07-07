#include "main.h"

/**
 * clear_bit - a function that sets the value a bit 0
 * @n: an int
 * @index: an int
 * Return: returns 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > 64)
		return (-1);

	m = ~(m << index);

	*n = (*n & m);

	return (1);
}
