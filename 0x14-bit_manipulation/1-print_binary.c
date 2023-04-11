#include "main.h"


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


/*
 * print_binary - convert an integer to a binary
 * @n: intger param
 */

void print_binary(unsigned long int n)
{
	char binary[100] = "";
	int i = 0;
	int j = 0;

	if (!n)
		_putchar('0');
	while (n > 0)
	{
		if (n % 2 == 1)
		{
			binary[j] = '1';
		}
		else
			binary[j] = '0';
		n /= 2;
		j++;
	}

	for (i = _strlength(binary) - 1; i >= 0; i--)
	{
		_putchar(binary[i]);
	}
}
