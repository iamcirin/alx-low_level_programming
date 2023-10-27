#include "main.h"

/**
 * print_binary - a function that prints the binary number of a digit
 * @n: the int to print as a binary
 */

void print_binary(unsigned long int n)
{
	int l = 0;
	unsigned long int m = 1, k;

	k = n;
	while (k > 0)
	{
		l++;
		k >>= 1;
	}
	l--;

	if (l > 0)
		m <<= l;

	while (m > 0)
	{
		if (n & m)
			_putchar('1');
		else
			_putchar('0');
		m >>= 1;
	}
}
