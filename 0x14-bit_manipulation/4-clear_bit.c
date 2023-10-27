#include "main.h"

/**
 * clear_bit - a function that flips a bit to 0
 * @n: the int to change
 * @index: the position to flip the bit
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

