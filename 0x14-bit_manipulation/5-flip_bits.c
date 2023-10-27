#include "main.h"

/**
 * flip_bits - a function that returns the of bits flipped
 * @n: 1st number
 * @m: second number
 * Return: returns an unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b = 0;
	unsigned long int d;

	d = n ^ m;

	do {
		b += (d & 1);
		d >>= 1;
	} while (d > 0);

	return (b);
}
