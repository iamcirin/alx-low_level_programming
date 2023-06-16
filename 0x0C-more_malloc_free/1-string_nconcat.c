#include "main.h"

/**
 * string_nconcat - a function that concats 2 strings
 * @s1: first string
 * @s2: 2nd string
 * @n: first bytes of s2
 * Return: returns NULL or a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i = 0, c;
	unsigned int m, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	while (*s1 != '\0')
	{
		i++;
		s1++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	if (n > j)
		n = j;

	p = malloc(i + n + 1);
	if (p == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
	{
		p[c] = s1[c];
	}
	for (m = 0; m < n && s2[m] != '\0'; m++)
	{
		p[i] = s2[m];
		i++;
	}
	p[i] = '\0';
	return (p);
}
