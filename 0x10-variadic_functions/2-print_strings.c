#include "variadic_functions.h"

/**
 * print_strings - a function tht prints var number of strings
 * @separator: a pointer to a symbol
 * @n: number of vars passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int i;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
		va_end(strings);
		printf("\n");
}
