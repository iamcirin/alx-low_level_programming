#include"main.h"

/**
 * print_to_98 - print the sum of two integers
 *
 * @n: first input
 *
 */

void print_to_98(int n)
{

	if (n < 98)
	{
		do {
			printf("%d, ", n);
			n++;
		} while (n < 98);
	printf("98\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		do {
			printf("%d, ", n);
			n--;
		} while (n > 98);
	printf("98\n");
	}
}
