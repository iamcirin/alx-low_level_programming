#include "main.h"
/**
 * fibonacci - prints the first 50 fibonacci numbers
 */

void fibonacci(void)
{
	long int fibo[120];
	int i;
	int j;

	fibo[0] = 1;
	fibo[1] = 2;

	for (i = 2; i < 102; i++)
	{
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	}

	for (j = 0; j < 98; j++)
	{
		if (j < 49)
		{
		printf("%ld, ", fibo[j]);
		}
		else
{

			printf("%ld", fibo[j]);
		}
	}
printf("\n");
}
/**
 * main - Entry point
 * Return: returns 0
 */
int main(void)
{
	fibonacci();
	return (0);
}
