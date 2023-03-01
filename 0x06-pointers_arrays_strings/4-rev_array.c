#include "main.h"

/**
 * reverse_array - Entry point
 * @n: param
 * @a: pointer
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}

