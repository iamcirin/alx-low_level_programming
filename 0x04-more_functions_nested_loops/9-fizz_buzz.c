#include "main.h"

/**
 * main - Entry point
 * Descritpion: checks for multiples of 3, 5, and 15
 * Return: return 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz\n");
	return (0);
}
