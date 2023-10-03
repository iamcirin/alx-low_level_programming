#include "main.h"

/**
 * main - Entry point
 * @argc: an int
 * @argv: an array
 * Return: return 0 - Success
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

