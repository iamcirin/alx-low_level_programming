#include "main.h"

/**
 * _isdigit - Entry point
 * @c: params char
 * Return: return 1 if digit and 0 if not
 */


int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
