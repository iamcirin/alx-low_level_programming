#include "main.h"

/**
 * _memset - Entry point
 * @s: param
 * @b: param
 * @n: param
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i]  = b;
	}
	return (s);
}
