#include "main.h"

/**
 * _strspn - Entry point
 * @s: param
 * @accept: param
 * Return: returns i
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	i = 0;
	while (s[i] != '\0')
	{
		f = 1;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0;
				break;
			}
			j++;
		}
		if (f == 1)
		{
			break;
		}
		i++;
	}
	return (i);
}
