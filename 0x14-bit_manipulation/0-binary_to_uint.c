#include "main.h"

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

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		bit = atoi(b[i]);

		if (bit != 0 && bit != 1)
			return (0);

		decimal += bit * base;
		base *= 2;
	}
	return (decimal);
}
