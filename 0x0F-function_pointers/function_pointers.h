#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif
