#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include<stdio.h>

/**
 * isnumber - a function that checks id data is a digit or not
 * @numb: a poiter to a string
 * Return: returs 0 or 1
 */
int isnumber(char numb[])
{
	int i;

	for (i = 0; numb[i] != '\0'; i++)
	{
		if (!isdigit(numb[i]))
			return (1);

	}
	return (0);
}
/**
 * main - an Entry point
 * @argc: the number of the args passed to the cli
 * @argv: the array that contains the args passed to the cli
 * Return: return 0 - success or 1 failure
 */


int main(int argc, char *argv[])
{
	int n;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (n = 1; n < argc; n++)
	{
		if (isnumber(argv[n]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[n]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
