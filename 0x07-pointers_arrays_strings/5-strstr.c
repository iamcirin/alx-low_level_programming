#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: param
 * @needle: param
 * Return: returns char
 */

char *_strstr(char *haystack, char *needle)
{
	char *t, *d;

	while (*haystack != '\0')
	{
		t = haystack;
		d = needle;
		while (*d != '\0' && *haystack == *d)
		{
			haystack++;
			d++;
		}
		if (!*d)
		{
			return (t);
		}
		haystack++;
	}
		return ('\0');
}
