#include "main.h"

/**
 * _pow_recursion - a function returns the vaule of x raised to the power of y.
 * @x: int param
 * @y: int param
 * Return: returns the power of x raised to the power y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
