#include "3-calc.h"

/**
 * op_add - a function that adds 2 int
 * @a: 1st int
 * @b: 2nd int
 * Return: sum of 2 ints
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that substruct 2 ints
 * @a: 1st int
 * @b: 2nd int
 * Return: returns an int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies 2 ints
 * @a: 1st int
 * @b: 2nd int
 * Return: returns an int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides 2 int
 * @a: 1st int
 * @b: 2nd int
 * Return: returns an int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that get the reminder between a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: returns an int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
