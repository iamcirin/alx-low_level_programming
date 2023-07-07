#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: returns an int
 */
int get_endianness(void)
{
	unsigned int n = 1;

	char *t = (char *) &n;

	return (t[0]);
}
