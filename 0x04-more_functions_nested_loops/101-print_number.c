#include "main.h"

/**
 * print_number - Prints the integer
 * @n: param
 */

void print_number(int n)
{
	int num = n;

	if (n < 0)
		_putchar('-');
	num = -num;
	if (num / 10 > 0)
		_putchar(num / 10);
	_putchar((num % 10) + 48);
}
