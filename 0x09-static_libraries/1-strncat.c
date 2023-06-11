#include "main.h"

/**
 * _strncat - Entry point
* @dest: pointer
* @src: pointer
* @n: param int
* Return: returns a char array
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n &&  src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
