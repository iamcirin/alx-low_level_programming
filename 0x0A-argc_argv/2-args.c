#include "main.h"

/**
 * main - a program jthat prints all arguments it receives
 * @argc: returns the number of elements passed
 * @argv: an array of elemnts passed
 * Return: returns 0 - success
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
