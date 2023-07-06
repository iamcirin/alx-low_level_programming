#include "main.h"

/**
 * print_binary - a function that convert an int to binary
 * @n: an int
 * Return: returns a binary
 */
void print_binary(unsigned long int n)
{
	int len;
	unsigned int x = 1;

	while (n > 0)
	{
		len++;
		n >>= 1;
	}
	len--;

if (len > 0)
x <<= len;

	while (x > 0)
	{
		if (n & x)
			_putchar ('1');
		else
			_putchar('0');
		x >>= 1;
	}
}
