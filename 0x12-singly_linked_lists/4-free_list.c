#include "lists.h"
#include<stdlib.h>

/**
 * free_list - a function that frees a node in a list
 * @head: a pointer to head node
 */

void free_list(list_t *head)
{
	list_t *node;

	node = head;
	while (node != NULL)
	{
		node = node->next;
		free(node->str);
		free(node);

	}
}
