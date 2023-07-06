#include "main.h"

/**
 * get_bit - a function that gets the value a s bit
 * @n: an int
 * @index: an undgned int
 * Return: returns an int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bt;

	if (index > 16)
		return (-1);
	bt = ((n >> index) & 1);
	return (bt);
}
