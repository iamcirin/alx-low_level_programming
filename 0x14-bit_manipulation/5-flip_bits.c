#include "main.h"

/**
 * flip_bits - a function that flips the bits
 * @n: an int
 * @m: int
 * Return: returns a bit_num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_num = 0;
	unsigned long int num;

	num = n ^ m;

	do {
		bit_num += (num & 1);
		num >>= 1;
	} while (num > 0);
	return (bit_num);
}
