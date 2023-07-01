#include "lists.h"
#include<stdlib.h>

/**
 * free_list - a function that frees a node in a list
 * @head: a pointer to head node
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);

	}
}
