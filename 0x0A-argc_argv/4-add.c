#include "main.h"

/**
 * main - a program that adds positive numbers
 * @argc: returns the numnbers of the elements passed
 * @argv: an array of the elements passed
 * Return: returns 1 if on of the elements passed not a digit and 0 if success
 */
int main(int argc, char *argv[])

{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (strlen(argv[i]) > 1)
		{
			if (!isdigit(argv[i][0]) || !isdigit(argv[i][1]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
