#include "main.h"

/**
 * is_prime_number - Entry point
 * @n: param
 * Return: returns int
 */


int is_prime_number(int n)
{
	int divisor = 5;

	if (n % divisor == 0 || divisor == 1)
		return (0);
	if (divisor * divisor > n)
		return (1);
	return (is_prime_number(n));
}
