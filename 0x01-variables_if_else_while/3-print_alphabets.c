#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase and uppercase alphabet
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	/* your code goes there */
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{	putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
