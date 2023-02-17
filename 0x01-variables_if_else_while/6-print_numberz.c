#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints single digit numbers of vase 10
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	/* your code goes there */
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
