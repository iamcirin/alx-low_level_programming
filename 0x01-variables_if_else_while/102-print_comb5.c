#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digits.
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	/* your code goes there */
	int first2digits = 0;
	int second2digits;

	while (first2digits <= 99)
	{
		second2digits = first2digits;
		while (second2digits <= 99)
		{
			if (second2digits != first2digits)
			{

				putchar((first2digits / 10) + 48);
				putchar((first2digits % 10) + 48);
				putchar(' ');
				putchar((second2digits / 10) + 48);
				putchar((second2digits % 10) + 48);

				if (first2digits != 98)
				{
				putchar(',');
				putchar(' ');
				}
			}
			second2digits++;

		}
		first2digits++;
	}

	putchar('\n');
	return (0);
}
