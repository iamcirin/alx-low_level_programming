#include"main.h"

/**
 * _isalpha - function checks is the arg an alphabet or not
 *
 * @c : checks input of function
 *
 * Return: return 1 if `c` is alpha otherwise always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
