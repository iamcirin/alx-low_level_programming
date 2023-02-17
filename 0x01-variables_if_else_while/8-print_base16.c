#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	char c;
	/* your code goes there */
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
		putchar('\n');
	return (0);
}
