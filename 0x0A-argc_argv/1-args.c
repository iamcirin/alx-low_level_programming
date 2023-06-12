#include "main.h"

/**
 * main - a program that prints the number of elements passed  into it
 * @argc: returns the of elements passed to the program
 * @argv: an array of elements passed to the program
 * Return: return 0 - success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
