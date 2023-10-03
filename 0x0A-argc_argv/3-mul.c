#include "main.h"

/**
 * myatoi - a function that convert a string number to int
 * @number: a char pointer
 * Return: returns an int
 */

int myatoi(char *number)
{
	  int i = 0;
	  int res = 0;
	  int sign = 1;

	if (number[0] == '-')
	{
	sign = -1;
	i++;
	}

	for (; number[i] != '\0'; i++)
	{
		res = res * 10 + number[i] - '0';
	}
	return (res * sign);
}
/**
 * main - Entry level
 * @argc: number of args passed to the cli
 * @argv: array of args
 *
 * Return: returns 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", myatoi(argv[1]) * myatoi(argv[2]));
	return (0);
}

