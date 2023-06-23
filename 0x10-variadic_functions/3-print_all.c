#include "variadic_functions.h"


/**
 * print_char - a function that prints a char
 * @args: a list of arguments
 */

void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_int - a function that prints an integer
 * @args: a list of arguments
 */

void print_int(va_list args)
{
	int d = va_arg(args, int);

	printf("%d", d);
}

/**
 * print_float - a function that prints a float
 * @args: a list of args
 */

void print_float(va_list args)
{
	float f = va_arg(args, double);

	printf("%f", f);
}

/**
 * print_string - a function that prints a string
 * @args: a list of args
 */

void print_string(va_list args)
{
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - a function that prints all the args
 * @format: a string that consists of placeholders
 */


void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0, m = 0;


	print_arg funx[] = {
		{"c", print_char},
		{"f", print_float},
		{"i", print_int},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && format[i] != '\0')
	{

		while (m < 4 && (format[i] != *(funx[m].placeholder)))
			m++;
		if (m < 4)
		{
			printf("%s", separator);
			funx[m].func(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}

