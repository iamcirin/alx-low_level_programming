#include "main.h"

/**
 * swap_int - Entry point
 * @a: pointer param
 * @b: pointer param
 */

void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
