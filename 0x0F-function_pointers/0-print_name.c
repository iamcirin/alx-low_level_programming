#include "function_pointers.h"

/**
 * print_name - a function that prints name
 * @name: a pointer to the name to print
 * @f: a pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
