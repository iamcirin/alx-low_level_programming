#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints alphabet uses putchar func
 *
 * Return: return 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
