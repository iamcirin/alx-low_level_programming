#include "main.h"

/**
 * _sqrt_recursion_wrapper - Entry point
 * @n: param
 * @min: param
 * @max: param
 * Return: returns int
 */

int _sqrt_recursion_wrapper(int n, int min, int max)
{
	int guess, guess_squared;

	guess = (min + max) / 2;
	guess_squared = guess * guess;

	if (guess_squared == n)
		return (guess);
	else if (min == max)
		return (-1);
	else if (guess_squared < n)
		return (_sqrt_recursion_wrapper(n, guess + 1, max));
	else
		return (_sqrt_recursion_wrapper(n, min, guess - 1));
}

/**
 * _sqrt_recursion - Entry point
 * @n : param
 * Return: returns int
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_wrapper(n, 1, n));
}
