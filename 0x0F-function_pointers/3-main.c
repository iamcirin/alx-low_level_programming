#include "3-calc.h"

/**
 * main - an entry point
 * @argc: the number of args
 * @argv: the array of args
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int m, n;
	char *symbol;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n = atoi(argv[1]);
	m = atoi(argv[3]);
	symbol = argv[2];


	if (get_op_func(symbol) == NULL || symbol[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*symbol == 47 || *symbol == 37) && m == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(symbol)(n, m));
	return (0);
}
