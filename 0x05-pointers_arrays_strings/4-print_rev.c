#include "main.h"

/**
 * print_rev - Entry point
 * @s: pointer to character param
 */

void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
		_putchar('\n');
}
