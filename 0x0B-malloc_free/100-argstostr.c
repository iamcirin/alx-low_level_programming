#include "main.h"

/**
 * argstostr - a function that concats all the args of a program
 * @c: numbers of args
 * @av: arrays of the args
 * Return: returns NULL or a pointer
 */

char *argstostr(int c, char **av)
{
	int len = 0, m = 0;
	int i, j;
	char *p;

	if (c == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[m] = av[i][j];
			m++;
		}
		p[m] = '\n';
		m++;
	}
	p[m] = '\0';
	return (p);
}



