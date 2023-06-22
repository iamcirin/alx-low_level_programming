#include<stdlib.h>
#include<stdio.h>
#include<string.h>


/**
 * main - an Entry point
 * Description: a function that prints the opcodes of its
 * own main function
 * @argc: a counter of the elemnst passed
 * @argc: an array of the elements passed
 * Return: returns success
 */


int main(int argc, char *argv[])
{
	int ind, byte_number;
	char *p = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte_number = atoi(argv[1]);
	if (byte_number < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (ind = 0; ind < byte_number; ind++)
	{
		printf("%02x", p[ind] & 0xFF);
		if (ind != byte_number - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
