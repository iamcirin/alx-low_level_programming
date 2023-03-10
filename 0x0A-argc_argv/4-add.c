#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * isNum - Entry point
 * @num: param
 * Return: return digit
 */

int isNum(char num[])
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
		return (0);
}

/**
 * main - Entry point
 * @argc: param
 * @argv: param
 * Return: returns success
 */


int main(int argc, char *argv[])
{

	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
