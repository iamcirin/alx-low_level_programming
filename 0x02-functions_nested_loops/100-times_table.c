#include"main.h"

/**
 * print_times_table - prints times n table
 * @n: param
 */

void print_times_table(int n)
{
	int prod;
	int i;
	int j;

	for (i = 0; i < n + 1; i++)
	{
		putchar(48);
		for (j = 1; j < n + 1; j++)
		{
		putchar(',');
		putchar(' ');

		prod = i * j;

		if (prod <= 9)
		{
			putchar(' ');
			putchar(' ');
		}
		else if (prod > 9 && prod < 100)
		{

		putchar(' ');
			putchar((prod / 10) + 49);
		}
		else if (prod >= 100 && prod < 1000)
		{

			putchar((prod / 100) + 48);
			putchar(((prod / 10) - 10) + 48);
		}
		else
		{
			putchar((prod / 1000) + 48);
			putchar(((prod / 100) % 10) + 48);
			putchar(((prod / 10) % 10) + 48);
		}

		putchar(prod % 10 + 48);
		}
		putchar('\n');
	}
}
