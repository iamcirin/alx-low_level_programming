#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * followed by a new line
 *
 * @seperator: a pointer to a string
 * @n: number of args
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (i != (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
}
