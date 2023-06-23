#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print_all_args - a struct that holds 2 members
 * @placeholder: a char represent the placeholder for
 * the corresponding data type
 * @func: a pointer to a function that prints the data type
 * corresponding to the placeholder char
 */

typedef struct print_all_args
{
	char *placeholder;
	void (*func)(va_list args);
} print_arg;

#endif
