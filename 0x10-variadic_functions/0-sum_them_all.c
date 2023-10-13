#include "variadic_functions.h"

/**
 * sum_them_all - a function that sums all its parameters
 * @n: number of args
 * Return: returns an int sul or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
