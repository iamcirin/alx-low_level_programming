#include "main.h"

/**
 * factorial - Entry point
 * @n: param
 * Return: returns int
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
