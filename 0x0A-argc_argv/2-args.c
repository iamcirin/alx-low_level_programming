#include <stdio.h>

/**
 * main - Entry point
 * @argc: param
 * @argv: param
 * Return: returns success
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
