#include "main.h"

/**
 * _atoi - a function that turns a char to an int
 * @c: the char to turn into an int
 * Return: returns an unsogned int
 */
unsigned int _atoi(char c)
{
	return ((unsigned int) (c - '0'));
}

/**
 * binary_to_uint - a function that prints the int of a binary number
 * @b: a pointer to 0 and 1 string
 * Return: returns the base 10 number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int m;
	unsigned int number = 0, base = 1, d = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}

	for (m = i - 1; m >= 0; m--)
	{
		d = _atoi(b[m]);

		number += d * base;
		base *= 2;
	}
	return (number);
}
