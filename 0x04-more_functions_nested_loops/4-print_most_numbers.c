#include "main.h"

/**
 * print_most_numbers - Entry point
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 4 && i != 2)
		{
		_putchar(i + '0');
		}
	}

		_putchar('\n');
}
