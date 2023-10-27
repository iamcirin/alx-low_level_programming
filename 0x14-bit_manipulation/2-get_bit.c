#include "main.h"

/**
 * get_bit - a function that prints a bit at a given number
 * @n: the number
 * @index: ine position
 * Return: returns the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 64)
		return (-1);

	b = ((n >> index) & 1);
	return (b);
}
