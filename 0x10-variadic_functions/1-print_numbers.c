#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers followed by a sep
 * @separator: a pointer to char
 * @n: number of cars passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;

	unsigned int i;
	int x;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(numbers, int);
		if (i < n - 1)
		{
			printf("%d", x);
			if (separator)
			{
				printf("%s", separator);
			}

		}
		else
		{
			printf("%d\n", x);
		}
	}
	va_end(numbers);
}

