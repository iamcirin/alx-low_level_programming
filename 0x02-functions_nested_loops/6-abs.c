#include"main.h"

/**
 * _abs - a functio, that return the absolute value of an integer
 *
 * @n : integer param
 *
 * Return: returns n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
