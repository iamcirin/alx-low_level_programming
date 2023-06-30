#ifndef LISTS_H
#define LISTS_H

#include<stdio.h>
#include<stdlib.h>

/**
 * struct list_h - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_h
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_h;

#endif
