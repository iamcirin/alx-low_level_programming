#include "function_pointers.h"

/**
 * print_name - a function that prints a name according to the function 
 * @name: a pointer to a string
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
