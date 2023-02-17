#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point.
 *
 * Description: checks if n positive, negative or equal to zero
 *
 * Return: returns 0 (Success)
 */
int main(void)

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
