#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two digits.
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	/* your code goes there */
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
		putchar(i + '0');
		putchar(j + '0');
		if (i < 8 || j < 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
