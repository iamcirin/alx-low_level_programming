#include "variadic_functions.h"

/**
 * sum_them_all - a function that sums up all the the arguments
 * @n: number of args
 * Return: returns an int = sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x = 0;

	va_start(args, n);

	if (n == 0)
		return (0);



	for (i = 0; i < n; i++)
	{
		x += va_arg(args, int);
	}
	va_end(args);
	return (x);
}