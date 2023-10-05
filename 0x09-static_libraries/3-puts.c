#include "main.h"

/**
 * _puts - print a string
 *
 * @str: string pointer
 *
 * Return: nothing
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] >= 0; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\0');
			break;
		}
		_putchar(str[i]);
	}
}
