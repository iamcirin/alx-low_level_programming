#include "main.h"

/**
 * print_name - func that prints a name
 * @name: name to print
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{

		f(name);
	}
}
