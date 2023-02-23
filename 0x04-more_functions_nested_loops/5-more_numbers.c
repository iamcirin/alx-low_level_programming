#include "main.h"

/**
 * more_numbers - Entry point
 */

void more_numbers(void)
{
	int i;
	int l;
	int num;

	for (l = 0; l < 10; l++)
	{
		for (i = 0; i < 15; i++)
		{
			num = i;
		if (i > 9)
		{
			_putchar(49);
			num = i % 10;
		}
		_putchar(num + '0');
	}

		_putchar('\n');
	}
}
