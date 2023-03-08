#include "main.h"

/**
 * is_prime_number - Entry point
 * @n: param
 * @divisor: param
 * Return: returns int
 */


int is_prime_number(int n, int divisor)
{
	if (n % divisor == 0 || divisor == 1)
		return (0);
	if (divisir * divisor > n)
		return (1);
	return (is_prime_number(n, divisor + 1));
}
