#include "main.h"

/**
 * str_concat - a function that concats 2 strings
 * @s1: pointer to the 1st string
 * @s2: a pointer to the 2nd string
 * Return: returns a pointer or NULL
 */


char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, j = 0;
	int m, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	ptr = malloc(i + j + 1);

	if (ptr == NULL)
		return (NULL);
	for (m = 0; m < i; m++)
		ptr[m] = s1[m];
	for (n = 0; n < j; n++)
	{
		ptr[m] = s2[n];
		m++;
	}
	ptr[m] = '\0';
	return (ptr);
}
