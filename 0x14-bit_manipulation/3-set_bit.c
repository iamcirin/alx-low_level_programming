#include "main.h"
/**
 * set_bit - a function that convert a bit to 1
 * @n: the number to cinvert its bit
 * @index: the position to convert the bit at
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
