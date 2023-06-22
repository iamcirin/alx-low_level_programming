#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: a pointer to seperator
 * @n: number of args
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (string)
			printf("%s", string);
		else
		{
			printf("(nil)");
		}
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
