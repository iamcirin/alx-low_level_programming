#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: param character
 *
 * Return: returns 1 is maj and 0 if min
 */

int _isupper(char c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
