#include "3-calc.h"

/**
 * get_op_func - a function pointer that selects the correct
 * function to perform the operation
 * @s: a pointer to char
 * Return: returns a pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t op[] = {
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
		if (*s == *op[i].op)
			return (op[i].f);
		i++;
	}
	return (NULL);
}
