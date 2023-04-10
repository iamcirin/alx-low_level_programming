#include "main.h"


/**
 * _atoi - convert charachter to a an integer
 * @c: a param char
 * Return: returns an integer
 */
unsigned int _atoi(char c)
{
	return ((unsigned int) c + 48);
}

/**
 * _strlength - counts the length of an array of char
 * @str: string param
 * Return: returns the length
 */
unsigned int _strlength(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * binary_to_uint - converts a binary to a decimal
 * @b: binary param
 * Return: returns 0 or decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0, base = 1, bit = 0;

	if (b == NULL)
		return (0);

	for (i = _strlength(b) - 1; i >= 0; i--)
	{
		bit = _atoi(b[i]);

		if (bit != 0 && bit != 1)
			return (0);

		decimal += bit * base;
		base *= 2;
	}
	return (decimal);
}
