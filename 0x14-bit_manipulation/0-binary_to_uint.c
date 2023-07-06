#include "main.h"

/**
 * _atoi_fun - a functio  that converta char to an int
 * @t: a char
 * Return: returns an int
 */

unsigned int _atoi_fun(char t)
{
	return ((unsigned int)t - '0');
}

 /**
  * binary_to_uint - a function taht converts a binary to an unsgn    d int
  * @b: a pointer to binary char
  * Return: returns an unsgnd int
  */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int x = 0;
	unsigned int binary = 1;
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		n = _atoi_fun(b[i]);

		if (n != 0 && n != 1)
			return (0);

		x += n * binary;
		binary *= 2;
	}
	return (x);
}

