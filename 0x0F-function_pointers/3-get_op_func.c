#include "3-calc.h"

/**
 * get_op_func - a function that returns apointer to a function that
 * returns an int and has 2 int args
 * @s: a char pointer to the symbol
 * Return: returns a pointer to func
 */

int (*get_op_func(char *s))(int, int)
{
	op_t opers[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (*s == *opers[i].op)
			return (opers[i].f);
		i++;
	}
	return (NULL);
}

