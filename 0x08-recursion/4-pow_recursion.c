#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: param
 * @y: param
 * Return: returns int
 */

int _pow_recursion(int x, int y)
{
	int even;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
