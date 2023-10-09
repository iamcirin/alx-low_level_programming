#include "main.h"

/**
 * _strdup - a function that duplicates a sting to a new memory
 * @str: a pointer to a string
 * Return: returns a pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	int n = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
ptr = malloc(i + 1);
if (ptr == NULL)
	return (NULL);
while (str[n] != '\0')
{
	ptr[n] = str[n];
	n++;
}
return (ptr);
}
