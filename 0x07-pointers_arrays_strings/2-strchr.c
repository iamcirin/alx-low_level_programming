#include "main.h"

/**
 * _strchr - Entry point
 * @s: param
 * @c: param
 * Return: returns s or NULL
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
			return ('\0');
}
