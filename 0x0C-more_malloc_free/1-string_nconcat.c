#include"main.h"

/**
 * string_nconcat - a function that allocates enougn memory ofr s1 and n s2
 * @s1: a pointer to a string
 * @s2: a pointer to a string
 * @n: number of s2 char to concat
 * Return: return a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, m = 0, l;

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
	if (n >= j)
		n = j;

	ptr = malloc(i + n + 1);
	if (ptr == NULL)
		return (NULL);

	for (m = 0; s1[m] != '\0'; m++)
	{
		ptr[m] = s1[m];
	}
	for (l = 0; l < n; l++)
	{
		ptr[m] = s2[l];
		m++;
	}
	ptr[m]  = '\0';
	return (ptr);
}
