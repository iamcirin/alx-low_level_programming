#include<main.h>

void print_times_table(int n)
{
	int prod;

	for (int i = 0; i < n + 1; i++)
	{
		putchar(48);
		for (int j = 1; j < n + 1; j++)
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
		else
		{

			putchar((prod / 100) + 48);
			putchar(((prod / 10) -10) + 48);
		}
		putchar(prod % 10 + 48);
		}
		putchar('\n');
	}
}
