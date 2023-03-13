#include "main.h"

/**
 * str_concat - Entry point
 * @s1: param
 * @s2: param
 * Return: returns p or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int m, l;
	int i = 0, j = 0;
	int r = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	p = malloc((j + i + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
	{
		p[l] = s1[l];
	}
	for (m = l; m < (i + j); m++)
	{
		p[m] = s2[r];
		r++;
	}
	p[m] = '\0';
	return (p);
}
