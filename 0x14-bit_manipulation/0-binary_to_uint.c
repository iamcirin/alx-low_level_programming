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
 * _power - raise a given number to a specified number
 * @first: param
 * @second: param
 * Return: returns the result
 */
unsigned int _power(unsigned int first, unsigned int second)
{
	unsigned int result = 1;

	while (second != 0)
	{
		result *= first;
		--second;
	}
	return (result);
}

/**
 * binary_to_uint - converts a binary to a decimal
 * @b: binary param
 * Return: returns 0 or decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	for (i = _strlength(b) - 1; i >= 0; i--)
	{

		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
		decimal += _power(2, _strlength(b) - 1 - i);
		}

	}
	return (decimal);
}
