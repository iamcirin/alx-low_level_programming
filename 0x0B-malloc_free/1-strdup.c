#include "main.h"

/**
 * _strdup - a program that duplicates a sting to an allocated mem
 * @str: the string to duplicate
 * Return: returns NULL or a pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	char *p;
	int n;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}

	p = malloc(i + 1);

	if (p == NULL)
		return (NULL);

	for (n = 0; n < i + 1; n++)
	{
		p[n] = *str;
		str++;
	}
	return (p);
}
