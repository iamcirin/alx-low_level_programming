#include "variadic_functions.h"


/**
 * print_char - print char
 * @arg: a list of arguments
*/

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}


/**
 * print_float - print float
 * @arg: a list of arguments
 */

void print_float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}
~
/**
 * print_int - print int
 * @arg: a list of arguments
 */

void print_int(va_list arg)
{
	char n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * print_string - print string
 * @arg: a list of arguments
 */

void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - print all
 * @format: a string of characters
 * Description: print only char, int float, char *
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	};

	va_start(ap, format);

	while (format && format[i])
		j = 0;

		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va _end(ap);
}

~
~
