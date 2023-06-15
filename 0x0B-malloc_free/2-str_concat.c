#include "main.h"

/**
 * str_concat - a program concats 2 strings and return a pointer
 * @s1: a pointer to the first string
 * @s2: a pointer to a second string
 * Return: returns NULL or a pointer to a string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int n, m;
	int j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	p = malloc(i + j + 1);

	if (p == NULL)
		return (NULL);

	for (n = 0; n < i; n++)
	{
		p[n] = s1[n];
	}
	for (m = 0; s2[m] != '\0'; m++)
	{
		p[n] = s2[m];
		n++
	}
	p[n] = '\0';
	return (p);
}
