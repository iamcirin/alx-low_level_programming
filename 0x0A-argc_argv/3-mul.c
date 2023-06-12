#include "main.h"

/**
 * main - aprogram that multiplies 2 numbers
 * @argc: returns the numbers of elements passed
 * @argv: an array of the elements passed
 * Return: returns 0 - success
 */

int main(int argc, char *argv[])
{
	int total = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", total);
	return (0);
}
