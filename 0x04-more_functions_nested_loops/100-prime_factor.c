#include "main.h"

/**
 * largest_prime_factor - Entry point
 * @num: lon int param
 */


void largest_prime_factor(long int num)
{
	int largest, prime;

	while (num % 2 == 0)
	{
		num = num / 2;
	}

	for (prime = 3; prime * prime <= num; prime += 2)
	{
		while (num % prime == 0)
		{
			num = num / prime;
			largest = prime;
		}
	}
	if (num > 2)
	{
		largest = num;
	}
	printf("%d\n", largest);
}

/**
 * main - Entry point
 * Description: prints the largest prime factor
 * Return: return 0
 */
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
