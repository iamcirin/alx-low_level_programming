#include "main.h"

/**
 * print_array - Entry point
 * @a: param
 * @n: param
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1 ; i++)
	{
		printf("%d", a[i]);
		printf(", ");
	}
	printf("%d\n", a[n - 1]);
}
