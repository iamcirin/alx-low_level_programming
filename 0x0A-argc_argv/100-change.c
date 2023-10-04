#include "main.h"
#include <stdlib.h>
#include<stdio.h>
#include <string.h>
/**
 * main - an ENtry point
 * @argc: a number of args passed to the cli
 * @argv: an array of the args passed to the cli
 * Return: returns numnbers of coins
 */
int main(int argc, char *argv[])
{
	int cents, coins_counter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents != 0)
		{
			if (cents >= 25)
			{
				cents -= 25;
			}
			if (cents >= 10)
			{
				cents -= 10;
			}
			if (cents >= 5)
			{
				cents -= 5;
			}
			if (cents >= 2)
			{
				cents -= 2;
			}
			if (cents >= 1)
			{
				cents--;
			}
		coins_counter++;
		}
	printf("%d\n", coins_counter);
	}

return (0);
}
