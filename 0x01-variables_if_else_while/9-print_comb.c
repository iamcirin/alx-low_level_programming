#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers
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
		if (i < 9)
		{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
