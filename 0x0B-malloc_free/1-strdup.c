#include "main.h"

/**
 * _strdup - Entry point
 * @str: param
 * Return: returns a pointer or NULL
 */


char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	p = malloc((i + 1)  * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
