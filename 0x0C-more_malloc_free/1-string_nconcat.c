#include "main.h"

/**
 * string_nconcat - Entry point
 * @s1: param
 * @s2: param
 * @n: param
 * Return: returns str or NULL
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i = 0, j = 0;
	char *str;
	unsigned int p, q;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;
	if (n > j)
		n = j;

	str = (char *) malloc((i + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (p = 0; s1[p] != '\0'; p++)
		str[p] = s1[p];
	for (q = 0; q < n && s2[q] != '\0'; q++)
	{
		str[i] = s2[q];
		i++;
	}
	str[i] = '\0';
	return (str);
}
